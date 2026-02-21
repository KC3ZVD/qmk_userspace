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
