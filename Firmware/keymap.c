// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐
     * │ c │ p │
     * ├───┼───┤
     * │ n │ c │
     * ├───┼───┤
     * │ u │ r │
     * └───┴───┘
     */
    [0] = LAYOUT(
        LCTL(KC_C),   LCTL(KC_V),
        LCTL(KC_T),   LCTL(KC_W),
        LCTL(KC_Z),   LCTL(KC_Y)
    )
};
