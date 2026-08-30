# Portable Ventilator Using Arduino Programming

## 📌 Overview
This project details the design and development of a low-cost, portable mechanical ventilator using an Arduino UNO. By automating the compression of a standard Bag Valve Mask (BVM/Ambu bag) with a high-torque servo motor, this system provides controlled positive-pressure ventilation. It is designed as an emergency, rapidly deployable solution to address ventilator shortages, particularly in low-resource settings during respiratory pandemics (e.g., COVID-19).

## 🧠 Motivation & Research Context
Mechanical ventilation is a critical life-saver in modern ICUs, but standard ventilators are expensive, require highly trained staff, and are often unavailable in mass casualty or low-income environments. This project focuses on open-source, hardware-compatible medical devices. The goal is to create a reliable "bridge device" that assists less severe patients, allowing ICU resources to be focused on critical cases.

## 🛠️ Technologies & Tools Used
- **Microcontroller:** Arduino UNO (ATmega328P)
- **Communication Protocols:** I2C (PCF8574 Module for LCD)
- **Actuators:** High-Torque Servo Motor (270° rotation)
- **Displays:** 16x2 LCD Module (I2C interface)
- **Power:** 12V DC / Battery operated (Capable of running 3.5 hours per charge)
- **Languages:** Embedded C / Arduino IDE
- **CAD/Design:** Solid Edge V19 (Acrylic chassis design)

## ⚙️ System Architecture
The system integrates a master/slave Arduino configuration to ensure reliability in case of primary controller failure. A servo motor acts as the mechanical actuator to compress the Ambu bag. The system includes a patient monitoring subsystem (Heartbeat, SpO2) and an integrated piezoelectric nebulizer.

![Block Diagram](images/block_diagram.png)

## 🚀 How It Works
1. **Automated Ventilation:** The Arduino controls the servo motor angle and speed to physically compress the BVM, delivering a precise tidal volume (up to 750ml).
2. **Breath Cycle Control:** The code uses a potentiometer (mapped to 0-180 degrees) to adjust the motor's speed and angle, allowing real-time control of the Respiration Rate (RR), Inspiratory/Expiratory (I/E) ratio, and breath cycle duration.
3. **Patient Monitoring:** Heartbeat and SpO2 sensors monitor vitals, displaying real-time data on the LCD.
4. **Safety Mechanisms:** UV sterilization occurs during oxygen supply, and an in-built crisis ringer alert sounds if any abnormality is detected.

## 📊 Results & Validation
- **Respiration Rate:** Achieved a controlled respiratory rate of **12 RR/min** (2 sec clockwise, 3 sec anti-clockwise rotation).
- **Performance:** Successfully maintains a continuous plateau pressure and consistent airflow to the lungs.
- **Power Efficiency:** Runs efficiently on a battery charge for 3.5 hours at its most demanding setting.
- **Portability:** Lightweight, low-cost, and designed for rapid mass production using standard, public-accessible components.

![Circuit Diagram](images/circuit_diagram.png)

## 🗂️ Repository Structure
```text
Portable_Ventilator_Arduino/
│
├── README.md              # You are here
├── LICENSE                # MIT License
├── src/
│   └── portable_ventilator.ino  # Main Arduino Source Code
└── docs/
    ├── block_diagram.png  # System Architecture
    └── circuit_diagram.png# Hardware Connections
