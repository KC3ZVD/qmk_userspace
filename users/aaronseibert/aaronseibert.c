#include "aaronseibert.h"
#include "layouts.h"
#include "print.h"


/* __attribute__ ((weak))
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSC_SYM:
        case HR_A:
        case HR_K:
            return 5;
        default:
            return TAPPING_TERM;
    }
}

__attribute__ ((weak))
bool get_speculative_hold(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) { // These keys may be speculatively held.
        case BSC_SYM:
        case HR_D:
        case HR_K:
            return true;
    }
    return false; // Disable otherwise.
} */
