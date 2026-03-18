
# Example - Toggle Relay LED

We've written a simple sketch for the Qwiic Relay 1X1A - DPDT to toggle the relay and status LEDs on and off every second. You can find the example in the [Examples Folder](https://github.com/sparkfun/SparkFun_Qwiic_Relay_Line/tree/main/Examples) in the Qwiic Relay GitHub Repository. Download the example or copy the code into an empty sketch.

Next, select the Board and Port (in our case the SparkFun RedBoard IoT - ESP32) and click the "Upload" button. Once the code finishes compiling and uploading, you should see the relay toggling the load and both green LEDs on the Qwiic Relay 1x1A on and off every second. If you do not see this behavior, open the [serial monitor](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-monitor/) with the baud set to **115200** to view the serial printout of the code in case there are any errors.