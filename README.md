# Portable Ventilator Using Arduino Programming

An **Arduino-based portable ventilator prototype** that uses a servo motor to simulate a ventilation mechanism. The system allows the operating behavior of the servo to be adjusted using a potentiometer and displays the selected operating mode and breathing-cycle information on a 16×2 I2C LCD.

> ⚠️ **Educational Prototype Only:** This project is intended for academic, educational, and prototyping purposes. It is **not a certified medical device** and must not be used for patient care or connected to a human.

---

## 📌 Project Overview

The **Portable Ventilator Using Arduino Programming** project demonstrates how a microcontroller can be used to control a mechanical ventilation mechanism.

The Arduino reads an input from a potentiometer and converts the analog value into a control range. Depending on the selected range, the program determines:

* Servo operating angle
* Fast or slow operating mode
* Simulated breathing-cycle duration
* Information displayed on the LCD

A **servo motor** provides the mechanical movement, while a **16×2 I2C LCD** displays the current operating parameters.

---

## 🎯 Objectives

The main objectives of this project are:

* Develop a portable ventilator prototype using Arduino.
* Demonstrate microcontroller-based control of a servo motor.
* Use a potentiometer to adjust the operating parameters.
* Display system status using an I2C LCD.
* Implement different servo movement ranges and speeds.
* Understand the integration of hardware and software in an embedded system.

---

## 🧠 How It Works

The system uses three primary control components:

```text
                   ┌───────────────────┐
                   │   Potentiometer   │
                   │    Analog Input   │
                   └─────────┬─────────┘
                             │
                             ▼
                   ┌───────────────────┐
                   │      Arduino      │
                   │   Control Logic   │
                   └───────┬─────┬─────┘
                           │     │
              ┌────────────┘     └────────────┐
              ▼                               ▼
      ┌────────────────┐             ┌────────────────┐
      │   Servo Motor  │             │   16×2 I2C LCD │
      │   Pin 9         │             │   Address 0x27 │
      └────────────────┘             └────────────────┘
```

### Control Sequence

1. The potentiometer is connected to **analog pin A0**.
2. The Arduino reads the potentiometer value from **0–1023**.
3. The value is mapped to a servo control range of **0–180 degrees**.
4. The program checks which operating range the mapped value belongs to.
5. The LCD displays the selected speed, servo angle, and simulated breathing cycle.
6. The servo moves back and forth between `0°` and the selected maximum angle.
7. The process repeats continuously.

---

## 🔧 Hardware Components

The Arduino program is designed around the following components:

| Component                | Purpose                          |
| ------------------------ | -------------------------------- |
| Arduino-compatible board | Main controller                  |
| Servo motor              | Provides mechanical movement     |
| Potentiometer            | Controls the operating parameter |
| 16×2 I2C LCD             | Displays system information      |
| Jumper wires             | Electrical connections           |
| Power supply             | Powers the system                |

---

## 🔌 Pin Configuration

Based on the current `main.c` implementation:

| Component     | Arduino Connection |
| ------------- | ------------------ |
| Potentiometer | `A0`               |
| Servo signal  | `D9`               |
| I2C LCD       | Arduino I2C pins   |
| LCD address   | `0x27`             |

> The exact power and ground connections depend on the Arduino board and hardware configuration being used.

---

## 💻 Software & Libraries

The project uses Arduino-compatible C++ and the following libraries:

### Servo Library

```cpp
#include <Servo.h>
```

Used to control the servo motor.

### Wire Library

```cpp
#include <Wire.h>
```

Used for I2C communication.

### LiquidCrystal_I2C

```cpp
#include <LiquidCrystal_I2C.h>
```

Used to control the 16×2 I2C LCD.

---

## 📊 Operating Modes

The potentiometer value is first converted from the Arduino's analog range:

```text
0 – 1023
```

to:

```text
0° – 180°
```

The resulting value determines the operating mode.

| Potentiometer Range | Speed | Servo Angle | Displayed Breathing Cycle |
| ------------------: | ----- | ----------: | ------------------------: |
|                0–30 | Fast  |        100° |                     4 sec |
|               31–60 | Fast  |        110° |                  4.43 sec |
|               61–90 | Fast  |        120° |                  3.53 sec |
|              91–120 | Slow  |        100° |                     5 sec |
|             121–150 | Slow  |        110° |                   5.5 sec |
|             151–180 | Slow  |        120° |                     6 sec |

The values shown above are the **labels and behavior implemented in the current source code**.

---

## ⚙️ Servo Control

The servo is attached to digital pin `9`:

```cpp
myservo.attach(9);
```

The potentiometer is read using:

```cpp
val = analogRead(potpin);
```

The analog value is then mapped to the servo range:

```cpp
val = map(val, 0, 1023, 0, 180);
```

The resulting value is initially sent to the servo:

```cpp
myservo.write(val);
```

