#include QMK_KEYBOARD_H






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_2,   KC_P3,   KC_PMNS,
        LT(1,KC_P0),   KC_PDOT, KC_PENT, KC_PPLS

    ),
    [1] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

const uint16_t PROGMEM combo1[] = {KC_PDOT, KC_PPLS, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_P9, KC_PSLS, COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_P6, KC_PAST, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo1, KC_BSPC),
    COMBO(combo2, LSFT(KC_9)),
    COMBO(combo3, LSFT(KC_0)),
};
