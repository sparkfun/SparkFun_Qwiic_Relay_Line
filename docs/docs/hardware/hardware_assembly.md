---
sidebar_position: 1
---

# Qwiic Assembly

Just plug one end of the Qwiic cable into the Qwiic Relay, the other into the RedBoard IoT - ESP32.

<figure markdown>
[![The Qwiic Relay 1x1A connected to the RedBoard IoT - ESP32 with a Qwiic cable](/docs/static/img/Qwiic-Relay-1x1A-dpdt-Qwiic-assembly.jpg){ width="600"}](/docs/static/img/Qwiic-Relay-1x1A-dpdt-Qwiic-assembly.jpg "Click to enlarge")
</figure>

# AC Load Assembly

:::

Make sure the cable is not plugged into the wall as you cut into the wire in the following section. Not sure about what color insulation wiring is used in you region? Check out the [standard wire insulation colors listed online](https://en.wikipedia.org/wiki/Electrical_wiring) for reference. If you are unsure about the standard wiring color in your region, please consult a certified electrician to connect to the AC input voltage side. 

:::

* Start by cutting the live AC line (usually black or red) and stripping a small amount of insulation away from the ends of the cut wire.
* Insert one end of the cut wire into the `COM` screw terminal and tighten it to secure the wire.
* Insert the other end of the cut wire either into the `NC` or `NO` screw terminal depending on whether the device will normally be on or off.
    * If the device will normally be **on** and switched **off**, connect this end to `NC`.
    * If the device will normally be **off** and switched **on**, connect this end to `NO`.

We connected the AC load to normally be off so the wires in the photo connect to the `COM` and `NO` terminals:

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