🇺🇸 English | 🇨🇴 [Español](README.es.md)

# Pibi — Digital to Braille Converter

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/platform-Arduino-teal.svg)](https://www.arduino.cc/)

Arduino firmware that receives text via Serial and activates 6 solenoids to represent each character in Braille — one cell at a time.

**Open hardware. Open source. Built for accessibility.**

---

## How it works

A 6-pin solenoid matrix maps directly to the 6 dots of a standard Braille cell (pins 2–7). Text is sent from a computer via Serial (115200 baud), converted to lowercase, and each character activates the corresponding solenoid pattern for 400ms.

```
Braille cell:       Arduino pins:
  · ·               SOLE_0 (pin 2) — dot 1
  · ·               SOLE_1 (pin 3) — dot 2
  · ·               SOLE_2 (pin 4) — dot 3
                    SOLE_3 (pin 5) — dot 4
                    SOLE_4 (pin 6) — dot 5
                    SOLE_5 (pin 7) — dot 6
```

---

## Demo

[![Pibi Demo](https://img.youtube.com/vi/QXUs105ROPU/0.jpg)](https://www.youtube.com/watch?v=QXUs105ROPU)

---

## Hardware

| Component | Description |
|-----------|-------------|
| Arduino Uno/Nano | Microcontroller |
| 6x solenoids | One per Braille dot |
| Transistor array | To drive solenoids from 5V pins |
| Power supply | External 12V for solenoids |

Schematic: [`hardware/schematic.pdf`](hardware/schematic.pdf)

### Bill of materials

| Qty | Component | Reference | Notes |
|-----|-----------|-----------|-------|
| 1 | Arduino Uno R3 | [Arduino Store](https://store.arduino.cc/products/arduino-uno-rev3) | or compatible clone |
| 6 | Push solenoid 5V/12V | JF-0530B or similar | one per Braille dot |
| 6 | NPN transistor | TIP120 | to drive solenoids from Arduino pins |
| 6 | Flyback diode | 1N4007 | protects transistors from solenoid back-EMF |
| 6 | Resistor 1kΩ | — | transistor base resistors |
| 1 | Power supply 12V 2A | — | external power for solenoids |
| 1 | USB cable Type-A to B | — | Arduino ↔ computer |
| 1 | Breadboard 830 points | — | for prototyping |
| 1 | Jumper wire kit | — | male-to-male assorted |

> Approximate total cost: **USD $20–35** depending on component source (AliExpress, MercadoLibre, or local electronics store).

![LED Matrix](hardware/leds-matrix.png)
![Vibrator Matrix](hardware/vibrator-matrix.png)

---

## Getting started

### Requirements

- [Arduino IDE](https://www.arduino.cc/en/software) 1.8+ or Arduino CLI
- Arduino Uno or compatible board
- Serial monitor (built into Arduino IDE)

### Upload

1. Open `pibi/pibi.ino` in Arduino IDE
2. Select your board: **Tools → Board → Arduino Uno**
3. Select the correct port: **Tools → Port**
4. Click **Upload**

### Usage

Once uploaded, open the Serial Monitor (115200 baud) and type any text. The solenoids will activate the corresponding Braille pattern for each character, one at a time.

---

## Supported characters

All 26 letters (a–z) plus space. Input is automatically converted to lowercase.

---

## About this project

Access to information is a fundamental right. The [Marrakesh Treaty](https://www.wipo.int/treaties/en/ip/marrakesh/) — adopted by over 90 countries — recognizes that people with visual disabilities have the right to access written works in accessible formats. Yet in practice, that access remains out of reach for millions. Pibi was born from that gap: the conviction that technology should remove barriers, not create them.

Pibi is an open source project by **[Scire Populi](https://ultragresion.com)**, a collective dedicated to building open technology for education and accessibility. It has received support and institutional backing from:

- **[Instituto Tecnológico Metropolitano (ITM)](https://www.itm.edu.co)** — Medellín, Colombia
- **[SENA](https://www.sena.edu.co)** — Servicio Nacional de Aprendizaje
- **[Alcaldía de Medellín](https://www.medellin.gov.co)**

The project was validated with real users at **Fundación Aula 5 Sentidos**, whose work with people with sensory disabilities gave Pibi its most important feedback: it has to work for the people who need it, not just on a workbench.

### Acknowledgements

To everyone at **Fundación Aula 5 Sentidos** who gave their time and trust to test this device — this project exists because of you.  
To **ITM**, **SENA**, and the **Alcaldía de Medellín** for believing that open technology and accessibility belong together.  
To every developer, teacher, and student who picks this up and takes it further.

---

## Contributing

Contributions welcome — see [CONTRIBUTING.md](CONTRIBUTING.md).  
Spanish speakers: see [docs/es/contribuir.md](docs/es/contribuir.md).

---

## Made by

Built by [Ultragresion](https://ultragresion.com) — because accessibility shouldn't cost a fortune.
