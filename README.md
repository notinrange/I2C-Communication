
# I2C Communication

I2C (Inter-Integrated Circuit, eye-squared-C), alternatively known as I2C or IIC, is a synchronous, multi-controller/multi-target (controller/target), packet switched, single-ended, serial communication bus invented in 1982 by Philips Semiconductors.

## Main Points of I2C
#### Range of I2C is upto 1200 meters.
#### Clock Frequency of I2C is 0 to 1 MHz.
#### It is also synchronous. 
I2C combines the best features of SPI and UARTs. With I2C, you can connect multiple slaves to a single master (like SPI) and you can have multiple masters controlling single, or multiple slaves. This is really useful when you want to have more than one microcontroller logging data to a single memory card or displaying text to a single LCD.






![Circuit Design of SPI Communication](https://drive.google.com/file/d/16yU6Hl0TB5Qi9b79b5YyGKC_BUSb0qld/view?usp=sharing)




## I2C Protocol Design

![Basic SPI](https://drive.google.com/file/d/1wq5i45U2MoEz7pgVW7xK5hnE_gONwKwV/view?usp=sharing)

#### SDA (Serial Data) – The line for the master and slave to send and receive data.

#### SCL (Serial Clock) – The line that carries the clock signal.

I2C is a serial communication protocol, so data is transferred bit by bit along a single wire (the SDA line)
Like SPI, I2C is synchronous, so the output of bits is synchronized to the sampling of bits by a clock signal shared between the master and the slave. The clock signal is always controlled by the master.


## For Further Reference Read this 

[I2C Communication Article](https://www.circuitbasics.com/basics-of-the-i2c-communication-protocol/)

[I2C Protocol Github](https://github.com/topics/i2c-protocol)

[Tinkercad Simulation By Me](https://www.tinkercad.com/embed/9Bdo4Jb6NSf)
