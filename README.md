# MiniBank
MiniBank, C programlama dili kullanılarak yazılmış basit bir banka uygulamasıdır. Kullanıcılar bakiye sorgulama, para yatırma ve para çekme işlemlerini gerçekleştirebilir.

## Özellikler

- Kullanıcı adı ile giriş
- Bakiye görüntüleme
- Para yatırma
- Para çekme (yetersiz bakiye kontrolü ile)
- Basit ve kullanıcı dostu arayüz

## Kullanım

1. Programı çalıştırın.
2. Adınızı ve başlangıç bakiyenizi girin.
3. Menüden yapmak istediğiniz işlemi seçin:
    - `1` : Para çekme
    - `2` : Para yatırma
    - `3` : Bakiyenizi görüntüleme
4. İşlem sonrası güncel bakiye ekrana yazdırılır.

## Kurulum

1. `main.c` dosyasını bilgisayarınıza indirin.
2. Terminal veya komut istemcisinde programın bulunduğu klasöre gidin.
3. Programı derleyin:

```bash
gcc main.c -o main
Programı çalıştırın:

bash
Kopyala
Düzenle
./main   # Windows için: main.exe
Örnek Kullanım
rust
Kopyala
Düzenle
Merhaba, adınızı girin: Havva
Lütfen bakiyenizi giriniz: 1000
Merhaba Havva!
Para çekmek için 1'e
Para yatırmak için 2'ye
Bakiyenizi öğrenmek için 3'e tıklayınız.
Seçiminiz: 1
Çekmek istediğiniz tutarı giriniz: 200
Güncel bakiyeniz: 800.00
