# Portable Ventilator Using Arduino

A low-cost automated mechanical ventilator prototype developed using an **Arduino UNO and a high-torque servo motor** to automate the compression of a standard Bag Valve Mask (BVM/Ambu bag).

> **Academic Prototype:** This project was developed as an engineering prototype for academic and embedded-systems research purposes. It is not presented as a clinically validated medical device.

---

## 📌 Overview

This project focuses on the design, development, and validation of a low-cost automated mechanical ventilator prototype.

The system automates the manual compression of a standard **Bag Valve Mask (BVM/Ambu bag)** using a high-torque servo motor controlled by an **Arduino UNO**.

The prototype integrates embedded control, mechanical actuation, user-adjustable operating parameters, display functionality, monitoring interfaces, alarm functionality, and battery-powered operation into a portable system.

---

## 🧠 Motivation & Research Context

Mechanical ventilators are life-saving devices, but their complexity and cost can create challenges in resource-constrained environments.

This project investigates a low-cost and accessible approach to automating Ambu-bag compression using commonly available embedded-system components.

The design emphasizes:

* Simple embedded control
* Automated mechanical actuation
* Adjustable operating parameters
* Portable operation
* Integration of monitoring and alarm functionality
* Use of readily available components

The project provided practical experience in translating an embedded-system concept into a functional physical prototype.

---

## 🎯 Project Objectives

The main objectives of this project were to:

* Develop an automated mechanism for Ambu-bag compression.
* Control the mechanism using an Arduino UNO.
* Use a high-torque servo motor for mechanical actuation.
* Provide adjustable respiratory-cycle parameters.
* Integrate an LCD-based user interface.
* Incorporate SpO₂ and heartbeat monitoring interfaces.
* Implement an alarm system.
* Develop a rechargeable battery-powered prototype.
* Design, assemble, and validate the complete prototype.

---

## 🛠️ Technologies & Components

| Category              | Component / Technology                                |
| --------------------- | ----------------------------------------------------- |
| Microcontroller       | Arduino UNO (ATmega328P)                              |
| Actuator              | High-Torque Servo Motor, 270° rotation                |
| Display               | 16×2 LCD with I²C interface                           |
| Biomedical Monitoring | SpO₂ and Heartbeat Monitoring                         |
| Power                 | 18650 Li-ion Battery with Type-C Module               |
| Software              | Arduino IDE                                           |
| Programming           | Embedded C                                            |
| Safety Features       | UV Sterilization, Crisis Alarm / Buzzer, Backup Power |

---

## ⚙️ System Architecture & Working Principle

The Arduino UNO acts as the central controller of the prototype.

The servo motor mechanically compresses the Ambu bag according to the programmed control sequence. A potentiometer is used to adjust the operating parameters, while the LCD provides system information.

The prototype also incorporates SpO₂ and heartbeat monitoring interfaces, together with a buzzer-based crisis alarm.

The overall system combines:

**User Input → Arduino Control → Servo Actuation → Ambu-Bag Compression → System Feedback**

---

## 📊 Results & Validation

The developed prototype was evaluated based on its operating characteristics and functionality.

### Respiratory Rate

A controlled respiratory rate of approximately **12 breaths per minute** was achieved using the reported control sequence of:

**2 seconds clockwise + 3 seconds anti-clockwise rotation**

### Breath Cycle

The prototype supports adjustable breath cycles ranging from approximately:

**3.5–6 seconds**

### Battery Operation

The prototype achieved approximately:

**3.5 hours of operation**

under the reported most demanding operating condition.

### Portability

The developed system was designed as a lightweight and portable prototype for emergency-field-oriented applications.

### Integrated Features

The prototype incorporates:

* Automated Ambu-bag compression
* Adjustable operating parameters
* LCD display
* SpO₂ monitoring interface
* Heartbeat monitoring interface
* Crisis alarm
* UV sterilization
* Battery-powered operation

---

# 🖼️ Project Documentation

## 📐 Block Diagram

The block diagram illustrates the overall functional architecture of the automated ventilation prototype.

<img src="Images/Block_diagram.png" alt="Block diagram of portable ventilator" width="800"/>

---

## 🔌 Circuit Diagram

The circuit diagram shows the electrical connections between the Arduino, actuator, display, monitoring interfaces, power system, and other components.

<img src="Images/Circuit_diagram.png" alt="Circuit diagram of portable ventilator" width="800"/>

---

## 🔄 Flow Chart

The flow chart represents the control sequence implemented in the embedded system.

<img src="Images/Flow_Chart.png" alt="Flow chart of portable ventilator" width="800"/>

---

## 🛠️ Developed Prototype

The following image shows the developed portable ventilator prototype.

<img src="Images/Designed_developed_prototype.png" alt="Designed and developed portable ventilator prototype" width="700"/>

---

# 💡 Design Considerations

### Arduino UNO

The Arduino UNO was selected as the central controller for coordinating the different components of the prototype.

### Servo Motor

A high-torque servo motor with **270° rotation** was used to provide the mechanical actuation required for Ambu-bag compression.

### LCD Interface

A **16×2 LCD with I²C interface** was incorporated to provide system information and user interaction.

### Battery Power

An **18650 Li-ion battery with a Type-C module** was incorporated to support portable operation.

### Alarm System

A buzzer-based crisis alarm was incorporated as part of the prototype's safety-oriented features.

---

# 🔬 Engineering Development

The project involved the integration of:

* Embedded programming
* Microcontroller control
* Servo motor actuation
* Mechanical Ambu-bag compression
* User-input handling
* LCD interfacing
* Biomedical monitoring interfaces
* Alarm functionality
* Battery-powered operation
* Hardware assembly and prototype testing

This provided hands-on experience in developing a complete embedded hardware prototype from system concept through implementation and validation.

---

# 📁 Repository Structure

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

# 🎥 Demonstration

A demonstration video of the developed prototype is available in:

**`PortableVentilator.mp4`**

The complete project documentation is available in:

**`ProjectReport.pdf`**

The Arduino implementation is available in:

**`main.ino`**

---

# 🎓 Research & PhD Relevance

This project strengthened my practical foundation in **Embedded Systems and hardware–software integration** through the development of a complete physical prototype.

The project provided hands-on experience with:

* Arduino-based embedded systems
* Embedded C
* Microcontroller programming
* Servo motor control
* I²C interfacing
* User-interface development
* Hardware integration
* Battery-powered embedded systems
* Prototype development
* System testing and validation

The experience contributes to my broader interest in developing **practical, intelligent, and resource-efficient embedded systems** for real-world applications.

---

# 👩‍💻 Author

**Khatija Mahveen**

**B.E. Electronics & Communication Engineering**
**M.E. Embedded Systems**

### Research Interests

**Embedded Systems · Edge AI · IoT · Real-Time Systems · Intelligent Systems · Hardware–Software Co-Design · Communication Systems**

---

## 📜 License

This repository is shared for **academic and research portfolio purposes**.

The prototype is presented as an engineering project and should not be considered a clinically validated medical device.

---

## ⭐ Project Summary

This project demonstrates the design and development of a **low-cost automated Ambu-bag compression prototype** using an Arduino UNO and high-torque servo motor.

The work brings together **embedded programming, actuator control, user-interface design, monitoring interfaces, alarm functionality, battery-powered operation, and physical hardware prototyping** into a single integrated embedded-system project.
