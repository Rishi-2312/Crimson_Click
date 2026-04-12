#include QMK_KEYBOARD_H

// The LAYOUT matches the 1x7 direct pin matrix defined in your info.json
// Order: [Encoder_SW, SW1, SW3, SW5, SW2, SW4, SW6]
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MUTE,  // Encoder Press (SW7)
        KC_CUT,     // SW1
        KC_COPY,     // SW3
        KC_PSTE,     // SW5
        KC_PSCR,     // SW2
        KC_WSCH,     // SW4
        KC_UNDO      // SW6
    )
};

// Modern Encoder Map - cleaner than encoder_update_user
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif