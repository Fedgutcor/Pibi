🇺🇸 [English](README.md) | 🇨🇴 Español

# Pibi — Conversor Digital a Braille

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/platform-Arduino-teal.svg)](https://www.arduino.cc/)

Firmware Arduino que recibe texto por Serial y activa 6 solenoides para representar cada carácter en Braille — una celda a la vez.

**Hardware abierto. Código abierto. Hecho para la accesibilidad.**

---

## Cómo funciona

Una matriz de 6 pines de solenoide mapea directamente a los 6 puntos de una celda Braille estándar (pines 2–7). El texto se envía desde un computador por Serial (115200 baudios), se convierte a minúsculas, y cada carácter activa el patrón de solenoides correspondiente durante 400ms.

```
Celda Braille:      Pines Arduino:
  · ·               SOLE_0 (pin 2) — punto 1
  · ·               SOLE_1 (pin 3) — punto 2
  · ·               SOLE_2 (pin 4) — punto 3
                    SOLE_3 (pin 5) — punto 4
                    SOLE_4 (pin 6) — punto 5
                    SOLE_5 (pin 7) — punto 6
```

---

## Hardware

| Componente | Descripción |
|------------|-------------|
| Arduino Uno/Nano | Microcontrolador |
| 6x solenoides | Uno por punto Braille |
| Arreglo de transistores | Para manejar los solenoides desde los pines de 5V |
| Fuente de poder | 12V externa para los solenoides |

Esquemático: [`hardware/schematic.pdf`](hardware/schematic.pdf)

![Matriz de LEDs](hardware/leds-matrix.png)
![Matriz de Vibradores](hardware/vibrator-matrix.png)

---

## Primeros pasos

### Requisitos

- [Arduino IDE](https://www.arduino.cc/en/software) 1.8+ o Arduino CLI
- Arduino Uno o placa compatible
- Monitor Serial (incluido en Arduino IDE)

### Cargar el firmware

1. Abre `pibi/pibi.ino` en Arduino IDE
2. Selecciona tu placa: **Herramientas → Placa → Arduino Uno**
3. Selecciona el puerto correcto: **Herramientas → Puerto**
4. Haz clic en **Subir**

### Uso

Una vez cargado, abre el Monitor Serial (115200 baudios) y escribe cualquier texto. Los solenoides activarán el patrón Braille correspondiente a cada carácter, uno a la vez.

---

## Caracteres soportados

Las 26 letras (a–z) más el espacio. La entrada se convierte automáticamente a minúsculas.

---

## Origen del proyecto

Pibi fue desarrollado como proyecto de tesis de pregrado en el [Instituto Tecnológico Metropolitano (ITM)](https://www.itm.edu.co), Medellín, Colombia, en 2018. El objetivo fue construir un dispositivo de asistencia asequible y de código abierto para el aprendizaje del Braille.

> Gutiérrez Correa, F. (2018). *Conversor digital a Braille — Pibi*. ITM.

---

## Contribuir

Ver la guía completa en [docs/es/contribuir.md](docs/es/contribuir.md).

---

## Creado por

Hecho por [Ultragresion](https://ultragresion.com) — porque la accesibilidad no debería costar una fortuna.
