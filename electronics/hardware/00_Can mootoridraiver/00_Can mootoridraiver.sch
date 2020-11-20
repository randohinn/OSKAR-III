EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
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
L MCU_Microchip_ATmega:ATmega328P-PU U?
U 1 1 5FA84BED
P 3825 3425
F 0 "U?" H 3181 3471 50  0000 R CNN
F 1 "ATmega328P-PU" H 3181 3380 50  0000 R CNN
F 2 "Package_DIP:DIP-28_W7.62mm" H 3825 3425 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATmega328_P%20AVR%20MCU%20with%20picoPower%20Technology%20Data%20Sheet%2040001984A.pdf" H 3825 3425 50  0001 C CNN
	1    3825 3425
	1    0    0    -1  
$EndComp
$Comp
L Interface_CAN_LIN:MCP2551-I-P U?
U 1 1 5FA87838
P 8950 2575
F 0 "U?" H 8950 3156 50  0000 C CNN
F 1 "MCP2551-I-P" H 8950 3065 50  0000 C CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 8950 2075 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/devicedoc/21667d.pdf" H 8950 2575 50  0001 C CNN
	1    8950 2575
	1    0    0    -1  
$EndComp
Text GLabel 7575 2475 2    50   Input ~ 0
TXCAN
Text GLabel 8450 2375 0    50   Input ~ 0
TXCAN
Text GLabel 7575 2375 2    50   Input ~ 0
RXCAN
Text GLabel 8450 2475 0    50   Input ~ 0
RXCAN
$Comp
L Interface_CAN_LIN:MCP2515-xSO U?
U 1 1 5FA88EE5
P 6975 2975
F 0 "U?" H 6975 3956 50  0000 C CNN
F 1 "MCP2515-xSO" H 6975 3865 50  0000 C CNN
F 2 "Package_SO:SOIC-18W_7.5x11.6mm_P1.27mm" H 6975 2075 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/21801e.pdf" H 7075 2175 50  0001 C CNN
	1    6975 2975
	1    0    0    -1  
$EndComp
$Comp
L Device:Crystal_Small Y?
U 1 1 5FA8B2A2
P 5750 3225
F 0 "Y?" V 5704 3313 50  0000 L CNN
F 1 "Crystal_Small" V 5795 3313 50  0000 L CNN
F 2 "" H 5750 3225 50  0001 C CNN
F 3 "~" H 5750 3225 50  0001 C CNN
	1    5750 3225
	0    1    1    0   
$EndComp
Wire Wire Line
	6375 3175 6350 3175
Wire Wire Line
	6350 3175 6350 3125
Wire Wire Line
	6350 3125 5750 3125
Wire Wire Line
	6375 3275 6350 3275
Wire Wire Line
	6350 3275 6350 3325
Wire Wire Line
	6350 3325 5750 3325
$Comp
L Device:C_Small C?
U 1 1 5FA8C3F7
P 5575 3125
F 0 "C?" V 5346 3125 50  0000 C CNN
F 1 "C_Small" V 5437 3125 50  0000 C CNN
F 2 "" H 5575 3125 50  0001 C CNN
F 3 "~" H 5575 3125 50  0001 C CNN
	1    5575 3125
	0    1    1    0   
$EndComp
$Comp
L Device:C_Small C?
U 1 1 5FA8C7CE
P 5575 3325
F 0 "C?" V 5346 3325 50  0000 C CNN
F 1 "C_Small" V 5437 3325 50  0000 C CNN
F 2 "" H 5575 3325 50  0001 C CNN
F 3 "~" H 5575 3325 50  0001 C CNN
	1    5575 3325
	0    1    1    0   
$EndComp
Wire Wire Line
	5675 3125 5750 3125
Connection ~ 5750 3125
Wire Wire Line
	5675 3325 5750 3325
Connection ~ 5750 3325
Wire Wire Line
	5475 3125 5375 3125
Wire Wire Line
	5375 3125 5375 3325
Wire Wire Line
	5375 3325 5475 3325
$Comp
L power:GND #PWR?
U 1 1 5FA8D299
P 5375 3325
F 0 "#PWR?" H 5375 3075 50  0001 C CNN
F 1 "GND" H 5380 3152 50  0000 C CNN
F 2 "" H 5375 3325 50  0001 C CNN
F 3 "" H 5375 3325 50  0001 C CNN
	1    5375 3325
	1    0    0    -1  
$EndComp
Connection ~ 5375 3325
Wire Wire Line
	6375 2375 4575 2375
Wire Wire Line
	4575 2375 4575 2525
Wire Wire Line
	6375 2475 4625 2475
Wire Wire Line
	4625 2475 4625 2625
Wire Wire Line
	6375 2675 4475 2675
Wire Wire Line
	4475 2675 4475 2725
Wire Wire Line
	4475 2725 4425 2725
Text GLabel 6375 2575 0    50   Input ~ 0
CS
Text GLabel 4425 2425 2    50   Input ~ 0
CS
Wire Wire Line
	4425 2625 4625 2625
Wire Wire Line
	4425 2525 4575 2525
$EndSCHEMATC