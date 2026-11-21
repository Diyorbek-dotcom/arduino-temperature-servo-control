# ere

## 📌 Project Description

This project is an Arduino-based temperature monitoring and control
system that activates a servo motor and LED depending on the measured
temperature and user input.

The system uses a push button to initiate temperature checking. Based on
the temperature reading, the Arduino executes different actions using
`if-else` statements.

## 🎯 Project Objectives

-   Measure ambient temperature using a temperature sensor.
-   Activate the system when the user presses a push button.
-   Rotate a servo motor to a specific position when the temperature
    exceeds 30°C.
-   Turn on an LED when the temperature is above 30°C.
-   Return the servo motor to its original position and keep the LED off
    when the temperature is 30°C or below.
-   Implement conditional control logic using `if-else` statements.

## 🔧 Components Used

  Component                         Quantity
  ---------------------------- -------------
  Arduino Uno                              1
  Temperature Sensor (TMP36)               1
  Servo Motor (SG90)                       1
  Push Button                              1
  LED                                      1
  Resistors                      As required
  Breadboard                               1
  Jumper Wires                             1

## ⚙️ System Operation

The system operates according to the following sequence:

1.  The Arduino waits for the user to press the push button.
2.  When the button is pressed, the temperature sensor reading is
    processed.
3.  The measured temperature is compared with the threshold of 30°C.
4.  If the temperature is above 30°C:
    -   The servo motor rotates to a predefined position.
    -   The LED turns ON.
5.  If the temperature is 30°C or below:
    -   The servo motor returns to its original position.
    -   The LED remains OFF.

## 🧠 Control Logic

The control algorithm follows this conditional structure:

``` cpp
if (temperature > 30) {
    servo.write(90);
    digitalWrite(LED_PIN, HIGH);
}
else {
    servo.write(0);
    digitalWrite(LED_PIN, LOW);
}
```

## 🔄 System Logic Flow

**Start → Button Press → Read Temperature → Check Temperature**

-   Temperature \> 30°C → Servo rotates to 90° + LED ON.
-   Temperature ≤ 30°C → Servo returns to 0° + LED OFF.

## 💻 Programming Concepts

The project demonstrates the practical application of:

-   Digital Input -- Push button.
-   Analog Input -- Temperature sensor.
-   Digital Output -- LED.
-   Servo Motor Control -- Position-based movement.
-   Conditional Statements -- `if-else`.
-   Sensor-Based Automation -- Temperature-dependent control.

## 🚀 Expected Result

The system provides a simple example of temperature-dependent
automation. It demonstrates how sensor readings and user input can be
combined to control physical components using an Arduino
microcontroller.

## 🛠️ Platform

-   Arduino Uno
-   Arduino IDE
-   Tinkercad Circuits

------------------------------------------------------------------------

**Project Category:** Arduino \| Embedded Systems \| Sensor-Based
Automation \| Control Systems
