void setup() {
// GPIO32 pinini tanımlıyoruz
const int ledPin = 32;

void setup() {
  // LED pini çıkış (OUTPUT) olarak ayarlanıyor
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LED'i yak
  digitalWrite(ledPin, HIGH);
  delay(1000); // 1 saniye bekle
  // LED'i söndür
  digitalWrite(ledPin, LOW);
  delay(1000); // 1 saniye bekle
}
