# Mini Arduino Cyclone Game

A DIY handheld replica of the classic arcade "Cyclone" game, built from scratch using an Arduino Mega, a custom PCB, and a handcrafted enclosure.

[![Watch the Demo](https://img.youtube.com/vi/STRhsyS3IJk/0.jpg)](https://www.youtube.com/watch?v=STRhsyS3IJk)
> *Click the image above to see the project working :)*

## About The Project

This project brings the functionality of a  large arcade Cyclone game into a portable form factor. The goal is simple but challenging: stop the chasing light exactly on the target LED.

I designed this project to practice PCB design, circuit integration, and utilizing recycled components for power. It combines a custom plywood top plate with 3D modeling concepts to create a fully functional game.

## Key Features

* **Classic Arcade Logic:** LEDs chase in a circle; pressing the button stops the sequence instantly.
* **Win/Loss Indication:** A center RGB LED provides immediate visual feedback—lighting up **White** for a win and **Red** for a loss.
* **Custom PCB:** Designed in EasyEDA, featuring a circular array of 15 LEDs + 1 Center RGB.
* **Recycled Power System:** Powered by a custom battery power bank from a broken power bank.
* **Handcrafted Design:** The enclosure features a hand-drilled plywood faceplate and a custom switch mechanism.

## How It Works

The brain of the project is an **Arduino Mega**.
1.  **The Loop:** The code (written in C) cycles through the outer ring of LEDs one by one to create a "chasing" effect.
2.  **The Input:** A custom-made tactile button is connected to the Arduino.
3.  **The Logic:** When the button is pressed, the game state freezes. The code checks which LED is currently active.
    * If the active LED is the "Target" LED, the center RGB turns green.
    * If it stops anywhere else, the center RGB turns Red.

## Build Process & Hardware

The project was built in several stages, combining electronics engineering with physical crafting.

### Electronics & PCB
I designed the schematics and routed the PCB using **EasyEDA**. This took about 3 hours of design time to route the connections for the Arduino Mega and the LED array.
* **Microcontroller:** Arduino Mega
* **Display:** 15x 5mm LEDs (Red/Green) + 1x Common Cathode RGB LED.
* **Connection:** Internal wiring uses jumper wires soldered directly to the board to manage the complex connections.

<img width="442" height="442" alt="PCB_PCB_cyclone_2025-11-26" src="https://github.com/user-attachments/assets/3268d3e1-b18e-4fdf-9d1a-70d09c643d81" />

<img width="1169" height="827" alt="image" src="https://github.com/user-attachments/assets/3b8e89dc-b233-45f8-af26-b9f581ba5fd1" />


### Enclosure & Design
The physical body was prototyped in **Fusion 360** and then built by hand.
* **Top Plate:** Made from plywood. I used geometry to mark equidistant points for the LEDs and drilled them by hand.
* **Body:** Constructed from cardboard reinforced with craft paper for a cleaner look.
* **Switch:** A custom switch case fabricated from ice cream sticks and a reshaped marker cap.

<img width="643" height="578" alt="image" src="https://github.com/user-attachments/assets/923b11da-91c8-4909-bf43-26aed37cec43" />

<img width="1338" height="568" alt="image" src="https://github.com/user-attachments/assets/a2375d06-3b5f-4644-b08e-6549285e5f94" />


### Power Supply
To make the game portable, I built a custom power supply. I salvaged a charging module and battery from an old, broken power bank, soldered them together, and integrated them into the case.

<img width="700" height="700" alt="image" src="https://github.com/user-attachments/assets/7c66dec9-e540-46f4-8685-502a55a32aec" />


## Repository Structure

* `/CAD` - Fusion 360 rough models.
* `/Schematics` - EasyEDA schematic files and PCB views.
* `/Code` - The C code for the Arduino Mega.

## Final project

<img width="771" height="1024" alt="image" src="https://github.com/user-attachments/assets/8cb7148e-dde1-45be-9c28-ea1b3bb31ed8" />

*The final assembled unit.*

*Created by Rudra Jadaun aka Graphorn*
