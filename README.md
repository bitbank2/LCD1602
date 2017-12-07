LCD1602 - 2 line x 16 character LCD display<br>

Written by Larry Bank<br>
Copyright (c) 2017 BitBank Software, Inc.<br>

![LCD 1602](/lcd1602.jpg?raw=true "Running on RPi0W")

The common 1602 LCD found for sale is the marriage of a HD44780 LCD controller
and an I2C I/O expander. These are connected such that the upper 4 data bits of
the I2C data are connected to the upper 4 data bits of the LCD controller. The
LCD controller supports a 4-bit data mode, so the other 4 data bits coming out
of the I2C expander are used as control lines to select command/data, R/W, 
backlight control and the clock to trigger the data to be written/read. This
puts more effort on the software since it must split each byte into two writes
and manually pulse the clock line with multiple writes which toggle the correct
data bit.

My purpose in releasing this library was to better understand the device by
writing my own software for it in the hopes that it benefits the open source
community.


Before building the demo app, make sure that the I2C bus number and address
of your display are correct. For Raspberry Pi boards, the I2C bus is usually 1
and the display is usually located at addresses 0x20 to 0x27. Another thing to
note is that you may not see anything on the display even though it works. There
is a contrast control on the back which must be adjusted before the first use.


Building and running the library<br>
--------------------------------<br>
make<br>
make -f make_demo<br>
./demo<br>

