#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_kyria_wrapper(C_KYRIA(_QWE)),
    [1] = LAYOUT_kyria_wrapper(C_KYRIA(_MSE)),
    [2] = LAYOUT_kyria_wrapper(C_KYRIA(_SYM)),
    [3] = LAYOUT_kyria_wrapper(C_KYRIA(_NUM)),
    [4] = LAYOUT_kyria_wrapper(C_KYRIA(_FUN))
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSC_SYM:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

// one shot/modifier combos
const uint16_t PROGMEM c_dk[] = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM c_fj[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM c_sl[] = {KC_S, KC_L, COMBO_END};
const uint16_t PROGMEM c_ascln[] = {KC_A, KC_SCLN, COMBO_END};

// instant combos
const uint16_t PROGMEM c_df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM c_as[] = {KC_A, KC_S, COMBO_END};

combo_t key_combos[] = {
    COMBO(c_dk, OS_LSFT),
    COMBO(c_fj, OS_LGUI),
    COMBO(c_sl, OS_LALT),
    COMBO(c_ascln, OS_LCTL),
    COMBO(c_df, KC_ESC),
    COMBO(c_as, KC_TAB),
};


// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case HR_D:
//         case HR_K:
//             // Immediately select the hold action when another key is tapped.
//             return true;
//         default:
//             // Do not select the hold action when another key is tapped.
//             return false;
//     }
// }

/* bool is_flow_tap_key(uint16_t keycode) {
    if ((get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) != 0) {
        return false; // Disable Flow Tap on hotkeys.
    }
    switch (get_tap_keycode(keycode)) {
        case HR_A:
        case HR_S:
        case HR_D:
        case HR_F:
        case HR_J:
        case HR_K:
        case HR_L:
        case HR_SCLN:
            return true;
    }
    return false;
} */

/* uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record,
                           uint16_t prev_keycode) {
    if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
        switch (keycode) {
            case LCTL_T(KC_F):
            case RCTL_T(KC_H):
              return FLOW_TAP_TERM - 25;  // Short timeout on these keys.

            default:
              return FLOW_TAP_TERM;  // Longer timeout otherwise.
        }
    }
    return 0;  // Disable Flow Tap.
} */
