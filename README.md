# Arduino Parking Sensor System

## Core Function

An embedded parking assistance system that measures the distance between a vehicle and nearby obstacles in real time. The system provides progressive visual feedback using LEDs to help the driver park safely.

## Main Components

- **Arduino Uno:** The microcontroller that processes sensor data and controls the outputs.
- **HC-SR04 Ultrasonic Sensor:** Measures the distance to obstacles using ultrasonic waves.
- **6 LEDs:** Provide visual indication of the remaining distance.
- **Resistors:** Protect the LEDs by limiting current.
- **Jumper Wires & Breadboard:** Used to connect all components.

## Working Principle

The HC-SR04 continuously measures the distance to nearby objects. As the measured distance decreases, the Arduino sequentially turns on more LEDs. This allows the driver to estimate how close the vehicle is to an obstacle. The closer the obstacle, the more LEDs illuminate, providing an intuitive parking aid.

## Future Improvements

- OLED display integration
- Buzzer for audio alerts
- Bluetooth monitoring
- Mobile application support
- IoT-based parking assistance system
-Mobile application support

-IoT-based parking assistance system
