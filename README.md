# Servo-Gate
# Automatic Servo Gate with Ultrasonic Sensor

A simple Arduino automation project that uses an ultrasonic sensor to detect nearby objects and automatically open/close a servo-controlled mechanism.

---

## Features

* Detects objects within **5 cm**
* Automatically opens servo when object is detected
* Closes servo when no object is present
* Displays system status on **I2C LCD**
* Uses LEDs for visual indication

---

## Components

* Arduino Board
* HC-SR04 Ultrasonic Sensor
* Servo Motor
* 16x2 I2C LCD Display
* Red LED
* Blue LED

---

## Wiring

| Component       | Arduino Pin |
| --------------- | ----------- |
| Servo Signal    | 3           |
| Ultrasonic Trig | 5           |
| Ultrasonic Echo | 6           |
| Red LED         | 9           |
| Blue LED        | 10          |

---

## How It Works

* Measures distance using the ultrasonic sensor
* If distance ≤ 5 cm:

  * Servo moves to **open position**
  * LCD displays **OPEN**
  * Blue LED turns ON
* Otherwise:

  * Servo moves to **closed position**
  * LCD displays **CLOSED**
  * Red LED turns ON

---

## Libraries Used

* Servo
* LiquidCrystal_I2C

---

## Purpose

Built for practicing:

* Sensor interfacing
* Servo motor control
* Embedded automation logic
* Arduino project structure

