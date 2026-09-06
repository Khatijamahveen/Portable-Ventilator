# Portable Ventilator Using Arduino Programming

## 📌 Overview
This project focuses on the design, development, and validation of a **low-cost, automated mechanical ventilator** to address critical ICU shortages during respiratory pandemics (e.g., COVID-19). The system automates the manual compression of a standard Bag Valve Mask (BVM/Ambu bag) using a high-torque servo motor and an Arduino UNO, providing controlled positive-pressure ventilation for patients with respiratory failure.

## 🧠 Motivation & Research Context
Mechanical ventilators are life-saving devices, but they are expensive, complex, and often unavailable in low-resource settings. This project aims to develop a **rapidly deployable, open-source, and cost-effective alternative** that can serve as a bridge device for less severe patients, allowing limited ICU resources to be focused on critical cases. The design philosophy emphasizes simplicity, accessibility of standard components, and ease of mass production.

## 🛠️ Technologies & Tools Used
- **Microcontroller:** Arduino UNO (ATmega328P)
- **Actuator:** High-Torque Servo Motor (270° rotation)
- **Display:** 16x2 LCD with I2C Interface
- **Biomedical Sensors:** SpO2 (Oxygen Saturation) and Heartbeat Monitoring
- **Power:** 18650 Li-ion Battery with Type-C module
- **Software:** Arduino IDE (Embedded C)
- **Safety Features:** UV Sterilization, Crisis Alarm (Buzzer), Backup Power

## ⚙️ System Architecture & Working Principle
The system operates on a **volume-controlled ventilation** principle. The Arduino UNO controls the servo motor, which mechanically compresses the AMBU bag to deliver a controlled tidal volume of oxygen to the patient. The system uses a **potentiometer-based feedback loop** to adjust the motor's speed and angle, allowing real-time control of the respiratory rate (RR) and the Inspiratory/Expiratory (I/E) ratio.

## 📊 Results & Validation
- **Respiratory Rate (RR):** Achieved a controlled rate of **12 breaths per minute** (2 sec clockwise, 3 sec anti-clockwise rotation).
- **Breath Cycle:** Adjustable cycles ranging from 3.5 to 6 seconds, customizable based on patient condition.
- **Power Efficiency:** Runs efficiently on a rechargeable battery for **3.5 hours** at the most demanding setting.
- **Portability:** Lightweight, portable, and designed for rapid deployment in emergency field scenarios.
- **Safety:** Integrated UV sterilization and crisis alarm system for enhanced reliability.

## 🖼️ Project Images

**Figure 1: Block Diagram**
<img src="Images/Block_diagram.png" alt="Block Diagram" width="600"/>

<br>

**Figure 2: Circuit Diagram**
<img src="Images/Circuit_diagram.png" alt="Circuit Diagram" width="600"/>

<br>

**Figure 3: Flow Chart**
<img src="Images/Flow_chart.png" alt="Flow Chart" width="600"/>

<br>

**Figure 4: Designed Developed Prototype**
<img src="Images/Designed_developed_prototype.png" alt="Designed Developed Prototype" width="600"/>

<br>

## 📂 Repository Structure
```text
Portable-Ventilator-Using-Arduino-Programming/
│
├── 📁 Images/       # Project images (Block diagram, Circuit, Prototype)
├── 📁 docs/         # Full Project Report & Demo Video
├── 📄 README.md     # Project documentation
└── 📄 main.ino      # Arduino source code
