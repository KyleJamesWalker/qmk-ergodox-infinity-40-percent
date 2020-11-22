#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM
};

/* ------------ Generated block Start ------------ */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MPLY, KC_BSLS, KC_Q, KC_W, KC_E, KC_R, KC_T, TO(4), KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TO(5), KC_LGUI, KC_GRV, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END, TO(1), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_EQL, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_LGUI, KC_RALT, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC),
	[1] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_HOME, LT(3,KC_BSPC), LGUI_T(KC_DEL), KC_END, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_PGUP, KC_PGDN, KC_SFTENT, LT(2,KC_SPC)),
	[2] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_TILD, KC_BSLS, KC_LT, KC_GT, KC_COLN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_QUOT, KC_DQUO, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),
	[3] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_TAB), KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_PSLS, KC_PAST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_TOGG, BL_ON, BL_INC, KC_NO, KC_NO, KC_NO, TO(0), BL_STEP, BL_OFF, BL_DEC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC),
	[5] = LAYOUT_ergodox(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC)
};
/* ------------ Generated block END ------------ */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
