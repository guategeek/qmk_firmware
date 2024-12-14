// Copyright 2022 Ethan (@rocketstrong)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

// LED Lighting
//#define WS2812_DI_PIN GP4
//#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGBLIGHT_VAL_STEP 50


// Split Keyboard Setup, you need to flash each side so it knows what hand it is
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define EE_HANDS 
