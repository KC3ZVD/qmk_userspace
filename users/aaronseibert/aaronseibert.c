#include "aaronseibert.h"
#include "layouts.h"
#include "print.h"

__attribute__ ((weak))
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSC_NUM:
        case DEL_SYM:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
