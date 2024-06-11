# Dual-axis-solar-tacker

This repository contains the design, code, and documentation for a Dual-Axis Solar Tracker project. The dual-axis solar tracker aims to maximize the efficiency of solar panels by continuously orienting them towards the sun. By using both azimuthal and elevational adjustments, the tracker ensures that the panels receive the maximum possible sunlight throughout the day, leading to increased energy production.

Features:-

Dual-Axis Tracking: Tracks the sun's position in both azimuth and elevation, ensuring optimal solar exposure.
Real-Time Sun Positioning: Utilizes real-time data to adjust the panel's position dynamically.
Energy Efficiency: Increases the efficiency of solar panels by up to 30% compared to fixed-position systems.
Microcontroller-Based Control: Powered by a microcontroller (e.g., Arduino, Raspberry Pi) for precise control and automation.
Sensor Integration: Incorporates light sensors (e.g., LDRs) to detect sunlight intensity and adjust positioning.
Weather Resilience: Features mechanisms to protect the panels during adverse weather conditions.
Scalability: Design can be scaled to accommodate different sizes and types of solar panels.

Components :-

1. Microcontroller: Arduino or Raspberry Pi

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/28095f9f-3db4-4884-b4a7-3e949916eef2)

https://www.electronicscomp.com/uno-r3-smd-atmega328p-board-compatible-india?gad_source=4

2. Motors: Servo or stepper motors for precise movement 

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/a1f0a69a-68a9-4b42-a8f7-8816476e74bc)


https://robocraze.com/products/mg995-servo-motor?variant=40193009844377&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AfmBOopNSnacjKYdIsqCN7nGCejFJAKumLHbIzSNPAlGLLwQFliXhYiLLqc


3. Sensors: Light Dependent Resistors (LDRs).

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/91f6ca52-9eee-43c3-b97c-eb340aa9dba2)

https://robu.in/product/5mm-ldr-pack-of-10/?gad_source=4
   
4. resistors : 100 kilo ohm

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/552ccea1-8a16-41e5-88a5-77f550164761)

https://www.electronicscomp.com/100k-ohm-resistance?srsltid=AfmBOoookARoQ2Xx0Oa274yjpDSPJv7RqnoHLCKZDGoXmXmUuyVfweMswPg

5. Power Supply: Solar panel and battery system

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/e7528f79-298f-4f88-9693-cbbada085d1f)

https://www.amazon.in/180mah-Rectangle-Polycrystalline-Charging-Module/dp/B0CW1ZGXNT?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=A3N7GZ3M00331P

6. Structural Frame: Aluminum or steel frame for mounting the solar panel


Installation and Setup:-

1. Hardware Assembly: Follow the provided schematics to assemble the tracker frame, mount the motors, and attach the sensors.
Software Installation: Upload the provided code to the microcontroller. Ensure all dependencies are installed.

![image](https://github.com/1512gautam/dual-axis-solar-tracker/assets/142911925/c58fe646-5dd3-4850-8c2c-888015fb61fd)

2. Calibration: Calibrate the sensors and motors according to the instructions to ensure accurate tracking.
3. Testing: Conduct tests to ensure the system tracks the sun accurately and make adjustments as necessary.

Usage:-

Starting the Tracker: Power on the system and ensure the microcontroller is running the tracking software.
Maintenance: Regularly check the mechanical parts and sensors for wear and tear, and replace them as needed.

Acknowledgments
We would like to thank all contributors and the open-source community for their invaluable support.
