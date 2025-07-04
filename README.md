# ReactFinder

This is a **memory-based reaction game** built on the Seeed Studio XIAO RP2040. The game randomly lights up a sequence of LEDs, and you must press the matching buttons in the same order. With every successful round, the sequence gets longer — test your memory and reaction speed!

---

### 🎮 Features

* 4 LEDs flash in a random pattern
* Press buttons to repeat the sequence
* Win = buzzer celebration sound + level up
* Fail = buzzer fail tone + restart game
* LED and buzzer feedback on each button press


---

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

> 📝 All buttons use `INPUT_PULLUP` — they connect to **GND when pressed**


---

### 📷 Optional Extras

* Add a 0.96" OLED screen to display current level or high score
* 3D print a custom game case
* Port to PlatformIO or CircuitPython

---

### 🚀 Future Ideas

* Time-based challenge mode
* EEPROM save high score
* Multiplayer mode
* Web-based scoreboard (via Wi-Fi on ESP32 variant)


