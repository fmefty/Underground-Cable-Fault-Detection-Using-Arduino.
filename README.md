# Underground-Cable-Fault-Detection-Using-Arduino.

**Objective:**
This report presents a novel approach for detecting faults in underground cables using Arduino microcontroller. The system is designed to monitor and detect any electrical anomalies in the underground cable network, which can cause power outage. The system employs various sensors and electrical measurement techniques to detect changes in voltage, current, and impedance in the underground cable. The data collected from the sensors is processed and analyzed by the Arduino microcontroller, which then determines the presence and locations of any faults in the cable. The results show that the proposed system is highly accurate in detecting faults in underground cables and has the potential to significantly improve the reliability and safety of underground power distribution networks.

**Introduction:**
The goal of this project is to create a system for identifying and finding faults in underground cable systems using an Arduino microcontroller. Cable faults can result in power failures and can be challenging to locate and fix, making a dependable and efficient system for detecting and locating these faults crucial for maintaining a consistent power supply. In comparison to overhead cables,
underground cables are less vulnerable to weather-related damages like rain, snow, and lightning strikes, which can cause power failures and safety hazards. This is why underground cables are often the preferred option in urban areas, as they are designed with increased safety, reliability, and durability in mind.

**Fault Type:**
Several types of underground cable faults that can occur, including:
1. Open Circuit Faults: These occur when a break or interruption occurs in the cable, causing a loss of electrical continuity.
2. Short Circuit Faults: These occur when two or more conductors come into contact with each other, causing a high current to flow through the cable.
3. Ground Faults: These occur when a conductor comes into contact with the ground, causing current to flow into the earth.
4. Insulation Faults: These occur when the insulation of the cable is damaged, allowing current to leak out or causing a short circuit.
5. Partial Discharge Faults: These occur when small amounts of electrical energy are discharged within the insulation of the cable, causing damage over time.
6. Corrosion Faults: These occur when the cable's metal conductors are corroded, reducing the electrical conductivity and causing a resistance in the system.
7. Ageing Faults: These occur when the cables degrade over time, reducing the electrical conductivity and causing a resistance in the system.
8. Mechanical Faults: These occur when the cable is damaged due to external factors such as construction activities, animal bites, or physical damage.

**Equipments:**
1. Arduino Uno (Atmega328p): The Arduino Uno is a small computer board that is often used for different projects like building robots, making things work automatically at home, and connecting devices to the internet. It has many different pins that can be used for different things, like sending signals and receiving power. It can be powered by plugging it into a computer or using a separate power supply. It can be programmed using a free software called Arduino, which supports multiple programming languages. The board has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz
crystal, a USB connection, a power jack, an ICSP header, and a reset button. It also has a built-in LED on digital pin 13.

2. LCD Display: An LCD (liquid crystal display) display is a type of flat panel display that is commonly used in electronic devices such as televisions, computer monitors, and smartphones. It uses a special type of liquid crystal to display text and images on a screen. An LCD display typically consists of two layers of glass or plastic that are placed close together. LCD displays are widely used in many applications like in Television, Monitors, Mobile phones, Watches, and other devices that require to display something. It can be also used in Arduino projects by connecting an LCD display to the board and programming it to display different information like sensor data, text, or even custom characters.


3. Relay: A relay is a device that helps control electricity. It is made of an electromagnet and some parts that can let electricity go through or stop it. When electricity flows through the electromagnet, it creates a magnetic field that makes the parts open or close, allowing electricity to flow through a bigger circuit. Relays are used in many different things, like cars, machines in a factory, and even in home appliances. They are used to control bigger circuits with smaller signals, like turning on a big electric motor with a small switch. There are different types of relays, depending on the number of circuits it can control and the way the parts move. Relays are also used in Arduino projects to control bigger loads that needs more power than the board can handle.

5. 4007 Diode: 3x 4007 ultra fast diodes are used as freewheeling diode. A freewheeling diode, also known as a flyback diode, is used in electronics to provide a path for current to flow during the reverse-recovery of an inductive load. A freewheeling diode is commonly used with relays to:
   
