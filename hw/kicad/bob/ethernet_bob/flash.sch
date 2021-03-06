EESchema Schematic File Version 2
LIBS:ethernet_bob-rescue
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:ksz8081
LIBS:ESD_Protection
LIBS:hr911105_rj45
LIBS:stm32
LIBS:crystal_smd
LIBS:usblc
LIBS:ethernet_bob-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 6
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L CAT250_EEPROM U4
U 1 1 57FEAF7D
P 5550 3950
F 0 "U4" H 5550 4428 50  0000 C CNN
F 1 "CAT250_EEPROM" H 5550 4337 50  0000 C CNN
F 2 "mt25q:MLP8_8x6" H 5200 3900 50  0001 C CNN
F 3 "" H 5200 3900 50  0000 C CNN
	1    5550 3950
	1    0    0    -1  
$EndComp
$Comp
L C C22
U 1 1 57FEAFCC
P 7350 4000
F 0 "C22" H 7465 4046 50  0000 L CNN
F 1 "C" H 7465 3955 50  0000 L CNN
F 2 "stmbl:C_0603" H 7388 3850 50  0001 C CNN
F 3 "" H 7350 4000 50  0000 C CNN
	1    7350 4000
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR022
U 1 1 57FEB05E
P 7350 3750
F 0 "#PWR022" H 7350 3600 50  0001 C CNN
F 1 "+3.3V" H 7365 3923 50  0000 C CNN
F 2 "" H 7350 3750 50  0000 C CNN
F 3 "" H 7350 3750 50  0000 C CNN
	1    7350 3750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR023
U 1 1 57FEB078
P 7350 4250
F 0 "#PWR023" H 7350 4000 50  0001 C CNN
F 1 "GND" H 7355 4077 50  0000 C CNN
F 2 "" H 7350 4250 50  0000 C CNN
F 3 "" H 7350 4250 50  0000 C CNN
	1    7350 4250
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR024
U 1 1 57FEB090
P 5550 4300
F 0 "#PWR024" H 5550 4050 50  0001 C CNN
F 1 "GND" H 5555 4127 50  0000 C CNN
F 2 "" H 5550 4300 50  0000 C CNN
F 3 "" H 5550 4300 50  0000 C CNN
	1    5550 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7350 3850 7350 3750
Wire Wire Line
	7350 4250 7350 4150
Wire Wire Line
	5550 4300 5550 4250
$Comp
L +3.3V #PWR025
U 1 1 57FEB0B4
P 5550 3600
F 0 "#PWR025" H 5550 3450 50  0001 C CNN
F 1 "+3.3V" H 5565 3773 50  0000 C CNN
F 2 "" H 5550 3600 50  0000 C CNN
F 3 "" H 5550 3600 50  0000 C CNN
	1    5550 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	5550 3650 5550 3600
Text HLabel 5050 3850 0    60   Input ~ 0
FLASH_WP
Text HLabel 5050 3950 0    60   Input ~ 0
FLASH_HOLD
Text HLabel 5050 4050 0    60   Input ~ 0
FLASH_CS
Text HLabel 6050 3850 2    60   Input ~ 0
FLASH_SCK
Text HLabel 6050 3950 2    60   Input ~ 0
FLASH_MOSI
Text HLabel 6050 4050 2    60   Input ~ 0
FLASH_MISO
Wire Wire Line
	5050 3850 5150 3850
Wire Wire Line
	5050 3950 5150 3950
Wire Wire Line
	5050 4050 5150 4050
Wire Wire Line
	5950 3850 6050 3850
Wire Wire Line
	5950 3950 6050 3950
Wire Wire Line
	5950 4050 6050 4050
$EndSCHEMATC
