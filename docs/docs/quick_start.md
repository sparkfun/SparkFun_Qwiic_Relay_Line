In this Quick Start guide we'll go over how to assemble a single AC load to the Qwiic Relay 1X1A - DPDT and connect it to a SparkFun RedBoard IoT - ESP32 to control the relay and load using the SparkFun I<sup>2</sup>C Expander Arduino Library.

# Qwiic Assembly

<figure markdown>
[![Completed Qwiic assembly to the RedBoard IoT - ESP32](/docs/static/img/Qwiic-Relay-1x1A-dpdt-Qwiic-assembly.jpg){ width="600"}](/docs/static/img/Qwiic-Relay-1x1A-dpdt-Qwiic-assembly.jpg "Click to enlarge")
<figcaption>Qwiic Relay 1x1A - DPDT connected to the RedBoard IoT - ESP32 over Qwiic.</figcaption>
</figure>

# Relay Load Assembly

:::warning

 Not sure about what color insulation wiring is used in you region? Check out the [standard wire insulation colors listed online](https://en.wikipedia.org/wiki/Electrical_wiring) for reference. If you are unsure about the standard wiring color in your region, please consult a certified electrician to connect to the AC input voltage side. Make sure the cable is not plugged into the wall as you cut into the wire in the following section.

:::

With the Qwiic Relay 1x1A connected to the RedBoard, let's prepare the wiring for the AC load with the following steps:

* Start by cutting the live AC line (usually black or red) and stripping a small amount of insulation away from the ends of the cut wire.
* Insert one end of the cut wire into the `COM` screw terminal and tighten it to secure the wire.
* Insert the other end of the cut wire either into the `NC` or `NO` screw terminal depending on whether the device will normally be on or off.
    * If the device will normally be **on** and switched **off**, connect this end to `NC`.
    * If the device will normally be **off** and switched **on**, connect this end to `NO`.

<figure markdown>
[![Close up photo of the AC load wires connected to the Qwiic Relay screw terminals](/docs/static/img/Qwiic-Relay-1x1A-dpdt-load-closeup.jpg){ width="600"}](/docs/static/img/Qwiic-Relay-1x1A-dpdt-load-closeup.jpg "Click to enlarge")
<figcaption>AC Load connected to Qwiic Relay 1x1A - DPDT screw terminals.</figcaption>
</figure>


:::danger

 Warning! Make sure that your wires connecting to the wall outlet are secure and are rated to handle the current! Please be careful when handling the contacts when the cable is plugged into a wall outlet. Touching the contacts while powered could result in injury.

 Looking for information about safety and insulation? Check out the notes about Safety and Insulation from our Beefcake Relay Control Kit. 

:::

With everything connected up, your circuit should look similar to the photo below. Now let's upload some code to turn the load on and off.

<figure markdown>
[![Completed assembly photo](/docs/static/img/Qwiic-Relay-1x1A-dpdt-complete-assembly.jpg){ width="600"}](/docs/static/img/Qwiic-Relay-1x1A-dpdt-load-closeup.jpg "Click to enlarge")
<figcaption>Completed Qwiic Relay 1x1A - DPDT assembly.</figcaption>
</figure>

# Toggle Relay LED Arduino Example

This example toggles the relay and both green status LEDs on and off every second. This example uses the [SparkFun I2C Expander Arduino Library](https://github.com/sparkfun/SparkFun_I2C_Expander_Arduino_Library) and can be found in the [Examples folder](https://github.com/sparkfun/SparkFun_Qwiic_Relay_Line/tree/main/Examples) of the Qwiic Relay Line GitHub repository. Follow the steps below to upload the code.

* Open the [Arduino IDE](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2/).
* Open the [Library Manager](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-installing-a-library/) tool, search for "SparkFun I2C Expander" and install the latest version. 
* Either download the example from the [Examples folder](https://github.com/sparkfun/SparkFun_Qwiic_Relay_Line/tree/main/Examples) of the Qwiic Relay Line library or copy the example code into a blank Arduino sketch.
* Select your Board (SparkFun RedBoard IoT - ESP32 or other board) and Port and click "Upload".
* After the code compiles and finishes uploading, the AC load and green LEDs should be turning on and off every second. You can open the [serial monitor](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-monitor/) with the baud set to **115200** to view the serial printout of the code in case there are any errors.

