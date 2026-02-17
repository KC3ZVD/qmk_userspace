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
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _NAV,
    _MOUSE,
    _SYM,
    _FUNCTION,
};




// Aliases for readability
#define QWERTY   DF(_QWERTY)
#define COLEMAK  DF(_COLEMAK_DH)
#define DVORAK   DF(_DVORAK)

#define SYM      MO(_SYM)
#define NAV      MO(_NAV)
#define FKEYS    MO(_FUNCTION)
#define ADJUST   MO(_ADJUST)
#define HYPER    MO(_HYPER)

#define CTL_ESC  MT(MOD_LCTL, KC_ESC)
#define CTL_QUOT MT(MOD_RCTL, KC_QUOTE)
#define CTL_MINS MT(MOD_RCTL, KC_MINUS)
#define ALT_ENT  MT(MOD_LALT, KC_ENT)

#define RAISE    MO(_RAISE)
#define LOWER    MO(_LOWER)

// Left Hand Modifiers
#define CTL_A MT(MOD_LCTL, KC_A)
#define ALT_S MT(MOD_LALT, KC_S)
#define CMD_D MT(MOD_LGUI, KC_D)


#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right Hand Modifiers
#define CMD_K MT(MOD_RGUI, KC_K)
#define ALT_L MT(MOD_RALT, KC_L)
#define CTL_SCLN MT(MOD_RCTL, KC_SCLN)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

// Other Aliases

// Hold for symbol layer, tap for backspace
#define BSPC_SYM LT(_SYM, KC_BSPC)

// Hold for navigation/mouse layer, tap for space
#define SPC_NAV LT(_NAV, KC_SPC)
#define GRV_CMD MT(MOD_LGUI, KC_GRV)
#define TAB_CMD MT(MOD_LGUI, KC_TAB)
// Hold for symbol layer, tap for enter
#define ENT_NUM LT(_SYM, KC_ENT)
#define ENT_FUN LT(_FUNCTION, KC_ENT)

// Hold for number layer, tap for delete
#define DEL_SYM LT(_SYM, KC_DEL)

// Purely for visuals...
#define TDESC TD(TD_ESC_CAPS)

// Tap Dance Definitions
enum {
    TD_ESC_CAPS
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
};

// Combos
enum combos {
    JK_SPACE,
    QW_TAB,
    DF_ESC
};

const uint16_t PROGMEM jk_combo[] = {HOME_J, HOME_K, COMBO_END};
const uint16_t PROGMEM as_combo[] = {HOME_A, HOME_S, COMBO_END};
const uint16_t PROGMEM df_combo[] = {HOME_D, HOME_F, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[] = {
    [JK_SPACE] = COMBO(jk_combo, KC_SPC),
    [QW_TAB] = COMBO(qw_combo, KC_TAB),
    [DF_ESC] = COMBO(df_combo, KC_ESC)
};


// Note: LAlt/Enter (ALT_ENT) is not the same thing as the keyboard shortcut Alt+Enter.
// The notation `mod/tap` denotes a key that activates the modifier `mod` when held down, and
// produces the key `tap` when tapped (i.e. pressed and released).

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*
 * Base Layer: QWERTY
 */
    [_QWERTY] = LAYOUT(
     _______, KC_Q   ,  KC_W   , KC_E   ,   KC_R ,   KC_T  ,      KC_Y  ,  KC_U  ,  KC_I  ,   KC_O ,   KC_P , _______ ,
     _______, HOME_A ,  HOME_S , HOME_D ,   HOME_F ,   KC_G  ,                                         KC_H  ,  HOME_J  , HOME_K , HOME_L , HOME_SCLN , KC_QUOT,
     _______, KC_Z   ,  KC_X   , KC_C   ,   KC_V ,   KC_B  , KC_LBRC , _______,     _______, KC_RBRC , KC_N,  KC_M  , KC_COMM, KC_DOT , KC_SLSH, _______ ,
                  _______,  GRV_CMD, BSPC_SYM, SPC_NAV,  ENT_FUN, ENT_NUM,  DEL_SYM,SPC_NAV, TAB_CMD, _______
    ),

/*
 * Nav Layer: Media, navigation
*/
    [_NAV] = LAYOUT(
      _______, _______, _______, _______, MS_WHLU, _______,                                     KC_PGUP, KC_HOME, KC_PGDN, KC_END , KC_VOLU, KC_DEL,
      _______, _______, MS_BTN3, MS_BTN2, MS_BTN1, _______,                                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_VOLD, KC_INS,
      _______, _______, _______, _______, MS_WHLD, _______, _______, KC_SCRL, _______, _______,KC_PAUSE, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_PSCR,
                                 _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______
    ),

/*
 * Sym Layer: Numbers and symbols
*/
    [_SYM] = LAYOUT(
      KC_GRV ,   KC_1 ,   KC_2 ,   KC_3 ,   KC_4 ,   KC_5 ,                                       KC_6 ,   KC_7 ,   KC_8 ,   KC_9 ,   KC_0 , KC_EQL ,
     KC_TILD , KC_EXLM,  KC_AT , KC_HASH,  KC_DLR, KC_PERC,                                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
     KC_PIPE , KC_BSLS, KC_COLN, KC_SCLN, KC_MINS, KC_LBRC, KC_LCBR, _______, _______, KC_RCBR, KC_RBRC, KC_UNDS, KC_COMM,  KC_DOT, KC_SLSH, KC_QUES,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

/*
 * Function Layer: Number and function keys
 */
    [_FUNCTION] = LAYOUT(
      _______,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,                                     KC_PLUS, KC_7, KC_8, KC_9, KC_BSPC, _______,
      _______,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10,                                     KC_MINUS, KC_4, KC_5, KC_6, KC_ASTR, _______,
      _______,  KC_F11 , KC_F12 , _______, _______, _______, _______, _______, _______, _______, KC_SLASH, KC_1, KC_2, KC_3, KC_ENT, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

// /*
//  * Layer template
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};


#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}
#endif
