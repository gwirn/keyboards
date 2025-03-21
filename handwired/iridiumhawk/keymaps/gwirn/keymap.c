#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


const uint16_t PROGMEM combo1[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_V, KC_M, COMBO_END};

    combo_t key_combos[] = {
        COMBO(combo1, KC_BSPC),
        COMBO(combo2, KC_ESC),
    };

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P,
                     KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MT(MOD_HYPR, KC_SCLN),
                     KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, MT(MOD_LALT, KC_SLSH),
                     KC_LCTL, KC_LSFT,LT(3,KC_SPC), LT(2,KC_ENT), MO(1), KC_LGUI),
        [1] = LAYOUT(KC_NO, KC_NO, KC_LCBR, KC_RCBR, LCTL(LALT(KC_ENT)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_TILD, KC_AT, KC_LPRN, KC_RPRN, KC_EXLM, KC_ASTR, KC_AMPR, KC_EQL, KC_UNDS, KC_NO,
                     KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_PERC, KC_CIRC, KC_DLR, KC_NO, KC_NO, KC_NO),
        [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_PIPE, KC_HASH, KC_MINS, KC_PLUS, KC_BSLS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_GRV,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                     KC_NO, KC_NO, KC_TAB, KC_NO, KC_NO, KC_NO),
        [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,LGUI(KC_TAB), KC_7, KC_8, KC_9, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DQUO, KC_4, KC_5, KC_6, KC_QUOT,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_1, KC_2, KC_3, KC_NO,
                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


