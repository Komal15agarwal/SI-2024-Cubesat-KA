# SI-2024-Cubesat-KA
## My Journey through an Internship in Introduction to CubeSat and Satellite Commuincation
### Embarking on an internship in Introduction to CubeSat and satellite communication has been an exhilarating journey filled with learning, challenges, and significant growth. Here's a glimpse into my experience and what I've gained from this transformative opportunity.
![Glimpse to Cubesat](https://www.cblelectronics.com/sites/default/files/2022-03/cubesat-00.jpg)
### ABSTRACT
The first CubeSats were launched in 2003 and just nine years later, the one hundredth CubeSat has been put in orbit. By the end of 2012, 112 CubeSat-class missions were flown, fielded by nearly 80 organizations from 24 countries on 29 rockets.The original intent of the project was to provide affordable access to space for the university science community, and it has successfully done so, many major universities now have a space program.
### INTRODUCTION

### What are Cubesats?
CubeSats are a class of nanosatellites that use a standard size and form factor.  The standard CubeSat size uses a “one unit” or “1U” measuring 10x10x10 cms and is extendable to larger sizes; 1.5, 2, 3, 6, and even 12U.  Originally developed in 1999 by California Polytechnic State University at San Luis Obispo (Cal Poly) and Stanford University to provide a platform for education and space exploration.
<div style="display: flex; justify-content: space-between;">
    <img src="https://www.nasa.gov/wp-content/uploads/2015/03/what_are_cubesats.png" alt="Image 1" style="width: 45%;">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/ae/Nanosatellites_yearly_launches.svg/1920px-Nanosatellites_yearly_launches.svg.png" alt="Image 2" style="width: 45%;">
</div>
NASA Ames launched its first CubeSat, GeneSat, in December 2006.  Since then Ames has launched 16 CubeSat spacecraft varying in size from 1U to 3U with an additional 12 CubeSats in development or awaiting launch.
#### CUBESAT DISPENSER
the dispenser, which is the interface between the CubeSat and the launch vehicle (LV). The dispenser provides attachment to a launch vehicle (or rocket), protects the CubeSat during launch, and releases it into space at the appropriate time.There are a number of different types of dispensers on the market. Each has different features, but they are all designed to hold satellites that conform to the standard CubeSat form factor.<img src="https://insights.globalspec.com/images/assets/912/11912/ULA_CubeSat_NPSCul-Lite_ABC.png" alt="Image" style="float: right; margin-left: 10px;">
The project phases (and typical timeframes) are as follows:<br>
1. Concept Development (1–6 months)<br>
2. Securing Funding (1–12 months)<br>
3. Merit and Feasibility Reviews (1–2 months)<br>
4. CubeSat Design (1–6 months)<br>
5. Development and Submittal of Proposal in Response to CSLI Call (3–4 months)<br>
6. Selection and Manifesting (1–36 months)<br>
7. Mission Coordination (9–18 months)<br>
8. Licensing (4–6 months)<br>
9. Flight-Specific Documentation Development and Submittal (10–12 months)<br>
10. Ground Station Design, Development, and Testing (2–12 months)<br>
11. CubeSat Hardware Fabrication and Testing (2–12 months)<br>
12. Mission Readiness Reviews (half-day)<br>
13. CubeSat to Dispenser Integration and Testing (1 day)<br>
14. Dispenser to Launch Vehicle Integration (1 day)<br>
15. Launch (1 day)<br>
16. Mission Operations (variable, up to 20 years)<br>
MINIMAL PAYLOADS:-A minimal payload refers to the basic set of components and instruments carried onboard a satellite, particularly CubeSats, to achieve its primary mission objectives. This concept is crucial in the context of CubeSats due to their small size, limited resources, and constrained budgets. The idea is to design and implement a payload that is essential, compact, and efficient, ensuring that the satellite can still perform meaningful tasks despite its size limitations.
<img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/0cc567cb-93d5-4572-9e43-fb2f154d03d2">
CUBESAT ARCHITECTURE:-<br>
The communication system of a CubeSat is a critical subsystem that enables the satellite to establish communication links with ground stations for data transmission, command reception, and telemetry monitoring. Given the small size and low power constraints of CubeSats, the communication system is designed to be compact, efficient, and capable of operating within the limitations of the CubeSat platform.<br>
1:-Transceiver:-The transceiver serves as the primary radio communication device onboard the CubeSat. It transmits data to ground stations and receives commands and telemetry data from Earth.CubeSats typically operate in amateur radio bands (e.g., UHF/VHF) or commercial bands (e.g., S-band) depending on regulatory approvals and mission requirements.<br>
2:-Antennas:-Antennas are essential for transmitting and receiving radio signals between the CubeSat and ground stations.Antennas are essential for transmitting and receiving radio signals between the CubeSat and ground stations.<br>
3:-Modulation and Coding:Modulation and coding techniques are used to encode and decode data transmitted over the radio link.CubeSats typically use forward error correction (FEC) coding schemes to ensure reliable data transmission despite potential signal degradation or interference.<br>
4:-Ground Station Network:Ground stations are terrestrial facilities equipped with large antennas and radio equipment to communicate with CubeSats orbiting overhead.Ground stations track the CubeSat's orbit and establish communication windows during which data can be transmitted and received.<br>
5:-Command and Data Handling:Command and data handling subsystems manage the flow of data between the communication system, onboard computer, and payload instruments.CubeSats often use standard communication protocols (such as AX.25 for amateur radio bands) for data exchange between the satellite and ground stations.<br>
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/34345e91-20bf-4e79-b79a-016ff0701a6b" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/Komal15agarwal/SI-2024-Cubesat-KA/assets/120729898/f3d10417-e48d-479c-ac7b-51cb335c7313" alt="Image 2" style="width: 45%;">
</div>
DIGITAL MODULATION METHODS:-<br>
1.BANDPASS MODULATION:-It refers to modulation of signal over a carrier frequency. In these techniques the signal to be transmitted is sent by modulating either one or more of the three properties of carrier wave. <br>
2.Frequency Shift Keying:-It is a frequency modulation scheme in which digital information is encoded on a carrier signal by periodically shifting the frequency of the carrier between several discrete frequencies.<br>
3.Fast Fourier Transform:-FFT is a fast algorithm for computing the DFT of a sequence or its inverse. The DFT converts a signal from its original domain (typically time or space) to a representation in the frequency domain.<br>
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/a01842fd-c972-4146-be0c-fb9fba5cf71e" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/1b82ec2f-d1cf-4489-9665-805642ef411a" alt="Image 2" style="width: 45%;">
</div>
LoRa Module:-<br>
A LoRa module is a type of wireless communication module that utilizes LoRa (Long Range) modulation technology for long-range communication with low power consumption. LoRa modules are commonly used in IoT (Internet of Things) applications, sensor networks, and other scenarios where long-distance communication and low power consumption are crucial.LoRa modules are small devices designed to transmit data on the LoRaWAN wireless network on frequencies in the 864-915 MHz range, depending on the region.<br>
KEY PROPERTIES OF LoRa:-<br>
Scalable bandwidth: LoRa modulation is both bandwidth and frequency scalable. It can be used for both narrowband frequency hopping and wideband direct sequence applications.<br>
Constant Envelope / Low-Power: Similar to FSK, LoRa is a constant envelope modulation scheme which means that the same low-cost and low-power high-efficiency PA stages can be re-used without modification.<br>
High Robustness: Asynchronous nature a LoRa signal is very resistant to both in-band and out-of-band interference mechanisms.<br>
Multipath / fading resistant: The chirp pulse is relatively broadband and thus LoRa offers immunity to multipath and fading, making it ideal for use in urban and suburban environments, where both mechanisms dominate.<br>
Doppler Resistant: Doppler shift causes a small frequency shift in the LoRa pulse which introduces a relatively negligible shift in the time axis of the baseband signal. This frequency offset tolerance mitigates the requirement for tight tolerance reference clock sources. Ideally suited for satellite communication.<br>
Long Range Capability: For a fixed output power and throughput, the link budget of LoRa exceeds that of conventional FSK.<br>
VERY LARGE SCALE INTEGRATION:-<br>
Very-large-scale integration (VLSI) is the process of creating an integrated circuit (IC) by combining thousands of transistors into a single chip. VLSI began in the 1970s when complex semiconductor and communication technologies were being developed. The microprocessor is a VLSI device.It is a process used in the design and fabrication of integrated circuits (ICs), which are electronic circuits that are made up of a large number of transistors and other components that are integrated into a single chip. <br>
<img src="https://github.com/user-attachments/assets/3445748b-1492-434a-9e70-e80ade2162e0">
Introduction to Antenna:-<br>
Antennas are used to transmit and receive information through changes in the electromagnetic fields that surround them.It employed in space communications are key components providing the vital links between the ground and the spacecraft.An antenna is a fundamental component in the field of electromagnetic waves and communication systems, serving as the interface between electrical signals propagating through conductors and electromagnetic waves traveling through space.<br>
Basic Principles of Antennas:<br>
Functionality:<br>
Radiation and Reception: Antennas convert electrical signals into electromagnetic waves for transmission (radiation) and vice versa for reception.<br>
Propagation: Electromagnetic waves radiate from antennas into space or are captured from space, depending on whether the antenna is transmitting or receiving.<br>
Electromagnetic Theory:<br>
Maxwell's Equations: Antennas operate based on Maxwell's equations, which describe how electric and magnetic fields interact and propagate through space.<br>
Wavelength and Frequency: Antennas are designed to operate at specific wavelengths corresponding to their intended frequency bands.<br>
Radiation Patterns:<br>
Directivity: Antennas have specific radiation patterns that describe how electromagnetic energy is distributed in space.<br>
Gain: The gain of an antenna quantifies its directional capability, indicating how much power is radiated in the desired direction compared to an isotropic radiator.<br>
<div style="display: flex; justify-content: space-between;">
    <img src="https://github.com/user-attachments/assets/a7527dad-40fe-4228-9e85-06619fb235a0" alt="Image 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/d74d216b-3781-4d11-a179-be578540f0f9" alt="Image 2" style="width: 45%;">
</div>
