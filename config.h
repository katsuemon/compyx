// Copyright 2024 emon (@katsuemon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define OLED_FONT_H  "lib/glcdfont.c"

#define MATRIX_ROWS 6
#define MATRIX_COLS 8*2

#define WS2812_DI_PIN D3
#define RGBLIGHT_LED_COUNT 8
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_LIMIT_VAL 64


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
