# Portable Automated Ventilation Prototype Using Arduino

A low-cost **automated Ambu-bag compression prototype** developed using an Arduino UNO and servo motor to investigate controlled mechanical ventilation, embedded control, user-adjustable respiratory parameters, and portable emergency-support system design.

> **Academic Prototype Notice:** This project is an engineering proof-of-concept and is **not a clinically validated medical device**. The prototype is intended for academic, educational, and embedded-systems research purposes and should not be used for patient care.

---

## 📌 Project Overview

This project presents the design and development of a **portable automated ventilation prototype** that mechanically compresses a standard Bag-Valve-Mask (BVM/Ambu bag) using a servo-motor-driven mechanism controlled by an **Arduino UNO**.

The objective was to explore how a low-cost embedded controller can automate a repetitive mechanical process while providing user-adjustable control over respiratory-cycle parameters.

The system integrates:

* Arduino UNO based embedded control
* High-torque servo motor actuation
* Potentiometer-based parameter adjustment
* 16×2 LCD with I²C interface
* Audible alarm functionality
* Battery-powered operation
* Prototype-level physiological monitoring interfaces

The project combines **embedded programming, actuator control, human-machine interaction, power management, and mechanical automation** into a single hardware prototype.

---

# 🧠 Motivation & Research Context

Mechanical ventilation systems are complex medical devices that require precise control, extensive validation, and stringent safety requirements.

This project was motivated by the engineering challenge of developing a **simple, portable, and low-cost embedded prototype** capable of automating the repetitive compression of an Ambu bag.

Rather than attempting to replace clinically approved ventilators, the project investigates the underlying embedded-systems problem:

> **How can a microcontroller-controlled actuator be used to generate repeatable and adjustable mechanical compression cycles in a portable system?**

This provides a practical platform for studying:

* Real-time embedded control
* Actuator positioning
* Timing and control loops
* User-adjustable parameters
* Sensor interfacing
* Alarm mechanisms
* Portable power systems
* Hardware–software integration

---

# 🎯 Project Objectives

The primary objectives of the project were to:

1. Develop a low-cost embedded controller for automated Ambu-bag compression.
2. Control a high-torque servo motor using an Arduino UNO.
3. Provide adjustable respiratory-cycle timing.
4. Implement a user interface using a 16×2 LCD and potentiometer.
5. Integrate alarm functionality for prototype-level fault indication.
6. Explore portable battery-powered operation.
7. Develop and test a complete hardware–software prototype.
8. Evaluate the system's repeatability and operating characteristics.

---

# 🛠️ Hardware & Technologies

## Microcontroller

**Arduino UNO — ATmega328P**

Used as the central embedded controller responsible for:

* Servo control
* Timing
* User-input processing
* Display control
* Alarm handling
* System coordination

## Actuator

**High-Torque Servo Motor**

The servo motor provides the mechanical actuation required to compress the Ambu bag through a controlled angular motion.

## User Interface

**16×2 LCD with I²C interface**

Used to provide system information and operating parameters while reducing the number of microcontroller GPIO connections required.

## Parameter Control

**Potentiometer**

Used to provide adjustable control over the operating parameters of the prototype.

## Monitoring Interfaces

The prototype incorporates interfaces for:

* SpO₂ monitoring
* Heart-rate monitoring

These components were considered as part of the prototype's monitoring architecture rather than as evidence of clinical validation.

## Power

**18650 Li-ion battery with Type-C charging/power module**

The battery subsystem was incorporated to investigate portable operation.

## Additional Components

* Buzzer / alarm
* Wiring and control circuitry
* Mechanical Ambu-bag compression mechanism
* Prototype enclosure/support structure

---

# ⚙️ System Architecture

The system can be broadly divided into five functional layers:

