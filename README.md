# Arduino-Parking-Sensor
**Core Function:**
An embedded system that measures the distance to an obstacle in real time and provides a progressive visual alert using 6-LED.

**Main Components:**

-Arduino Uno: The microcontroller that processes data and controls the outputs.

-HC-SR04 Ultrasonic Sensor: Measures distance by emitting high-frequency sound waves and calculating their return time (Time-of-Flight principle).

-6x LEDs & Resistors: Act as a visual proximity indicator.

**Working Principle:**
As an object gets closer to the sensor, the Arduino detects the decrease in distance and sequentially lights up more LEDs (from green/yellow to red) to warn the driver to stop.

**Future Improvements**

-OLED display integration

-Wireless/Bluetooth monitoring

-Mobile application support

-IoT-based parking assistance system
