# **INTRODUCTION TO CUBESAT AND SATELLITE**<br>
**My Journey through an Internship in Introduction to CubeSat and Satellite Commuincation**<br>
**Embarking on an internship in Introduction to CubeSat and satellite communication has been an exhilarating journey filled with learning, challenges, and significant growth. Here's a glimpse into my experience and what I've gained from this transformative opportunity.**<br>

![Glimpse to Cubesat](https://www.cblelectronics.com/sites/default/files/2022-03/cubesat-00.jpg)
# ABSTRACT
The first CubeSats were launched in 2003 and just nine years later, the one hundredth CubeSat has been put in orbit. By the end of 2012, 112 CubeSat-class missions were flown, fielded by nearly 80 organizations from 24 countries on 29 rockets.The original intent of the project was to provide affordable access to space for the university science community, and it has successfully done so, many major universities now have a space program.
# INTRODUCTION

## What are Cubesats?
CubeSats are a class of nanosatellites that use a standard size and form factor.  The standard CubeSat size uses a “one unit” or “1U” measuring 10x10x10 cms and is extendable to larger sizes; 1.5, 2, 3, 6, and even 12U.  Originally developed in 1999 by California Polytechnic State University at San Luis Obispo (Cal Poly) and Stanford University to provide a platform for education and space exploration.
<div style="display: flex; justify-content: space-between;">
    <img src="https://www.nasa.gov/wp-content/uploads/2015/03/what_are_cubesats.png" alt="Image 1" style="width: 45%;">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/ae/Nanosatellites_yearly_launches.svg/1920px-Nanosatellites_yearly_launches.svg.png" alt="Image 2" style="width: 45%;">
</div>
NASA Ames launched its first CubeSat, GeneSat, in December 2006.  Since then Ames has launched 16 CubeSat spacecraft varying in size from 1U to 3U with an additional 12 CubeSats in development or awaiting launch.<br>

## CUBESAT DISPENSER:-<br>
The dispenser, which is the interface between the CubeSat and the launch vehicle (LV). The dispenser provides attachment to a launch vehicle (or rocket), protects the CubeSat during launch, and releases it into space at the appropriate time.There are a number of different types of dispensers on the market. Each has different features, but they are all designed to hold satellites that conform to the standard CubeSat form factor.<img src="https://insights.globalspec.com/images/assets/912/11912/ULA_CubeSat_NPSCul-Lite_ABC.png" alt="Image" style="float: right; margin-left: 10px;">
**The project phases (and typical timeframes) are as follows:<br>**
- Concept Development (1–6 months)<br>
- Securing Funding (1–12 months)<br>
- Merit and Feasibility Reviews (1–2 months)<br>
- CubeSat Design (1–6 months)<br>
- Development and Submittal of Proposal in Response to CSLI Call (3–4 months)<br>
- Selection and Manifesting (1–36 months)<br>
- Mission Coordination (9–18 months)<br>
- Licensing (4–6 months)<br>
- Flight-Specific Documentation Development and Submittal (10–12 months)<br>
- Ground Station Design, Development, and Testing (2–12 months)<br>
- CubeSat Hardware Fabrication and Testing (2–12 months)<br>
- Mission Readiness Reviews (half-day)<br>
- CubeSat to Dispenser Integration and Testing (1 day)<br>
- Dispenser to Launch Vehicle Integration (1 day)<br>
- Launch (1 day)<br>
- Mission Operations (variable, up to 20 years)<br>
**MINIMAL PAYLOAD:-**<br>
A minimal payload refers to the basic set of components and instruments carried onboard a satellite, particularly CubeSats, to achieve its primary mission objectives. This concept is crucial in the context of CubeSats due to their small size, limited resources, and constrained budgets. The idea is to design and implement a payload that is essential, compact, and efficient, ensuring that the satellite can still perform meaningful tasks despite its size limitations.
<img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/0cc567cb-93d5-4572-9e43-fb2f154d03d2">

## CUBESAT ARCHITECTURE:-<br>
The communication system of a CubeSat is a critical subsystem that enables the satellite to establish communication links with ground stations for data transmission, command reception, and telemetry monitoring. Given the small size and low power constraints of CubeSats, the communication system is designed to be compact, efficient, and capable of operating within the limitations of the CubeSat platform.<br>
- **Transceiver:-**
  The transceiver serves as the primary radio communication device onboard the CubeSat. It transmits data to ground stations and receives commands and telemetry data from Earth.CubeSats typically operate in 
  amateur radio bands (e.g., UHF/VHF) or commercial bands (e.g., S-band) depending on regulatory approvals and mission requirements.<br>
- **Antennas:-** Antennas are essential for transmitting and receiving radio signals between the CubeSat and ground stations.Antennas are essential for transmitting and receiving radio signals between the CubeSat and ground stations.<br>
- **Modulation and Coding:-** Modulation and coding techniques are used to encode and decode data transmitted over the radio link.CubeSats typically use forward error correction (FEC) coding schemes to ensure reliable data transmission despite potential signal degradation or interference.<br>
- **Ground Station Network:-** Ground stations are terrestrial facilities equipped with large antennas and radio equipment to communicate with CubeSats orbiting overhead.Ground stations track the CubeSat's orbit and establish communication windows during which data can be transmitted and received.<br>
- **Command and Data Handling:-** Command and data handling subsystems manage the flow of data between the communication system, onboard computer, and payload instruments.CubeSats often use standard communication protocols (such as AX.25 for amateur radio bands) for data exchange between the satellite and ground stations.<br>

<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/34345e91-20bf-4e79-b79a-016ff0701a6b" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/f3d10417-e48d-479c-ac7b-51cb335c7313" alt="Image 2" style="width: 45%;">
</div>

## DIGITAL MODULATION METHODS:- <br>
- **BANDPASS MODULATION:-** It refers to modulation of signal over a carrier frequency. In these techniques the signal to be transmitted is sent by modulating either one or more of the three properties of carrier wave. <br>
- **Frequency Shift Keying:-** It is a frequency modulation scheme in which digital information is encoded on a carrier signal by periodically shifting the frequency of the carrier between several discrete frequencies.<br>
- **Fast Fourier Transform:-** FFT is a fast algorithm for computing the DFT of a sequence or its inverse. The DFT converts a signal from its original domain (typically time or space) to a representation in the frequency domain.<br>
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/a01842fd-c972-4146-be0c-fb9fba5cf71e" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/1b82ec2f-d1cf-4489-9665-805642ef411a" alt="Image 2" style="width: 45%;">
</div>

## LoRa Module:-<br>
A LoRa module is a type of wireless communication module that utilizes LoRa (Long Range) modulation technology for long-range communication with low power consumption. LoRa modules are commonly used in IoT (Internet of Things) applications, sensor networks, and other scenarios where long-distance communication and low power consumption are crucial.LoRa modules are small devices designed to transmit data on the LoRaWAN wireless network on frequencies in the 864-915 MHz range, depending on the region.<br>
**KEY PROPERTIES OF LoRa:-** <br>
- **Scalable bandwidth:** LoRa modulation is both bandwidth and frequency scalable. It can be used for both narrowband frequency hopping and wideband direct sequence applications.<br>
- **Constant Envelope / Low-Power:** Similar to FSK, LoRa is a constant envelope modulation scheme which means that the same low-cost and low-power high-efficiency PA stages can be re-used without modification.<br>
- **High Robustness:** Asynchronous nature a LoRa signal is very resistant to both in-band and out-of-band interference mechanisms.<br>
- **Multipath / fading resistant:** The chirp pulse is relatively broadband and thus LoRa offers immunity to multipath and fading, making it ideal for use in urban and suburban environments, where both mechanisms dominate.<br>
- **Doppler Resistant:** Doppler shift causes a small frequency shift in the LoRa pulse which introduces a relatively negligible shift in the time axis of the baseband signal. This frequency offset tolerance mitigates the requirement for tight tolerance reference clock sources. Ideally suited for satellite communication.<br>
- **Long Range Capability:** For a fixed output power and throughput, the link budget of LoRa exceeds that of conventional FSK.<br>
## VERY LARGE SCALE INTEGRATION:-<br>
Very-large-scale integration (VLSI) is the process of creating an integrated circuit (IC) by combining thousands of transistors into a single chip. VLSI began in the 1970s when complex semiconductor and communication technologies were being developed. The microprocessor is a VLSI device.It is a process used in the design and fabrication of integrated circuits (ICs), which are electronic circuits that are made up of a large number of transistors and other components that are integrated into a single chip. <br>
<img src="https://github.com/user-attachments/assets/3445748b-1492-434a-9e70-e80ade2162e0">
## 4nec2:-<br>
4nec2 is a Windows-based graphical user interface (GUI) program that interfaces with NEC-2 (Numerical Electromagnetics Code), a method of moments solver. NEC-2 is a computer code used to analyze the electromagnetic response of antennas and other metal structures. 4nec2 simplifies the process of designing and simulating antennas by providing a visual interface and various tools to manipulate antenna geometries, analyze performance, and visualize results.<br>
- **To use 4nec2,perform following steps:**
    - **Download and Install:** Download the 4nec2 software from trusted sources online and install it on a Windows-based computer.
    - **Create or Import Antenna Models:** Use the GUI to create or import antenna models.
    - **Define Parameters:** Set parameters such as frequencies, materials, and simulation settings.
    - **Run Simulations:** Perform simulations to analyze antenna performance.
    - **Visualize and Optimize:** View results, visualize radiation patterns, and optimize designs as needed.
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/ae0ec79a-0205-4728-b088-974abf857b57" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/c2fe779a-f342-47d8-85df-c1bf95be101d" alt="Image 2" style="width: 45%;">
</div>

## Introduction to Antenna:-<br>
Antennas are used to transmit and receive information through changes in the electromagnetic fields that surround them.It employed in space communications are key components providing the vital links between the ground and the spacecraft.An antenna is a fundamental component in the field of electromagnetic waves and communication systems, serving as the interface between electrical signals propagating through conductors and electromagnetic waves traveling through space.<br>
**Basic Principles of Antennas:** <br>
- **Functionality:** <br>
    - **Radiation and Reception:** Antennas convert electrical signals into electromagnetic waves for transmission (radiation) and vice versa for reception.<br>
    - **Propagation:** Electromagnetic waves radiate from antennas into space or are captured from space, depending on whether the antenna is transmitting or receiving.<br>
- **Electromagnetic Theory:** <br>
    - **Maxwell's Equations:** Antennas operate based on Maxwell's equations, which describe how electric and magnetic fields interact and propagate through space.<br>
    - **Wavelength and Frequency:** Antennas are designed to operate at specific wavelengths corresponding to their intended frequency bands.<br>
- Radiation Patterns:<br>
  - **Directivity:** Antennas have specific radiation patterns that describe how electromagnetic energy is distributed in space.<br>
  - **Gain:** The gain of an antenna quantifies its directional capability, indicating how much power is radiated in the desired direction compared to an isotropic radiator.<br>
<div style="display:flex; justify-content:center; align-items:center;">
    <img src="https://github.com/user-attachments/assets/a7527dad-40fe-4228-9e85-06619fb235a0" alt="Image 1" style="width:50%; height:15%; margin-right:10px;">
    <img src="https://github.com/user-attachments/assets/d74d216b-3781-4d11-a179-be578540f0f9" alt="Image 2" style="width:10000%; height:auto; margin-left:10px;">  
</div>

## GLIMPSE TO SATELLITE FORMULAS

<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/5b66830b-892d-4071-b2d3-c62da8aaa205" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/581cfdb4-80c6-4f5b-b5ee-ecd0f1f95cb7" alt="Image 2" style="width: 45%;">
</div>

## TINY GROUND STATION:-<br>
TinyGS is an open network of Ground Stations distributed around the world to receive and operate LoRa satellites, weather probes and other flying objects, using cheap and versatile modules.Initially TinyGS was born under the name ESP32 Fossa Groundstation, it was developed as a "weekend" project for the FossaSAT-1 LoRa satellite. We are passionate about space and created this project to be able to track and use the satellites and to learn and experiment about radio. Currently the network is open to any LoRa satellite and we also support other flying objects that have a compatible radio modulation with our hardware such as FSK, GFSK, MSK, GMSK, LoRa and OOK. And the project was renamed to TinyGS.
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/942f2eed-8db5-4f02-a352-e55d79052682" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/bece17a1-4db8-4502-b4de-f56adf91ea27" alt="Image 2" style="width: 45%;">
</div>

- **INSTALLTION OF TINY GS:** <br>
The first time you flash your board you can use the [web installer](https://installer.tinygs.com/) using Google Chrome web browser on Linux, Windows or MacOS. Follow instructions there.<br>
All data received by TinyGS Ground Stations are showed at [TinyGS website](https://tinygs.com/)
- **Community:** <br>
We had used Telegram as the main communication channel for the project. There are also two channels where we can subscribe and get updated automátically whenever a new packet is received by the network from the Satellite.<br>
[Link to telegram community](https://t.me/joinchat/DmYSElZahiJGwHX6jCzB3Q)<br>
[Link to Personal Bot](https://t.me/tinygs_personal_bot)<br>
In Personal bot we generated our MQTT credentials,Station and [Web Link for mytinyGs](https://tinygs.com/station/TGS_komal@7057635270#close),here we ended up receving 61 packets in one night.<br>
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/fc5dd728-07e7-49b3-9958-9d8f44d30c68" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/379bf91c-c37f-4e4e-9a08-6e7bcb66c90c" alt="Image 2" style="width: 45%;">
</div>

[Here the Records of Packets received](https://github.com/user-attachments/files/16191009/TinyGS_Record.1.xlsx)<br>
# LAB EXERCISES
- **Lab 1: Intro to ESP32 Programming**
    - **Introduction to ESP32 development kit**
       The ESP-32 is a powerful and versatile microcontroller developed by Espressif Systems. It's widely used in various IoT (Internet of Things) applications due to its robust features and capabilities.
        - **WiFi:** It supports IEEE 802.11 b/g/n Wi-Fi, enabling connectivity to wireless networks and the internet.
        - **Bluetooth:** Integrated Bluetooth Low Energy (BLE) allows for low-power communication with other BLE devices, making it suitable for IoT applications requiring wireless communication.
![ESP-32](https://github.com/user-attachments/assets/683b594a-6ab8-41bd-a8fa-ef7055c31d31)
Execute the C-Code for Blinking of LED,Fading of LED and Multiple blink of LED.
- **Lab 2: Intro to GPIO programming**
    - We learnt to configure a GPIO as an output and control an LED with it.
- **Lab 3: Dimming LED using PWM**
    - We have used the ESP32 to control the light intensity of an external LED using PWM signal.
    - From the [LED Datasheet](Resources/Datasheet-LED-XLMR01DE.pdf) tabulate the following data:
      
       |PARAMETERS                                        |VALUES |
       |      ---                                         |  ---  |
       |Maximum Forward current (If)                      |30mA   |
       |Typical Forward Voltage (Vf)                      |1.85V  |
       |Dominant Wavelength (lambdaD)                     |640    |
       |Estimate the color (RGB) from the above wavelength|Red    |
       |Typical Cacpacitance (pF)                         |45pF   |
       |Operating temperature range= -40 to 85(degree Celcius)
      - From the [ESP32 Datasheet](Resources/Datasheet-ESP32.pdf) find and tabulate:
     
        |PARAMETERS                                                          |VALUES |
        |      ---                                                            |  ---  |
        |the maximum output voltage of the GPIO pins                         |4.34|
        |the maximum current that the GPIO can source from supply to the load|6.06|
      - Written a program for ESP32:
        - Assigned an output port for the LED
        - Assigned an input port for 2-step dimmer control.
           1: Full intensity, 0: 25-percent intensity.
        - Writen a program to control the LED intensity using Pulse-Width Modulation (PWM).
- **Lab 4: Dimming multiple LEDs**
  - ESP32 GPIO pins were used to dim multiiple LEDs with different delays.
- **Lab 5: Printing data in the serial monitor**
    -The Serial Monitor is an essential tool when creating projects with Arduino. It can be used as a debugging tool, testing concepts, or communicating directly with the Arduino board.
    - he Arduino IDE 2 has the Serial Monitor tool integrated with the editor, which means that no external window is opened when using the Serial Monitor. This means that you can have multiple windows open, each with its own Serial Monitor.
- **Lab 6: Controlling an LED through serial monitor**
    - Controlling an LED connected to ESP32 by reading commands from the serial monitor and turning the LED on or off based on those commands.
- **Lab 7: I2C-based OLED Display control**
    - I2C-based OLED pin details. Importing OLED libraries. Structure of the OLED. Displaying simple Text and Scrolling Text in different ways.
- **Lab 8: Introduction Signal Processing using Python**
    - Computed the FFT of the above signal and plot it.
      - We have notice the FFT resolution is very limited for a single cycle.
    - Created another a signal of frequency 3MHz, add it to above signal and do FFT for the resultant signal.
- **Lab 9: I2C temperature sensor interface**
    - Display of room temperature and humidity through OLED as well as serial monitor using DHT22 with ESP32.
- **Lab 10: Introduction to LoRa module**
    - Introduction to architecture and pin configuration of Ra-02 Lora transceiver module and SPI (Serial Peripheral Interface) communication.
- **Lab 11: LoRa communication**
    - Introduction to Lora communication using Ra-02 Lora transceiver module with ESP32.
- **Lab 12: Communication between two LoRa nodes**
    - Sending Text packets and receiving the text packets with **RSSI (Received Signal
Strength Indicator)** and SNR through Serial monitor.
    - Sending Temperature and humidity packets and receiving the same packets with RSSI (Received Signal Strength Indicator) and SNR through a Serial monitor as well as an OLED display.
- **Lab 13: LoRa one-to-many communication setup**
    - Sending data packets from one Lora transmitter to multiple Lora receivers and retracing the same packets.
- **Lab 14: Introduction to antenna modeling and simulation software 4NEC2.**
    - Tune it to 433MHz with the help of NanoVNA-A Portable VNA Antenna Analyzer Kit with 10KHz-1.5GHz, 2.8 Inch Digital LCD Display Touching Screen Standing Wave Measuring Instrument.
- **Lab 15: Physical design of Dipole and V-dipole antennas**
- **Lab 16: Introduction to TinyGS**
- **Lab 17: Setting up a TinyGS ground station**
- **Lab 18: Processing TLE data with Python**
    - Using genAI tool (ChatGPT, CoPilot, etc) find out the detail about the satellite Two-Line Element (TLE) format.
    - Write a Python programm to conver a TLE of satellite into a Lat/Long location.
      - You can get all the TLEs of satellites tracked by TinyGS [here](https://api.tinygs.com/v1/tinygs_supported.txt)
    - Generate the output as an URL that you can paste in a browser and get the satellite location.
    - And modify the above program such the [TLE data file](https://api.tinygs.com/v1/tinygs_supported.txt) can be given as input with the two line numbers to process.
- **Lab 19: Simulating Digital Spread Spectrum Modulation**
    - Resimulate FSK from Lab 8
    - Introduce code to convert the digital data into spread spectrum before modulating it to a higher frequency.
