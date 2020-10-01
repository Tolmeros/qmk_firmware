/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Define layer names
#define _NORMAL 0
//#define _FNONE 1
//#define _FNTWO 2

// Highly Modified by Xydane
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_NORMAL] = LAYOUT_seventy_ansi(
  KC_LCTL, KC_LALT, \
  KC_I, KC_LSPO, \
  KC_TAB, KC_Z )
};

/* Layer based ilumination, just binary */
layer_state_t layer_state_set_user(layer_state_t state) {
  /*
  switch (get_highest_layer(state)) {
  case _FNONE:
    palSetPad(GPIOA, 0);  //OFF Color A
    palClearPad(GPIOA, 1); //ON Color B
    break;
  case _FNTWO:
    palClearPad(GPIOA, 0); //ON Color A
    palClearPad(GPIOA, 1);  //ON Color B
    break;
  default: //  for any other layers, or the default layer
    palClearPad(GPIOA, 0); //ON Color A
    palSetPad(GPIOA, 1);  //OFF Color B
    break;
  }
  */
  return state;
}
