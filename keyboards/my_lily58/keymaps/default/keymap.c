/*
Copyright 2021 Shiftux <shiftux@gmail.com>

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

enum layers {
    _QWERTY, // standard layer
    _RAISE,   // symbols layer
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   /* QWERTY
   * ,-----------------------------------------.                    ,-----------------------------------------.
   * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  \   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |  =   |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
   * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
   * `-----------------------------------------/       /     \      \-----------------------------------------'
   *                   | ESC  | LGUI |LCtrl | /Space  /       \Enter \  |RAISE |BackSP| RAlt |
   *                   |      |      |      |/       /         \      \ |      |      |      |
   *                   `----------------------------'           '------''--------------------'
   */

   [_QWERTY] = LAYOUT(
   KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
   KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
   KC_EQL,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G, KC_LBRC,   KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                           KC_ESC, KC_LGUI, KC_LCTRL, KC_SPC,        KC_ENT, MO(_RAISE), KC_BSPC, KC_RALT
   ),

   /* RAISE
   * ,-----------------------------------------.                    ,-----------------------------------------.
   * |  F1  |  F2  |  F3  |  F4  |   F5 |  F6  |                    |   F7 |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |RCtrl |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * | LAlt | Home | End  |  Ins |  Del | Caps |-------.    ,-------| PgUp | Left | Down |  Up  |Right | PgDn |
   * |------+------+------+------+------+------|   (   |    |    )  |------+------+------+------+------+------|
   * | Mute |  Sp- |  Sp+ | Bri- | Bri+ |  *   |-------|    |-------|   {  |   }  |   =  |   +  |   -  |   |  |
   * `-----------------------------------------/       /     \      \-----------------------------------------'
   *                   | ESC  | LGUI |LCtrl | /Space  /       \Enter \  |RAISE |BackSP| RAlt |
   *                   |      |      |      |/       /         \      \ |      |      |      |
   *                   `----------------------------'           '------''--------------------'
   */

   [_RAISE] = LAYOUT(
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_RCTRL,
   KC_LALT, KC_HOME, KC_END,  KC_INS,  KC_DEL,  KC_CAPS, KC_LPRN, KC_RPRN, KC_PGUP, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN,
   KC_MUTE, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_ASTR,                   KC_LCBR, KC_RCBR, KC_EQL,  KC_PLUS, KC_MINS, KC_PIPE,
                              _______, _______, _______,  _______, _______,  _______, _______, _______
   )

};