```text
                    ┌─────────────────────┐
                    │     User Input      │
                    │  Potentiometer /   │
                    │      Controls       │
                    └──────────┬──────────┘
                               │
                               ▼
                    ┌─────────────────────┐
                    │     Arduino UNO     │
                    │   ATmega328P MCU    │
                    └──────┬──────┬───────┘
                           │      │
                 ┌─────────┘      └──────────┐
                 ▼                           ▼
        ┌────────────────┐          ┌────────────────┐
        │ Servo Motor    │          │ LCD / Buzzer   │
        │ Actuation      │          │ User Feedback  │
        └───────┬────────┘          └────────────────┘
                │
                ▼
        ┌────────────────┐
        │ Mechanical      │
        │ Ambu-Bag        │
        │ Compression     │
        └────────────────┘
```

The Arduino acts as the central controller, coordinating actuator movement, timing, user inputs, display output, and alarm functionality.

---

# 🔄 Working Principle

The prototype uses a servo-driven mechanical mechanism to compress and release the Ambu bag repeatedly.

The general operating sequence is:

**User Parameter Selection → Arduino Processing → Servo Movement → Ambu-Bag Compression → Release → Next Cycle**

The controller generates the required servo movement according to the programmed timing parameters.

A potentiometer provides user-adjustable input, while the LCD provides system information.

The prototype was designed to allow experimentation with different respiratory-cycle timings rather than relying on a fixed operating sequence.

---

# 💻 Embedded Software

The control software was developed using **Arduino IDE** in embedded C/C++.

The program is responsible for:

* Initializing the connected peripherals
* Reading user inputs
* Controlling servo position
* Generating timed compression cycles
* Updating the LCD
* Handling alarm output
* Coordinating the overall operating sequence

The primary source code is available in:

```text
main.ino
```

---

# 📊 Prototype Results & Validation

The developed prototype was evaluated primarily from an **embedded-control and mechanical-operation perspective**.

### Observed operating characteristics

| Parameter             | Prototype Result |
| --------------------- | ---------------: |
| Target operating band |             2.4? |

Wait — **remove this table entirely unless the exact measured values are available in your report.**

Instead, use the verified results below:

* Controlled respiratory-cycle operation was demonstrated.
* A nominal operating rate of approximately **12 cycles/minute** was implemented.
* Configurable cycle durations in the range of approximately **3.5–6 seconds** were explored.
* The prototype achieved approximately **3.5 hours of battery operation** under the reported demanding operating condition.
* Servo-driven mechanical compression was successfully demonstrated.
* LCD-based user feedback and alarm functionality were integrated.

> **Important:** These results represent prototype-level engineering observations. They do not constitute clinical performance validation, patient safety validation, or certification.

---

# 🧪 Engineering Validation

The project was evaluated through a combination of:

### Functional Testing

Verification of:

* Servo movement
* Compression/release cycles
* User input
* LCD output
* Alarm operation

### Timing Evaluation

The programmed control sequence was evaluated for repeatable cyclic operation.

### Power Evaluation

Battery-powered operation was evaluated to determine the approximate operating duration of the prototype.

### Prototype Demonstration

The complete hardware system was assembled and demonstrated as an integrated embedded prototype.

---

# 🖼️ Project Documentation

## 📐 System Block Diagram

**Figure 1 — Functional block diagram of the automated ventilation prototype**

<img src="Images/BlockDiagram.png" alt="Portable ventilator block diagram" width="700"/>

---

## 🔌 Circuit Diagram

**Figure 2 — Electrical circuit and component connections**

<img src="Images/CircuitDiagram.png" alt="Portable ventilator circuit diagram" width="700"/>

---

## 🔄 Control Flow

**Figure 3 — Embedded control flowchart**

<img src="Images/FlowChart.png" alt="Portable ventilator flowchart" width="700"/>

---

## 🛠️ Developed Prototype

**Figure 4 — Fabricated and assembled prototype**

<img src="Images/Prototype.png" alt="Portable automated ventilation prototype" width="600"/>

---

# 🎥 Prototype Demonstration

A demonstration video of the developed prototype is included in the repository:

**`PortableVentilator.mp4`**

