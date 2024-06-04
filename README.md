# Demedukit Kod Deposu
Demedukit eğitim kiti için yazılan kodları burada depoladım. ESP32 ve STM32 kodları içermektedir. aşağıdaki görselde eğitim kitinin fotoğrafları bulunmaktadır. 
-lis2dw12 3 eksenli ivmeölçer sensörün kütüphanesidir.
-ssd1306 oled ekranın kütüphanesidir.

1)demedukit_sicaklik uygulaması ntc sensörden sıcaklığı okur led ekrana yazar.
2)demedukit_3Divmeolcer uygulaması LIS2DW12 ivmeölçer uygulaması sensörden aldığı veriyi ekrana yazar.
3)demedukit_stm32_esp32 uygulaması STM32'nin NTC sıcaklık sensöründen aldığı verileri UART üzeründen ESP32'ye gönderdiği, ESP32'nin de WiFi üzerinden kullanıcı internetine bağlanıp internete veri göndermesi üzerine yazılmış bir koddur.
![image-Photoroom](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/caf58be4-9b95-47e0-9cd9-09ac88776e47)


3.uygulama için STM32 ve ESP32 Tx-Rx kanallarını çaprazlama bağlamanız gerekebilir.
![image](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/d3e72504-1500-4e47-a891-a58e520e4b77)
