/* Copyright 2019 daihuku
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
#define _QWERTY 0
#define _LOWER 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT( \
      KC_TAB,  KC_V,     KC_C,  KC_Z,   KC_X,  \
      KC_Q,    KC_W,     KC_E,  KC_F,   KC_NO, \
      KC_A,    KC_S,     KC_D,  KC_R,   KC_NO, \
      KC_M,    KC_SPC,   MO(1) \
  ),

[1] = LAYOUT( \
      KC_1,    KC_2,  	KC_3,   KC_4,   KC_5,  \
      KC_NO,   KC_ESC,  KC_NO,  KC_LCTL,KC_NO, \
      KC_6,    KC_NO,   KC_B,   KC_NO,  KC_NO, \
      KC_NO,   KC_NO,   KC_NO   \
  ),
};
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        // when keycode QWERTY is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QWERTY is released
      }
      break;
    case LOWER:
      if (record->event.pressed) {
        // when keycode LOWER is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode LOWER is released
      }
      break;
  }
  return true;
}
*/
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
