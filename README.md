# Portable Ventilator Using Arduino

An embedded-systems prototype for automating the compression of a BVM/Ambu bag using an Arduino UNO, servo motor, potentiometer-based control, and LCD display.

> **Project Status:** Engineering prototype
> This repository documents the hardware concept, embedded control implementation, prototype development, and experimental project results. It is not presented as a clinically validated medical device.

---

## 📌 Overview

This project presents the design and development of a portable automated ventilator prototype based on an **Arduino UNO** and a **high-torque servo motor**.

The system automates the mechanical compression of a BVM/Ambu bag. A potentiometer is used as a user input to control the servo operating mode, while a 16×2 LCD with I2C interface displays the selected operating condition and breathing-cycle information.

The project combines:

* Embedded system programming
* Servo motor control
* User-input based parameter selection
* LCD interfacing
* Battery-powered operation
* Hardware prototyping

---

## 🎯 Project Objectives

The main objectives of the project were:

* To automate BVM/Ambu bag compression using a servo motor.
* To implement the control system using an Arduino UNO.
* To provide selectable operating conditions using a potentiometer.
* To control servo angle and movement speed through embedded programming.
* To display operating information on a 16×2 LCD.
* To develop a portable prototype powered by a rechargeable battery.
* To integrate the hardware and software into a working prototype.

---

## 🛠️ Hardware & Software

| Category           | Component / Technology                  |
| ------------------ | --------------------------------------- |
| Microcontroller    | Arduino UNO (ATmega328P)                |
| Actuator           | High-Torque Servo Motor                 |
| User Input         | Potentiometer                           |
| Display            | 16×2 LCD with I2C                       |
| Power              | 18650 Li-ion Battery with Type-C Module |
| Programming        | Arduino IDE                             |
| Language           | Embedded C / Arduino C++                |
| Mechanical Element | BVM / Ambu Bag                          |

---

## ⚙️ System Architecture

The overall system architecture is represented in the block diagram below.

The Arduino UNO receives the potentiometer input, maps the input to the corresponding operating range, and controls the servo motor accordingly. The servo performs the mechanical movement required for BVM/Ambu bag compression.

The LCD provides information about the selected speed, servo angle, and breathing-cycle setting.

### Block Diagram

![Block Diagram](Images/Block_diagram.png)

---

## 🔄 Control & Working Principle

The embedded program follows this sequence:

1. Initialize the LCD, servo motor, and serial communication.
2. Read the potentiometer value through the Arduino analog input.
3. Map the input value to the servo-control range.
4. Select the corresponding operating mode.
5. Move the servo through the programmed angular range.
6. Display the selected operating condition and breathing-cycle information on the LCD.
7. Repeat the control cycle continuously.

The implemented program contains multiple operating ranges based on the potentiometer input, with different servo angles and movement speeds.

---

## 📊 Implemented Operating Conditions

The current Arduino implementation contains the following programmed conditions:

| Mode | Servo Angle | Programmed Cycle |
| ---- | ----------: | ---------------: |
| Fast |        100° |            4 sec |
| Fast |        110° |         4.43 sec |
| Fast |        120° |         3.53 sec |
| Slow |        100° |            5 sec |
| Slow |        110° |          5.5 sec |
| Slow |        120° |            6 sec |

These values are implemented directly in `main.ino`.

---

## 📈 Project Results

The developed prototype demonstrated:

* A programmed respiratory rate of **12 breaths per minute** under the reported operating condition.
* Clockwise and anti-clockwise servo movement of approximately **2 seconds and 3 seconds**, respectively, for the reported condition.
* Programmable breathing cycles in the range of approximately **3.5–6 seconds** in the implementation.
* Battery operation of approximately **3.5 hours** under the reported most-demanding operating condition.
* A portable prototype integrating the electronic control and mechanical actuation system.

---

## 🔧 Engineering Contribution

The project involved the integration of:

* Arduino-based embedded control
* Analog input acquisition through a potentiometer
* Servo motor actuation
* I2C LCD interfacing
* Embedded programming for multiple operating conditions
* Rechargeable battery-based power implementation
* Mechanical integration of the servo with the BVM/Ambu bag
* Hardware prototype development and testing

The `main.ino` file provides the embedded control implementation used in the prototype.

---

## 🖼️ Project Documentation

### Circuit Diagram

![Circuit Diagram](Images/Circuit_diagram.png)

The circuit diagram documents the electrical connections used in the prototype.

### Flow Chart

![Flow Chart](Images/Flow_Chart.png)

The flow chart represents the control sequence implemented in the embedded program.

### Developed Prototype

![Developed Prototype](Images/Designed_developed_prototype.png)

The developed prototype demonstrates the physical integration of the electronic and mechanical components.

---

## 🎥 Demonstration

A demonstration video of the developed prototype is included in the repository:

**`PortableVentilator.mp4`**

---

## 📄 Project Report

The complete project documentation is available in:

**`ProjectReport.pdf`**

---

## 💻 Source Code

The Arduino implementation is available in:

**`main.ino`**

The program uses:

* `Servo.h`
* `Wire.h`
* `LiquidCrystal_I2C.h`

The code implements potentiometer-based operating-mode selection, servo control, LCD display, and serial monitoring.

---

## ⚠️ Limitations

This repository represents an **engineering prototype** developed for embedded-system and hardware-prototyping purposes.

The documented results should be interpreted as prototype-level experimental results. The project is **not presented as a clinically validated medical device**, and no clinical performance or patient-use claim is made in this repository.

---

## 🔬 Research Relevance

This project provided practical experience in:

* Embedded system design
* Microcontroller-based control
* Actuator interfacing
* Sensor/input interfacing
* Hardware–software integration
* Real-time control logic
* Portable embedded-system development

These areas form part of my broader interest in **Embedded Systems, IoT, Real-Time Systems, Edge Intelligence, and Hardware–Software Co-Design**.

---

## 📂 Repository Structure

```text
Portable-Ventilator/
│
├── Images/
│   ├── Block_diagram.png
│   ├── Circuit_diagram.png
│   ├── Designed_developed_prototype.png
│   └── Flow_Chart.png
│
├── PortableVentilator.mp4
├── ProjectReport.pdf
├── README.md
└── main.ino
```

---

## 👩‍💻 Author

**Khatija Mahveen**

M.E. Embedded Systems | Electronics & Communication Engineering

Research Interests:
**Embedded Systems • Edge AI • IoT • Real-Time Systems • Communication Systems • Hardware–Software Co-Design**

---

## 📌 Project Summary

**Portable Ventilator Using Arduino** is an embedded-system prototype demonstrating the integration of microcontroller programming, servo motor control, LCD interfacing, user-input based operation, battery power, and mechanical actuation for automated BVM/Ambu bag compression.
