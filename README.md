# ReactFinder

React Finder is Mememory Testing Game which works like , when you press the start button four led makes a Interesting Sequence and a order , the game is simple follow the exsact order of leds if you pressed correct button buzzer beeps and all are pressed correct Buzzer Beeps with A winning sound and New Level will start harder than the other , currently it have only 10 levels But All of them Are random so You can Still Enjoy if all of them is Played which difficult but Who knows , if only one sequence was pressed incorrectly buzzer beeps with a losing sound and thus you have to restart 

---
### Why i Made This?
i always Wnated to create A hardware based Game, so pathfinder hepled me and give me a motivation so that i could make a tick on my bucket list , also i thanks to meghana , she hepled me out in every doubt is asked i liked her patience and kindness which led to make React Finder 

### Some Key Features 

* 4 LEDs Turn on in a random Order 
* Press buttons to repeat the correct sequence with A buzzer beep
* Win = buzzer celebration sound + level up
* Lose = if you were un Successfull in Order ,buzzer fail tone + restart game

## Images 

![IMG_3354](https://github.com/user-attachments/assets/0b369491-6954-4291-98bb-adc2a69bb3a4)

![]![IMG_3355](https://github.com/user-attachments/assets/517f1a76-dc12-4439-8774-fed9d706014c)
(https://github.com/Armaan240/ReactFinder/blob/main/OtherFiles/Screenshot%20(100).png)
![](https://github.com/Armaan240/ReactFinder/blob/main/OtherFiles/Screenshot%20(102).png)
![](https://github.com/Armaan240/ReactFinder/blob/main/OtherFiles/Screenshot%20(101).png)

### 🔩 Bill of Materials (BOM)

| Qty | Component         | Description                          | Example Part No / Notes   |
| --- | ----------------- | ------------------------------------ | ------------------------- |
| 1   | Seeed XIAO RP2040 | Microcontroller                      | Seeed Studio 102010428    |
| 4   | LEDs (any color)  | Visual feedback                      | 3mm or 5mm LEDs           |
| 4   | 220Ω Resistors    | For current-limiting LEDs            | One per LED               |
| 5   | Push Buttons      | Tactile switches for input           | Through-hole 6x6mm        |
| 1   | Buzzer (Active)   | Audio output                         | 5V Active Buzzer Module   |
| 1   | Breadboard        | For prototyping                      | Optional if not soldering |
| 10+ | Jumper Wires      | Connections                          | Male-to-male              |
| 4   | 3D Printed KeyCaps| Power and programming                | For XIAO RP2040           |

---

### 🛠️ Wiring Diagram 

| Function     | XIAO RP2040 Pin | Component |
| ------------ | --------------- | --------- |
| LED1         | GPIO26 (A0)     | D1        |
| LED2         | GPIO27 (A1)     | D2        |
| LED3         | GPIO28 (A2)     | D3        |
| LED4         | GPIO29 (A3)     | D4        |
| Button 1     | GPIO1 (RX)      | SW1       |
| Button 2     | GPIO0 (TX)      | SW2       |
| Button 3     | GPIO7 (SCL)     | SW3       |
| Button 4     | GPIO6 (SDA)     | SW4       |
| Start Button | GPIO5           | SW5       |
| Buzzer       | GPIO4           | BUZZ      |


---

### 📷 Optional Feature To add In future 

* Add a 0.96" OLED screen to display current level or high score
* 3D print a custom game
* Time-based challenge mode
* EEPROM save high score
* Multiplayer mode
* Web-based scoreboard (via Wi-Fi on ESP32 variant)

**For Pcb files and Models Please Check out OtherFiles Folder and PLease Ignore HopeFinder Name (it Was Choosen Fisrt But Didnt LIke it)**
