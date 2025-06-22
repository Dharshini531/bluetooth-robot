# Bluetooth Controlled Robot

This project demonstrates a robot controlled via Bluetooth using the HC-05 module and Arduino.

🔗 **Simulation (Wokwi)**: [Add your link here](https://wokwi.com/projects/your-link)

## Components
- Arduino Uno
- L298N Motor Driver
- HC-05 Bluetooth Module
- 2 DC Motors
- Power Supply

## Commands
- `F` = Forward
- `B` = Backward
- `L` = Left
- `R` = Right
- `S` = Stop

## How It Works
An Android phone sends commands to the HC-05 Bluetooth module. The Arduino receives these commands and drives the motors accordingly using L298N.

## Simulation Note
Wokwi doesn't support Bluetooth directly. Use Serial Monitor to type commands like 'F', 'B', etc., to simulate robot movement.

## Author
Siva Subramanian
