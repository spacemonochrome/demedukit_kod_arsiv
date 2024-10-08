# Demedukit Kod Deposu
Demedukit eğitim kiti için yazılan kodları burada depoladım. ESP32 ve STM32 kodları içermektedir. aşağıdaki görselde eğitim kitinin fotoğrafları bulunmaktadır.

**- lis2dw12** 3 eksenli ivmeölçer sensörün kütüphanesidir.

**- ssd1306** oled ekranın kütüphanesidir.

### İçerik Kodları

1. **Demedukit_LedBlink_ESP32** ESP32 için adet Led yakıp söndürme uygulaması içermektedir.

1. **Demedukit_LedBlink** STM32 için adet Led yakıp söndürme uygulaması içermektedir.

1. **Demedukit_NTC_SSD1306** uygulaması ntc sensörden sıcaklığı okur I2C ile haberleştiği SSD1306 led ekrana yazar.

1. **Demedukit_LIS2DW12** uygulaması LIS2DW12 ivmeölçer sensöründen SPI ile aldığı veriyi SSD1306 ekranına yazdırır.

1. **Demedukit_ESP32_UART** uygulaması STM32'nin NTC sıcaklık sensöründen aldığı verileri hem led ekrana yazdırdığı hem de UART üzeründen ESP32'ye gönderdiği, ESP32'nin de WiFi üzerinden kullanıcı internetine bağlanıp Thingspeak sitesine veri göndermesi üzerine yazılmış bir koddur.

![image-Photoroom](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/caf58be4-9b95-47e0-9cd9-09ac88776e47)

------------
 **3.uygulama için STM32 ve ESP32 Tx-Rx kanallarını çaprazlama bağlamanız gerekir.**

![3](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/337c5501-6ed3-4772-8266-7281519b6ca0)


------------

 **Eğer STM32'ye kod atacaksanız Debugger portundan bağlanıp pin bağlantılarını aşağıdaki resme göre yapmalısınız. zaman zaman debuggeri güncellemeniz gerekebilir. bu durumda da 6 pini de boşta bırakmalısınız**
![1](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/a9de8186-686e-4be7-b273-a7377557b9a6)

------------

 **Eğer ESP32 Debug yapacaksanız USB-Port'a bağlanıp pin bağlantılarını aşağıdaki resme göre yapmalısınız.**
![2](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/9c0481d7-bad6-40c1-bbf9-2ae5dc9a75a0)
