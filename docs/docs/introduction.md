---
slug: /
---
# Introduction

The SparkFun Qwiic Relay - 1X1A DPDT lets you control high power devices from a microcontroller over I<sup>2</sup>C. This relay breakout uses the G6K-2F-Y DC3 dual-pole/dual-throw relay from Omron Electronic Components capable of switching loads of 1A/30VDC and 0.3A/125VAC (at 40&deg;C) with very low drive currents to switch the relay. 

This board has one 3-pin screw terminal connector for solderless connection to one of the relay's terminals and a 0.1"-spaced plated through-hole header for connecting the second terminal. It also has options to drive the relay over I<sup>2</sup>C (via Qwiic or a soldered connection) or an external drive input such as a switch or I/O signal. Driving the relay over I<sup>2</sup>C only requires up to 5.8mA@3.3V and driving it from an external input requires up to 33mA@3.3V.

# Required Materials

In order to follow along with this guide you'll need the SparkFun Qwiic Relay - 1X1A DPDT along with the following items:

* [SparkFun RedBoard IoT - ESP32](https://www.sparkfun.com/sparkfun-iot-redboard-esp32-development-board.html) (Or a similar Arduino microcontroller)
* [Qwiic Cable](https://www.sparkfun.com/flexible-qwiic-cable-200mm.html)
* [USB-C Cable](https://www.sparkfun.com/usb-a-to-usb-c-cable-1m-usb-2-0-flexible-silicone.html)
* DC or AC Load

# Topics Covered

This guide contains three main sections: **Quickstart Guide**, **Hardware** and **Software**. 

The Quickstart Guide goes over how to connect a load to the Qwiic Relay - 1X1A DPDT and then control it over I<sup>2</sup>C while connected over a Qwiic cable to a SparkFun RedBoard IoT - ESP32 using the SparkFun GPIO Expander Arduino Library.

The Hardware section includes the **Hardware Overview** and provides a detailed overview of the Qwiic Relay - 1X1A DPDT. The **Hardware Assembly** page covers how to connect a load to the relay and connect the board to a microcontroller.

The Software section covers how to install and use the SparkFun GPIO Expander Arduino library with the Qwiic Relay - 1X1A DPDT.

# Resources and Support Documentation

You'll find the board design files (KiCad files & schematic), relevant documentation (datasheets, white papers, etc.) and other helpful links in the **Resources**. Lastly, the **Support** section includes a Troubleshooting page that includes any helpful tips specific to this board as well as information on how to receive technical support from SparkFun.