The demonstration shows the physical prototype and its automated mechanical operation.

---

# 💡 Design Considerations

## Why Arduino UNO?

The Arduino UNO was selected because it provides:

* Simple development environment
* Accessible embedded programming
* Sufficient GPIO capability for the prototype
* Straightforward servo control
* Low development cost
* Rapid prototyping capability

## Why a Servo Motor?

A servo motor provides controllable angular positioning, making it suitable for investigating repeatable mechanical compression of the Ambu bag.

## Why Battery Operation?

Battery operation was explored to improve portability and investigate operation in environments where fixed power sources may not be readily available.

## Why an LCD?

The LCD provides a simple human-machine interface for displaying operating information without requiring an external computer.

---

# 🔬 Engineering Challenges

The project involved several practical hardware–software integration challenges, including:

* Coordinating servo motion with programmed timing
* Achieving repeatable mechanical compression
* Integrating multiple peripherals with the Arduino
* Managing user-input parameters
* Designing a compact portable prototype
* Coordinating display and actuator operations
* Balancing power consumption with operating duration
* Translating an initial system concept into a working physical prototype

These challenges provided practical experience beyond software development and required iterative hardware debugging and system-level testing.

---

# 📁 Repository Structure

```text
Portable-Ventilator/
│
├── Images/
│   ├── BlockDiagram.png
│   ├── CircuitDiagram.png
│   ├── FlowChart.png
│   └── Prototype.png
│
├── PortableVentilator.mp4
├── ProjectReport.pdf
├── README.md
└── main.ino
```

> File names in the image section should match the actual filenames in the `Images/` directory. If your existing filenames are different, keep the existing filenames rather than renaming files unnecessarily.

---

# 🔭 Future Research Directions

The prototype provides a foundation for further research in embedded medical-device prototyping and real-time control.

Potential future directions include:

* Closed-loop pressure or flow control
* More precise actuator control
* Real-time sensor feedback
* Improved fault detection
* Battery and power-management optimization
* More robust mechanical design
* Independent safety monitoring
* Data logging and remote monitoring
* Integration with IoT-enabled monitoring systems
* Hardware–software co-design for resource-constrained medical systems

Any future clinical application would require extensive engineering validation, safety testing, regulatory evaluation, and clinical validation beyond the scope of this prototype.

---

# 🎓 Research & PhD Relevance

This project provided practical experience across the complete embedded-system development cycle:

**Problem Definition → System Architecture → Hardware Design → Embedded Programming → Integration → Testing → Prototype Validation**

The project strengthened my experience in:

* Embedded C/C++
* Arduino-based embedded systems
* Microcontroller programming
* Servo and actuator control
* Sensor interfacing
* I²C communication
* Human-machine interfaces
* Real-time timing and control
* Battery-powered embedded systems
* Hardware–software integration
* Prototype development and testing

The work also strengthened my interest in developing **intelligent, connected, and resource-efficient embedded systems** for real-world applications.

---

# 📚 Project Documentation

The complete project report is available in:

**`ProjectReport.pdf`**

The embedded implementation is available in:

**`main.ino`**

The physical prototype demonstration is available in:

**`PortableVentilator.mp4`**

---

# 👩‍💻 Author

**Khatija Mahveen**

B.E. Electronics & Communication Engineering
M.E. Embedded Systems

### Research Interests

**Embedded Systems · Edge AI · IoT · Real-Time Systems · Intelligent Systems · Hardware–Software Co-Design · Communication Systems**

---

## 📜 License

This repository is shared for **academic, educational, and research portfolio purposes**.

The prototype is **not a clinically validated medical device** and must not be used for patient treatment or medical decision-making.

---

## ⭐ Project Summary

This project demonstrates the development of a **portable automated Ambu-bag compression prototype** using an Arduino UNO and servo motor.

The work combines **embedded programming, actuator control, user-interface design, power management, hardware integration, and physical prototyping** to investigate a low-cost approach to automated mechanical ventilation at the proof-of-concept level.
