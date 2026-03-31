 # Crimson_Click

<img width="1366" height="768" alt="Screenshot (75)" src="https://github.com/user-attachments/assets/96443047-ade4-4433-be47-4521ddfda0ce" />

 
Crimson_Click is a 7 key macropad which performs certain special functions.  This macropad would help me to type smoothly and errorfree.It uses a special layout that makes every button easy to reach, giving a custom tool that stands out from regular rectangular keypads.We just have to simply connect the board to our computer using a USB-C cable. Since it uses the RP2040 chip, the computer will recognize it as a standard keyboard immediately
## Features
- 1x Seeed Xiao RP2040
- 7X Cherry MX Red2A switches
- 4x M3x16mm screws
- 4x M316mm nuts
- 1x case(Top, Bottom and Plate)
## Schematic

This schematic consists of the MOUDLE-SEEEDUINO-XIAO rp2040 microcontroller as the main MCU.Each switch is wired straight to its own pin, which makes the circuit simple and very reliable. It is a clean, custom design built to handle my favorite shortcuts and macros perfectly
<img width="1366" height="768" alt="Screenshot (74)" src="https://github.com/user-attachments/assets/62f52e4e-4205-4eb3-bdde-62a55e5f6c02" />
.

## PCB
Here's the pcb of my macropad. 4 keys are on the top and the 3 keys at the bottom are accompanied by the microcontroller. I used the SW_PUSH symbol for the keys and I have added the Cherry MX Red keys in my cad model.
<img width="1366" height="768" alt="Screenshot (73)" src="https://github.com/user-attachments/assets/22d96faf-f92d-4aab-b0a8-e574f01029cb" />

## Case and Plate
I used a sandwich-style case for this build, which stacks the top and bottom parts together. This design makes the board very strong.
<img width="1366" height="768" alt="Crimson_case" src="https://github.com/user-attachments/assets/caf93cdb-3c9d-472f-b46e-8ac541a26cb4" />
## Firmware Overview
This macropad uses a QMK firmware for everything. It consists of the keyboard.json, keymap.c and readme.md files. The firmware is configured according to the hardware of the macropad.

## Notes
It was fun making the macropad. I had to make the case more than 10 times tomake it more better. I learned something new and also found out that this field intrigues me a lot.

## BOM
- 1 Seeed Xiao rp2040
- 7 Cherry MX Red2A switches (https://www.cherry.de/en-us/product/mx2a-red)
- 4 M3X16mm screws
- 4 M3X16mm nuts



