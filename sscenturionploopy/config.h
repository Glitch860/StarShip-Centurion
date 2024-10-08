/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
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

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 6
#    define COMBO_TERM 200
#endif

/* RGB LED */
//#define WS2812_PIO_USE_PIO1
#define WS2812_DI_PIN GP29

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LED_COUNT 20
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

    // #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_EFFECT_ALTERNATING
#endif

// #define ROTATIONAL_TRANSFORM_ANGLE 0
//#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_INVERT_Y
//#define POINTING_DEVICE_ROTATION_180

/* PMW3360 Settings */
#define PMW33XX_LIFTOFF_DISTANCE 0x00
#define PMW33XX_CS_PIN GP17
#define SPI_SCK_PIN GP18
#define SPI_MISO_PIN GP16
#define SPI_MOSI_PIN GP19
