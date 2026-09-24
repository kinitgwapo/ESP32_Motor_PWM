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

## References
Miniature 3V DC Motor: https://quartzcomponents.com/products/miniature-dc-motor

L298N (HW-095): https://www.handsontec.com/dataspecs/L298N%20Motor%20Driver.pdf
