#include "../../tap_dance.h"
#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LT(1,KC_ESC), LT(2,KC_SPC), LT(3,KC_TAB), LT(3,KC_TILD), LT(2,KC_BSPC), LT(1,KC_ENT)),
	[1] = LAYOUT_split_3x5_3(TD(TD_ONE), KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, LCTL_T(KC_EXLM), LALT_T(KC_AT), LCTL_T(KC_HASH), LSFT_T(KC_DLR), KC_PERC, KC_CIRC, RSFT(KC_AMPR), RCTL(KC_ASTR), RALT(KC_LPRN), RGUI(KC_RPRN), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_F11, KC_ESC, KC_ESC, KC_F11, KC_F12),
	[2] = LAYOUT_split_3x5_3(KC_ESC, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_HOME, KC_END, KC_PGDN, KC_PGUP, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_COLN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DQUO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_DEL, KC_MINS, KC_UNDS, KC_PIPE, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_split_3x5_3(KC_NO, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_GRV, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_COLN, KC_LCBR, KC_RCBR, KC_BSLS, KC_PPLS, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_PMNS, KC_UNDS, KC_SCLN, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