The program then uses the selected operating range to move the servo between `0°` and a maximum angle of **100°, 110°, or 120°**.

---

## 🖥️ LCD Display

The project uses a **16×2 I2C LCD** with address `0x27`:

```cpp
LiquidCrystal_I2C lcd(0x27, 16, 2);
```

When the system starts, the LCD displays:

```text
Emergency Vent
  B8 MINIPROJECT
```

The startup message remains visible for approximately **4 seconds**.

During operation, the LCD displays information such as:

```text
Spd:Fast Ang:100
Breath cycle 4 sec
```

or:

```text
Spd:Slow Ang:120
Breath cycle 6 sec
```

---

## 🔄 Program Flow

The program follows this general flow:

```text
             START
               │
               ▼
       Initialize LCD
               │
               ▼
       Initialize Servo
               │
               ▼
      Display Startup Text
               │
               ▼
        Read Potentiometer
               │
               ▼
       Map Value to 0–180°
               │
               ▼
       Determine Mode/Range
               │
       ┌───────┴────────┐
       │                │
     FAST              SLOW
       │                │
       └───────┬────────┘
               │
               ▼
       Update LCD Display
               │
               ▼
       Move Servo Forward
               │
               ▼
       Move Servo Backward
               │
               ▼
          Repeat Loop
```

---

## 📁 Repository Structure

```text
PORTABLE-VENTILATOR-USING-ARDUINO-PROGRAMMING/
│
├── main.c
├── PORTABLE VENTILATOR USING ARDUINO PROGRAMMING.pdf
├── PortableVentilator.mp4
└── README.md
```

### `main.c`

Contains the Arduino control program responsible for:

* Reading the potentiometer
* Mapping the analog input
* Controlling the servo
* Selecting operating modes
* Updating the LCD
* Implementing the servo movement cycles

### Project PDF

Contains the detailed project documentation and report.

### Demonstration Video

Contains a demonstration of the physical prototype.

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/Khatijamahveen/PORTABLE-VENTILATOR-USING-ARDUINO-PROGRAMMING.git
```

Move into the project directory:

```bash
cd PORTABLE-VENTILATOR-USING-ARDUINO-PROGRAMMING
```

### 2. Open the Arduino Program

Open `main.c` in the Arduino IDE.

> **Important:** Because this source uses Arduino libraries and the Arduino `setup()` / `loop()` structure, it is technically Arduino C++ code. If the Arduino IDE does not accept the `.c` extension as expected, rename the file to:

```text
main.cpp
```

or preferably:

```text
main.ino
```

### 3. Install Required Libraries

Make sure the following libraries are available in your Arduino environment:

* Servo
* Wire
* LiquidCrystal_I2C

### 4. Connect the Hardware

Connect the potentiometer, servo, and I2C LCD according to the pin configuration described above.

### 5. Upload the Program

Select the appropriate Arduino board and serial port in the Arduino IDE, then upload the program.

---

## 📟 Serial Monitor

The program initializes serial communication at:

```cpp
Serial.begin(9600);
```

The currently selected servo control value is printed to the Serial Monitor:

```cpp
Serial.println(val);
```

Therefore, the Serial Monitor can be configured to:

```text
9600 baud
```

to observe the mapped potentiometer/servo value.

---

## 🎥 Demonstration

A demonstration video is included in the repository:

**[PortableVentilator.mp4](./PortableVentilator.mp4)**

The video demonstrates the physical implementation and operation of the prototype.

---

## 📄 Project Documentation

For the complete project report and additional technical information, see:

**[PORTABLE VENTILATOR USING ARDUINO PROGRAMMING.pdf](./PORTABLE%20VENTILATOR%20USING%20ARDUINO%20PROGRAMMING.pdf)**

---

## 🔬 Educational Applications

This project can be used to demonstrate concepts related to:

* Arduino programming
* Embedded systems
* Servo motor control
* Analog-to-digital input
* I2C communication
* LCD interfacing
* Microcontroller programming
* Biomedical engineering prototypes
* Hardware-software integration
* Basic automation and control

---

## ⚠️ Safety Disclaimer

This repository represents an **educational prototype**.

It is **not a certified ventilator or medical device** and should not be used for patient treatment, clinical applications, or life-support purposes.

A real medical ventilator requires extensive engineering, sensing, control, alarm systems, fail-safe mechanisms, validation, verification, clinical testing, and regulatory approval.

**Do not connect this prototype to a human or use it as a substitute for an approved medical ventilator.**

---

## 👩‍💻 Author

**Khatijamahveen**

GitHub:
https://github.com/Khatijamahveen

---

## ⭐ Support

If you found this project useful for learning about Arduino, embedded systems, or biomedical engineering, consider giving the repository a ⭐ on GitHub.

---

## 📜 License

No explicit open-source license is currently specified for this repository.

If you want others to legally reuse, modify, or distribute this project, consider adding an appropriate license.
