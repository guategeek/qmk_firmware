// Copyright 2022 Ethan (@rocketstrong)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U


// Split Keyboard Setup, I am using a pull-up/pull-down resistor on pin GP8 to tell what hand is which.
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

//#define EE_HANDS 
