# LumiSentry 🌟

**LumiSentry** is an interactive light detection system that monitors ambient light levels in real-time. Using an Arduino and a photoresistor (LDR), this project provides visual and auditory alerts to help you understand your lighting environment. Whether you're a hobbyist or just curious about light levels, LumiSentry is a fun way to explore! 💡✨

## Features ✨

- Real-time light level monitoring
- LED indicators for light intensity:
  - 🔴 Red: Low light (<200)
  - 🟡 Yellow: Medium light (200 - 600)
  - 🟢 Green: High light (>600)
- 🔔 Buzzer alert for medium and high light levels
- Easy-to-read Serial Monitor output for debugging and monitoring

## Components Needed 🛠️

To build your own LumiSentry system, you will need the following components:

- **Arduino board** (e.g., Arduino Uno)
- **Photoresistor (LDR)**
- **3 LEDs** (Red, Yellow, Green)
- **3 220Ω resistors** (for LEDs)
- **Buzzer**
- **Breadboard** and **jumper wires**
- **USB cable** for programming the Arduino
- Optional: **Power supply** for standalone operation

## Wiring Diagram 🔌

1. **Photoresistor**:
   - One end to **5V** on Arduino
   - The other end to **A0** with a **10kΩ resistor** to **GND**

2. **LEDs**:
   - 🔴 Red LED: Anode to Digital Pin 6, Cathode to GND (via 220Ω resistor)
   - 🟡 Yellow LED: Anode to Digital Pin 9, Cathode to GND (via 220Ω resistor)
   - 🟢 Green LED: Anode to Digital Pin 11, Cathode to GND (via 220Ω resistor)

3. **Buzzer**:
   - Positive terminal to Digital Pin 3
   - Negative terminal to GND
  
4. **Diagram**
   - https://postimg.cc/3ySyXTwG

## Installation 📦

1. **Upload the Code**:
   - Copy the code provided in this repository.
   - Open the Arduino IDE and paste the code into a new sketch.
   - Connect your Arduino to your computer via USB.
   - Select the correct board and port from the **Tools** menu.
   - Click the upload button to upload the code to your Arduino.

## Code Overview 📜

The code initializes the photoresistor and sets up the LED pins and buzzer. In the `loop()` function, it reads the light level every half second. Based on the light intensity, it lights up the corresponding LED and activates the buzzer for medium and high light levels.

### Key Functions:
- `analogRead(pin)`: Reads the current light level from the photoresistor.
- `digitalWrite(pin, value)`: Controls the state of the LEDs.
- `tone(pin, frequency)`: Activates the buzzer at a specified frequency.
- `noTone(pin)`: Stops the buzzer sound.

## Usage 🖥️

Once the code is uploaded and the hardware is set up, open the Serial Monitor in the Arduino IDE to view the light readings. The LEDs will indicate the current light status, and the buzzer will alert you if the light levels are medium or high.

### Tips for Use:
- Place the photoresistor in a location that accurately reflects the light environment you want to monitor.
- Experiment with different light thresholds in the code to suit your needs.
- Use the Serial Monitor to troubleshoot any issues or to observe real-time data.

## Conclusion 🎉

LumiSentry is a fun and educational project that helps you understand light detection and response. Whether you're a beginner or an experienced maker, this project is a great way to learn about sensors and Arduino programming. Enjoy building your own LumiSentry system and take control of your lighting environment! 🌈
