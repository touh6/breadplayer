# breadplayer
<img width="3546" height="2712" alt="full ds" src="https://github.com/user-attachments/assets/f10c3aba-e837-42c1-b78a-35978bc906c2" />
a cassette player styled mp3 player with an e-ink display that shows album art when music is played.

## about the project:
this is an mp3 player with a 3d printed enclosure that is shaped like a cassette player. the heart of this device is the esp32-wroom microcontroller. other components include a waveshare 4.2'' e-Ink display, tactile buttons, pcm5102a, mt3608 booster, 3.5mm trs jack, microsd module with spi interface, tp4056 charging module, kcd11 spst switch and a 3.7v Li-Po battery. 

i wanted this to be in the shape of a cassette player as i've forever been enamored by retro tech. i absolutely love music; it is an integral part of me and i've always correlated them with my memories. so, this is special to me. 

i have a hard time visualizing certain things so i made a 2d version on canva to understand how i could actually pull this off and once i did, i made a dummy version of the same using cardboard. 

## 2d version:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/ea220eb0-dbf6-4d90-9a71-ae7ea30e55da"></td>
    <td><img src="https://github.com/user-attachments/assets/45cf7ebc-96a3-4762-8125-ba56a491bc2f"></td>
   <td><img src="https://github.com/user-attachments/assets/fb0c0bec-7162-4903-8ff3-7c8b4198e58b"></td>
    <td><img src="https://github.com/user-attachments/assets/8140dca5-5eab-4cba-b41a-06bb3e522a46"></td>
</tr></table>

## cardboard edition:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/08c97ef2-a888-46b2-87be-36573881fa1f"></td>
    <td><img src="https://github.com/user-attachments/assets/c0fa95f3-5423-4dce-ab04-39e5fb3560fb"></td>
   <td><img src="https://github.com/user-attachments/assets/1005ba38-4d8d-4f6c-9d8b-2b68756e2504"></td>
    <td><img src="https://github.com/user-attachments/assets/43cd7004-596a-40c1-bbfb-8f08f7e0644c"></td>
</tr></table>

<table><tr>
  <td><img src="https://github.com/user-attachments/assets/e09ae462-e4af-4d5e-bc98-fb5909f60c8c"></td>
    <td><img src="https://github.com/user-attachments/assets/4440cc71-7deb-49e5-86b9-182a8f0a1e28"></td>
   <td><img src="https://github.com/user-attachments/assets/dc88013b-8672-4dce-802c-d054d54dd53b"></td>
    <td><img src="https://github.com/user-attachments/assets/57dc5c67-5afa-451b-9743-500566573466"></td>
</tr></table>

i was quite happy with how the dummy version turned out. i ended up sticking with the same visuals and designed the whole thing on solidworks.

## to build your own breadplayer: 
firstly, buy all the components as mentioned in the [bill of materials](https://github.com/touh6/breadplayer/tree/main/bill%20of%20materials), use the perfboard and solder them using the wiring diagram/schematic. and then, you will need to 3d print the enclosure { files of which you can find in the [cad folder](https://github.com/touh6/breadplayer/tree/main/cad) }, assemble it all in the case, stick using glue and you're good to go! :))

## schematic:
<img width="3508" height="2481" alt="v9" src="https://github.com/user-attachments/assets/7335c157-85da-4e51-8f83-bb6974b38566" />
built using kicad

## wiring diagram:
<img width="1280" height="917" alt="WhatsApp Image 2026-06-16 at 3 24 42 PM" src="https://github.com/user-attachments/assets/8c788d20-290c-4de1-a4ec-c5cdc0a1ad96" />
built using fritzing

## construction:
<table><tr>
  <td><img src="https://github.com/user-attachments/assets/5133af00-e1a4-4d85-8d03-73664748cdc5"></td>
    <td><img src="https://github.com/user-attachments/assets/94fd8153-76ab-4256-9b28-9d3df2d3073e"></td>
</tr></table>

<table><tr>
      <h2 align="center">front & back: </h2>
  <td><img src="https://github.com/user-attachments/assets/94f74a7a-9233-4f35-bd5b-257f94cbc180"></td>
    <td><img src="https://github.com/user-attachments/assets/6900ae5d-6b3a-4307-9d03-2bd27cac8ba0"></td>
</tr></table>

<table><tr>
      <h2 align="center">top view & side view: </h2>
   <td><img src="https://github.com/user-attachments/assets/a825396f-ac19-403b-a847-b15efecff593"></td>
    <td><img src="https://github.com/user-attachments/assets/29b65d99-15a7-41ff-a37f-651889346109"></td>
</tr></table>

## assembled:
<img width="3050" height="2193" alt="full 3" src="https://github.com/user-attachments/assets/2c6415ce-f588-42c8-86f1-6b0f43402073" />

## tools i used:
<ul style="list-style-type:none;">
    <li>schematics: <a href="https://www.kicad.org">kicad</a></li>
    <li>cad: <a href="https://www.solidworks.com">solidworks</a></li>
    <li>wiring diagram: <a href="https://fritzing.org/">fritzing</a></li>
    <li>zine: <a href="https://www.canva.com">canva</a></li>
</ul>

## bill of materials: 
|name    |quantity  |cost|link|
|--------|----------|----------------|-----|
|1) ESP32-WROOM-32 | 1|  $3.58      |[link](https://robu.in/product/esp-wroom-32-esp32-wifi-bt-ble-mcu-module/)|
|2) Waveshare 4.2'' e-Ink Paper Display Module With SPI Interface | 1|  $29.58    |[link](https://robu.in/product/4-2-inch-e-ink-paper-display-module-with-spi-interface/)|
|3)  PCM5102a DAC Decoder Module | 1|  $4.74   |[link](https://hubtronics.in/pcm5102-i2s-digital-audio-dac-decoder-module)|
|4) 3.5mm TRS jack | 1|  $0.10    |[link](https://hubtronics.in/3.5mm-4pole-audio-plug)|
|5) 3.3V MicroSD SPI Module| 1|  $0.46    |[link](https://robocraze.com/products/sd-card-module)|
|6) Tactile Buttons| 10|  $0.47    |[link](https://robu.in/product/12x12x12mm-tactile-push-button-switch-10pcs/)|
|7) 3.7v Li-Po Battery (WLY803040) | 1|  $3.98      |[link](https://robu.in/product/wly803040-1000mah-3-7v-single-cell-rechargeable-lipo-battery/)|
|8) TP4056 Charging Module| 1|  $0.13  |[link](https://robu.in/product/tp4056-1a-li-ion-lithium-battery-charging-module-with-current-protection-type-c/)|
|9) KCD11 SPST Switch| 1|  $0.15     |[link](https://probots.co.in/rocker-switch-mini-on-off-spst-2-pin-kcd11.html)|
|10) MT3608 Booster| 1|  $0.34    |[link](https://robu.in/product/mt3608-2a-max-dc-dc-step-up-power-module-booster-power-module/)|
|10) Perfboard| 4|  $1.05    |[link](https://probots.co.in/dot-pcb-perfboard.html)|
|shipping  |        |    $3.17 |    |
|          |      total  |$47.75 |  |  |


## zine:
<img width="1410" height="2000" alt="breadplayer" src="https://github.com/user-attachments/assets/ce6a359f-36a5-489b-9efd-ccd7631ed872" />