* Suppress high voltage spikes caused by the collapse of the magnetic field in the coil of the relay when the switch is turned off.
* Provide a path for current to continue to flow and discharge the coil energy, which helps to extend the life of the relay and reduce switching noise.
* Protect other components in the circuit from damage due to high voltage spikes. The freewheeling diode is connected in parallel with the relay coil and is oriented so that it becomes forward-biased when the current through the coil decreases, providing a path for the current to continue to flow and discharge the coil energy.


6. ULN2003a: ULN2003 is used as a driver module for a relay in this project because it is a high-voltage, highcurrent Darlington transistor array, which can provide the necessary current and voltage to drive the
relay. A relay is an electrical switch that operates by using a small electrical current to control a much larger one, and it often requires a separate driver circuit to operate. The ULN2003 is designed
specifically for this purpose and can provide the necessary current and voltage to control the relay. This helps to simplify the design of the system and ensures that the relay operates reliably.6. 110-220v/12v

7. 2Amp Power Adapter: A 12V 2A power adapter is a device that converts electrical power from a wall outlet into 12V DC from 110-220v AC at 2A, which can then be used to power various devices that require 12V DC power and can handle up to 2A current. Typically, A power adapter typically consists of AC/DC converter (Rectifier), Power cord, Voltage regulator, Fuse or circuit breaker for protection. These power adapters usually come with a DC barrel jack that connects to the device and a plug that goes into the wall outlet. It's important to choose a power adapter with the correct voltage and current specifications to ensure safe and proper operation of the device being powered.

8. 5v Buzzer: A 5V buzzer is an electronic device that produces a sound or tone when supplied with 5V DC power. It is commonly used as an audible indicator or alarm in various electronic systems such as security systems, automotive alarms, and industrial control systems.


9. Male and Female Jumper Wire A male header and a female header are types of connectors commonly used in electronics. A male header is a component with pins that protrude from it, and is used to connect to a female header, which has sockets that the male header pins fit into. Male headers are commonly found on printed circuit boards (PCBs) and are used to connect to external components.


10. Resistors: A resistor is an electrical component that resists the flow of electrical current. It is used to limit the flow of current, distribute voltage, and regulate power in electrical circuits. Resistors have a resistance value measured in ohms and are used in many different types of electronic devices, including radios, televisions, and computers. Here, 220-ohm resistors are used.

**Methodology:**
1. At first, 220V/12V adapter circuit which consists of a step-down transformer and rectifier; takes 1-phase power from socket (Grid) and gives 12 V as input for the microcontroller.
2. Then, the microcontroller drives 3x relays with relay driver (ULN2003a) and send signals or power to the 3-wire transmission line where load or LED lights are connected to distribution side.
3. Now fault will be given manually by disconnecting a line and connecting it to the ground for defined distance. That fault is line to ground fault. Repeating this problem for 2 or 3 lines for double line or triple line to ground fault.
4. When microcontroller senses the fault, the buzzer will start beeping.
5. Finally, LCD display will show the fault locations.

**Results:** 
This underground cable fault detection system can only sense the presence of line to ground, double or triple line to ground fault. It can’t detect the fault for line to line. The experimental result shows
that, the fault detection system detects the fault for given distances. 

**Advantages:**
Underground cable fault detection is a critical aspect of maintaining the reliability of power supply to distributions. With the increasing use of underground cable systems, the need for efficient and effective methods of fault detection has become paramount. The advantage of the proposed system:
1. The faults may be quickly and effectively recognized. There won't be any time restrictions.
2. No complicated systems or procedures are necessary.
3. No step of this system's process needs manual measurement.
4. This system may be developed in a cost-effective manner.
5. The transmission system can run continuously and effectively.

**Lackings:**
This system has several lacking such as
1. This system can’t detect line to line, double or triple line to line fault. So, further improvements can be made.
2. This system is designed for several distance range; doesn’t give the co-ordinates or exact location of the fault location. So, IoT based system can be add to locate the exact location.

**Conclusion:**
The underground cable fault detection system developed in this project is an efficient and reliable method for detecting and locating cable faults. The system can help maintain the continuity of the power supply quickly and accurately by detecting and locating faults, allowing for prompt repairs. Future work could include the integration of additional sensors and advanced algorithms to improve the system's accuracy and reliability   
