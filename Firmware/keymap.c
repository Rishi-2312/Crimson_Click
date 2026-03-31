// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                 KC_CUT,    KC_COPY,    KC_PSTE,
        KC_PWR,  KC_UNDO,    KC_PSCR,    KC_WSCH
    )
};
