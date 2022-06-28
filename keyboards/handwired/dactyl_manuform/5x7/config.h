/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID 0x3537
#define DEVICE_VER 0x0001
#define PRODUCT    Dactyl-Manuform (5x7)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { D0, D4, C6, D7, E6, B4 /* , B5*/ }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2 /*, B6 */ }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs

#define RGB_DI_PIN F4
#define RGBLED_NUM 34 /* That's for one side */

// #define RGB_DI_PIN D3
// ##define RGBLED_NUM 12

#define RGBLIGHT_SPLIT
#define RGBLIGHT_LAYERS
#define RGBLIGHT_SLEEP
//#define RGBLIGHT_DEFAULT_VAL 0 does nothing

// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md#switching-and-toggling-layers-idswitching-and-toggling-layers
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 175

#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_KNIGHT
