#include "aaronseibert.h"
#include "layouts.h"
#define COMBOS_HOOK
#include "combos.def"


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSC_SYM:
            return 30;
        default:
            return TAPPING_TERM;
    }
}
