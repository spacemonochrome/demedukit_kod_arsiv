# Demedukit Kod Deposu
Demedukit eğitim kiti için yazılan kodları burada depoladım. ESP32 ve STM32 kodları içermektedir. aşağıdaki görselde eğitim kitinin fotoğrafları bulunmaktadır.

**- lis2dw12** 3 eksenli ivmeölçer sensörün kütüphanesidir.

**- ssd1306** oled ekranın kütüphanesidir.

### İçerik Kodları

1. **demedukit_sicaklik** uygulaması ntc sensörden sıcaklığı okur led ekrana yazar.

1. **demedukit_3Divmeolcer** uygulaması LIS2DW12 ivmeölçer uygulaması sensörden aldığı veriyi ekrana yazar.

1. **demedukit_stm32_esp32** uygulaması STM32'nin NTC sıcaklık sensöründen aldığı verileri UART üzeründen ESP32'ye gönderdiği, ESP32'nin de WiFi üzerinden kullanıcı internetine bağlanıp internete veri göndermesi üzerine yazılmış bir koddur.

![image-Photoroom](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/caf58be4-9b95-47e0-9cd9-09ac88776e47)

------------
 **3.uygulama için STM32 ve ESP32 Tx-Rx kanallarını çaprazlama bağlamanız gerekir.**

![3](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/337c5501-6ed3-4772-8266-7281519b6ca0)


------------

 **Eğer STM32'ye kod atacaksanız micro-USB Debugger portundan bağlanıp pin bağlantılarını aşağıdaki resme göre yapmalısınız. zaman zaman debuggeri güncellemeniz gerekebilir. bu durumda da 6 pini de boşta bırakmalısınız**
![1](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/a9de8186-686e-4be7-b273-a7377557b9a6)

------------

 **Eğer ESP32 Debug yapacaksanız micro-USB portundan USB-Port'a bağlanıp pin bağlantılarını aşağıdaki resme göre yapmalısınız.**
![2](https://github.com/spacemonochrome/demedukit_kod_arsiv/assets/52783312/9c0481d7-bad6-40c1-bbf9-2ae5dc9a75a0)
