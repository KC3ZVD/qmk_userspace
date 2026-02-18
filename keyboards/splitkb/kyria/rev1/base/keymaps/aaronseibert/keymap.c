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

