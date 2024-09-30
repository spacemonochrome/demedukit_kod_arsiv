#include <WiFi.h>
#include <HTTPClient.h>


const char* ssid = "FiberHGW_TPD280_2.4GHz";
const char* password = "12abdulselam47";
//https://api.thingspeak.com/
String serverName = "https://api.thingspeak.com/update";
unsigned long lastTime = 0;
unsigned long timerDelay = 1000;
String veri = "";
boolean durum = false;

void setup() {
  Serial.begin(115200); 
  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
 
  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
}
void loop()
{
  if (durum)
  {
    Serial.print(veri);
    Serial.print("gönderiliyor...");
    //Check WiFi connection status
    if(WiFi.status()== WL_CONNECTED){
      HTTPClient http;
      String serverPath = serverName + "?api_key=5RI5NHA9983FPKFU&field1=" + veri ;
      http.begin(serverPath.c_str());
      
      // Send HTTP GET request
      int httpResponseCode = http.GET();
      
      if (httpResponseCode>0) {
        Serial.print("HTTP Response code: ");
        Serial.println(httpResponseCode);
        String payload = http.getString();
        Serial.println(payload);
      }
      else
      {
        Serial.print("Error code: ");
        Serial.println(httpResponseCode);
      }
      // Free resources
      http.end();
    }
    else
    {
      Serial.println("WiFi Disconnected");
    }

    veri = "";
    durum = false;
  }
}

void serialEvent()
{
  while (Serial.available())
  {
    char gelen = char(Serial.read());
    veri += gelen;
    if (gelen == '\n')
    {
      durum = true;
    }
  }
}
