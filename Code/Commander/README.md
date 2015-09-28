#The code that runs on the Commander goes in this folder

Please note that you will need to edit this file and/or include details in the commits when changes are made.

* serialcommander.c is a file that contains functions related to the serial input/output. It will contain functions such as sendByte, receiveByte, setupSerial, initiateConnection, acceptConnection

* lcdcommander.c will be a file that contains functions related to the LCD component such as setupLCD, sendString, moveCursor

* inputoutputs.c will be a file that contains functions that monitor the inputs such as buttons, pots etc and changes the states of the controller LEDs, and will contain functions such as setupAD, onButtonChanged, potValue, toggleLED, 