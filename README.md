# raptor_project
develop mbed sdk on beaglebone or raspberry pi.

on beaglebone green, connect your board and PC with usb wire . open the cloud 9 on your bower http://192.168.7.2:3000/ide.html 
after system booting.
click windows -> New Teriminal
then type linux order

$cd examples

$git clone https://github.com/Pillar1989/raptor_project/

#compile all the project, it will decompress gcc tools in first time
$make 
#it will produce bin file at last, then flash  stm32 chip
$make flash
#stm32 board will reset and run automatically.
