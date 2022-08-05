# thermal\_printer

model: [appPOS58MU](https://www.approxtpv.es/es/17-impresoras-58mm)  
printer control langage: [ESC/POS](https://www.epson-biz.com/modules/ref_escpos/) (Epson Escape/Point of Sale)  
Wikipedia: [ESC/P - Variants](https://en.wikipedia.org/wiki/ESC/P#Variants)  

[Creative\_Commons](https://creativecommons.org/)  
[Openverse search | Query: "laptop" ; Licence: CC0 ; Extension: PNG,SVG](https://wordpress.org/openverse/search/image?q=laptop&license=cc0&extension=png,svg)  
[Openverse - "laptop"](https://search.openverse.engineering/image/8190af01-b2c5-48c0-91fb-d4009861da79) | [Image website](https://svgsilh.com/image/1293981.html)  
[Openverse - "buku nota"](https://search.openverse.engineering/image/59d9e40b-1125-4459-a1d1-f5264251f56c) | [Image website](https://svgsilh.com/ms/00bcd4/image/1723059.html)  
[Openverse - "tunjukkan"](https://search.openverse.engineering/image/586f32a2-c597-476f-b843-4136c4f777d1) | [Image website](https://svgsilh.com/ms/image/1598327.html)  

[RaspberryPi - Documentation - Configuration - Setting up a Headless RaspberryPi](https://www.raspberrypi.com/documentation/computers/configuration.html#setting-up-a-headless-raspberry-pi)  
[Ubuntu - Tutorials - How to install Ubuntu Server on your RaspberryPi - Wi-Fi or Ethernet](https://ubuntu.com/tutorials/how-to-install-ubuntu-on-your-raspberry-pi#3-wifi-or-ethernet)  

[Adafruit - Learn - Adafruit 2.8" PiTFT - Capacitive Touch - Easy Install](https://learn.adafruit.com/adafruit-2-8-pitft-capacitive-touch/easy-install-2)  

`$ sudo apt-get update && sudo apt-get install inkscape`  

```
apropos epson
man pbmtoepson
apt-file search pbmtoepson
apt-cache show netpbm
man pbm
```
```
$ cat feep.pbm
P1
# feep.pbm
24 7
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 0 0 1 1 1 1 0 0 1 1 1 1 0 0 1 1 1 1 0
0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 1 0
0 1 1 1 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 1 1 1 1 0
0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0
0 1 0 0 0 0 0 1 1 1 1 0 0 1 1 1 1 0 0 1 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
```
```
$ pbmtoepson <( cat <<_EOF
P1
# feep.pbm
24 7
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 0 0 1 1 1 1 0 0 1 1 1 1 0 0 1 1 1 1 0
0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 1 0
0 1 1 1 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 1 1 1 1 0
0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0
0 1 0 0 0 0 0 1 1 1 1 0 0 1 1 1 1 0 0 1 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
_EOF
) | xxd
```

