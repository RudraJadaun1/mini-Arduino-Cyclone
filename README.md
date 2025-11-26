# Mini Arduino Cyclone Game

A DIY handheld replica of the classic arcade "Cyclone" game, built from scratch using an Arduino Mega, a custom PCB, and a handcrafted enclosure.

[![Watch the Demo](https://img.youtube.com/vi/STRhsyS3IJk/0.jpg)](https://www.youtube.com/watch?v=STRhsyS3IJk)
> *Click the image above to watch the project in action!*

## 📖 About The Project

This project brings the excitement of the large arcade Cyclone game into a portable form factor. The goal is simple but challenging: stop the chasing light exactly on the target LED.

I designed this project to practice PCB design, circuit integration, and utilizing recycled components for power. It combines a custom plywood top plate with 3D modeling concepts to create a fully functional game.

## ✨ Key Features

* **Classic Arcade Logic:** LEDs chase in a circle; pressing the button stops the sequence instantly.
* **Win/Loss Indication:** A center RGB LED provides immediate visual feedback—lighting up **White** for a win and **Red** for a loss.
* **Custom PCB:** Designed in EasyEDA, featuring a circular array of 15 LEDs + 1 Center RGB.
* **Recycled Power System:** Powered by a custom battery solution salvaged from a broken power bank, allowing for fully portable play.
* **Handcrafted Design:** The enclosure features a hand-drilled plywood faceplate and a custom switch mechanism.

## ⚙️ How It Works

The heart of the project is an **Arduino Mega**.
1.  **The Loop:** The code (written in C) cycles through the outer ring of LEDs one by one to create a "chasing" effect.
2.  **The Input:** A custom-made tactile button is connected to the Arduino.
3.  **The Logic:** When the button is pressed, the game state freezes. The code checks which LED is currently active.
    * If the active LED is the "Target" LED, the center RGB turns White.
    * If it stops anywhere else, the center RGB turns Red.

## 🛠️ Build Process & Hardware

The project was built in several stages, combining electronics engineering with physical crafting.

### Electronics & PCB
I designed the schematics and routed the PCB using **EasyEDA**. This took about 3 hours of design time to route the connections for the Arduino Mega and the LED array.
* **Microcontroller:** Arduino Mega
* **Display:** 15x 5mm LEDs (Red/Green) + 1x Common Cathode RGB LED.
* **Connection:** Internal wiring uses jumper wires soldered directly to the board to manage the complex connections.

![PCB Design](INSERT_YOUR_PCB_IMAGE_LINK_HERE)

### Enclosure & Design
The physical body was prototyped in **Fusion 360** and then built by hand.
* **Top Plate:** Made from plywood. I used geometry to mark equidistant points for the LEDs and drilled them by hand.
* **Body:** Constructed from cardboard reinforced with craft paper for a cleaner look.
* **Switch:** A custom switch case fabricated from ice cream sticks and a reshaped marker cap.

![3D Design](INSERT_YOUR_FUSION360_IMAGE_LINK_HERE)

### Power Supply
To make the game portable, I built a custom power supply. I salvaged a charging module and battery from an old, broken power bank, soldered them together, and integrated them into the case.

## 📂 Repository Structure

* `/CAD` - Fusion 360 rough models.
* `/Schematics` - EasyEDA schematic files and PCB views.
* `/Code` - The C code for the Arduino Mega.

## 📸 Gallery

![Finished Project](INSERT_YOUR_FINISHED_PROJECT_IMAGE_LINK_HERE)
*The final assembled unit.*

## 📜 License

This project is open source.

---
*Created by Graphorn*
