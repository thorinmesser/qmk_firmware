#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x4(
        KC_1,       KC_2,       KC_3,               KC_4, 
        KC_A,       KC_S,       KC_D,               KC_F, 
        KC_LCBR,    KC_LPRN,    KC_RPRN,            KC_RCBR, 
        KC_BSPC,    KC_ENT,     LSFT_T(KC_SCOLON),  TO(1)
    ),
	[1] = LAYOUT_ortho_4x4(
        KC_LT,      KC_GT,      KC_PMNS,    KC_PPLS, 
        KC_COMM,   KC_PDOT,    KC_UNDS,    KC_PEQL, 
        KC_PSLS,    KC_UP,      KC_BSLS,  KC_QUES, 
        KC_LEFT,    KC_DOWN,    KC_RGHT,    TO(0)
    )
};
