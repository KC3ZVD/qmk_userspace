#pragma once
// layer indices
#define QWE 0
#define MSE 1
#define SYM 2
#define NUM 3
#define FUN 4
#define NAV 5

// Home row mods
#define HR_A LCTL_T(KC_A)
#define HR_S LALT_T(KC_S)
#define HR_D LSFT_T(KC_D)
#define HR_F LGUI_T(KC_F)
#define HR_J RGUI_T(KC_J)
#define HR_K RSFT_T(KC_K)
#define HR_L RALT_T(KC_L)
#define HR_SCLN RCTL_T(KC_SCLN)

// Mod-tap and layer-tap keys
#define GUI_TAB MT(MOD_LGUI, KC_TAB)
#define SPC_MSE LT(MSE, KC_SPC)
#define ENT_SYM LT(SYM, KC_ENT)
#define BSC_SYM LT(SYM, KC_BSPC)
#define DEL_NUM LT(NUM, KC_DEL)
#define ENT_FUN LT(FUN, KC_ENT)

// Tap Dance keys
// #define TD_TAB TD(TAP_LSFT)

#define LAYOUT_kyria_wrapper(...)   LAYOUT_split_3x6_5(__VA_ARGS__)

#define _QWE \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
    _______, _______, _______, GUI_TAB, CTL_ESC, NAV_SPC, SYM_BSP, SFT_ENT, ALT_DEL, _______, _______, _______

#define _SYM \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,  KC_GRV, KC_QUOT, KC_DQT,  KC_DLR, KC_EXLM, KC_PLUS, KC_QUES, KC_LCBR, KC_RCBR, KC_ASTR, XXXXXXX,  \
    XXXXXXX, KC_PIPE, KC_PERC, KC_LABK,  KC_EQL, KC_RABK, KC_MINS,   KC_AT, KC_LPRN, KC_RPRN, KC_COLN, XXXXXXX, \
    XXXXXXX, KC_TILD, KC_HASH, KC_CIRC, KC_AMPR, KC_BSLS, KC_UNDS, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _NUM \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,  \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_1,    KC_2,    KC_3, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _NAV \
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, \
    XXXXXXX, ALT_F4,  TAB_LT,  TAB_RT,  CTL_F4,  KC_VOLU, KC_INS,  KC_PGDN, KC_UP,   KC_PGUP, KC_CALC, _______, \
    XXXXXXX, KC_LCTL, KC_LGUI, KC_LALT, SFT_TAB, KC_VOLD, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, SFT_INS, KC_MPLY, XXXXXXX, KC_DEL,  KC_MPRV, KC_MNXT, XXXXXXX, _______, \
    XXXXXXX, _______, _______, _______, _______, _______, _______, KC_LSFT, _______, _______, _______, _______

#define _FUN \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______,   OS_ON,  OS_OFF, XXXXXXX, \
    QK_MAKE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    QK_BOOT, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, _______, _______, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11,  KC_F12,  XXXXXXX, KC_CAPS, KC_PSCR, KC_PAUS, XXXXXXX, _______, \
    XXXXXXX, _______, _______,  QK_RBT, QK_BOOT, _______, _______, QK_BOOT, QK_RBT,  _______, _______, _______

#define _MSE \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MS_WHLU, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, MS_BTN3, MS_BTN2, MS_BTN1, XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MS_WHLD, XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define C_KYRIA(k) L_5x12_TO_3x6_5(k)
#define L_5x12_TO_3x6_5( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b  \
) \
        k10, k11, k12, k13, k14, k15,                                     k16, k17, k18, k19, k1a, XXXXXXX, \
    XXXXXXX, k21, k22, k23, k24, k25,                                     k26, k27, k28, k29, k2a, XXXXXXX, \
    XXXXXXX, k31, k32, k33, k34, k35, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, k36, k37, k38, k39, k3a, XXXXXXX, \
              XXXXXXX, GUI_TAB, BSC_SYM, SPC_MSE, OS_LSFT, ENT_FUN, DEL_NUM, KC_SPC, GUI_TAB, XXXXXXX




