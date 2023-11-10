#include QMK_KEYBOARD_H
#include "tap_dance.h"

tap_dance_action_t tap_dance_actions[] = { [TD_ONE]  = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_EXLM) };
