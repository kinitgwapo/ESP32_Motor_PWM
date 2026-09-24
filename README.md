### Circuit Specifications

DC Motor: 3V Required

L298N Supplied Power: 5V 3A Samsung Charger

L298N OUT1-2 Vout: 3.3V (5V - 1.7V[L298N Circuit VDrop])

| PWM   | DC Motor State |
| :---: | :------------: |
| 0     | Stationary     |
| 48-49 | Starting       |

### L298N Basics

IN1-4 are inputs that corresponds to OUT1-4. IN1-2 controls OUT1-2 while IN3-4 controls OUT3-4 respectively. The input pins are active-high, the 5V pin can act either as an input or an output pin and depends if the 5V regulator is enabled.

### Images & Circuit Diagram

Circuit Diagram:

<img width="1188" height="681" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/3555e03a-14f2-4e9a-ac79-a95b510fd3f2" />

Button Input:

<img width="2801" height="4080" alt="Button" src="https://github.com/user-attachments/assets/6b11da3f-bc23-44bc-a591-64e333898bf7" />

Potentiometer Input:

<img width="3060" height="4080" alt="Potentiometer" src="https://github.com/user-attachments/assets/075f10c5-f132-4827-8a77-6d9f74f5ca36" />

### References
Miniature 3V DC Motor: https://quartzcomponents.com/products/miniature-dc-motor

L298N (HW-095): https://www.handsontec.com/dataspecs/L298N%20Motor%20Driver.pdf
