/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define EE_HANDS

#define MASTER_RIGHT

#define SERIAL_USART_TX_PIN GP0
#define SERIAL_PIO_USE_PIO1

// #define RIGHT_HAND_SIDE

#ifdef RIGHT_HAND_SIDE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define PIMORONI_TRACKBALL_ENABLE // RIGHT HAND SIDE
#define PIMORONI_TRACKBALL_CLICK // RIGHT HAND SIDE
// orientation pimoroni text on top and trackball text at the bottom
#define PIMORONI_TRACKBALL_ROTATE
#else 
// #define OLED_DISPLAY_128X64
// #define SPLIT_OLED_ENABLE
#endif


//#define SPLIT_POINTING_ENABLE // The purpose of this feature is to enable use pointing devices on the slave side. 
// #define POINTING_DEVICE_RIGHT

#define ENCODER_RESOLUTION 1

#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_LAYERS
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    ifndef RGBLIGHT_LIMIT_VAL
#    	define RGBLIGHT_LIMIT_VAL 255
#    endif
#endif

