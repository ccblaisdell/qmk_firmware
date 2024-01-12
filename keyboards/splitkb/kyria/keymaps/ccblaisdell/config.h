/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_HUE_STEP  8
#    define RGBLIGHT_SAT_STEP  8
#    define RGBLIGHT_VAL_STEP  8
#    define RGBLIGHT_LIMIT_VAL 150
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK


// Just turning this off to try and save space
// #define NO_ACTION_ONESHOT

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

// Alter the default mod tap behavior:
#define TAPPING_TERM 150

/* Time (in ms) before the one shot key is released */
#define ONESHOT_TIMEOUT 5000 

// Do the hold behavior if any other key is pressed, even if before tapping term.
// Causes the mod to fire way more often.
#define HOLD_ON_OTHER_KEY_PRESS

#define MOUSEKEY_WHEEL_DELAY       100
#define MOUSEKEY_WHEEL_INTERVAL    100
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
