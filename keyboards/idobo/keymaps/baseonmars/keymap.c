/* Copyright 2021 IFo Hancroft
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default Layer
    * ---------------------------------------------------------------------------------------------------------------------------------------
    * | `     || 1     || 2     || 3     || 4     || 5     || 6     || 7     || 8     || 9     || 0     || -     || =     || Bkspc || Del   |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * | Tab   || Q     || W     || E     || R     || T     || Y     || U     || I     || O     || P     || [     || ]     || \     || Home  |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * | ESC   || A     || S     || D     || F     || G     || H     || J     || K     || L     || ;     || "     || Enter || Enter || PgUp  |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * | Shift || Z     || X     || C     || V     || B     || N     || M     || ,     || .     || /     || Shift || Shift || Up    || PgDn  |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * | Ctrl  || Super || Alt   || MO(1) || Bkspc || Space || Space || Bkspc || MO(1) || Alt   || Super || Ctrl  || Left  || Down  || Right |
    * ---------------------------------------------------------------------------------------------------------------------------------------
    */
    LAYOUT_ortho_5x15(
        KC_ESCAPE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRAVE, KC_BSPACE,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_NONUS_BSLASH, KC_HOME,
        KC_CAPSLOCK,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_DELETE,  KC_PGUP,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_ENTER, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1),   MO(1), KC_SPC,  KC_SPC,  KC_SPACE, MO(1),   KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Function Layer
    * ---------------------------------------------------------------------------------------------------------------------------------------
    * |       || F1    || F2    || F3    || F4    || F5    || F6    || F7    || F8    || F9    || F10   || F11   || F12   ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||RGB MOD||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |RGB TOG||RGB HUI||RGB SAI||RGB VAI||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * ---------------------------------------------------------------------------------------------------------------------------------------
    */
    LAYOUT_ortho_5x15(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        RESET, _______, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Empty Layer
    * ---------------------------------------------------------------------------------------------------------------------------------------
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * ---------------------------------------------------------------------------------------------------------------------------------------
    */
    LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /* Empty Layer
    * ---------------------------------------------------------------------------------------------------------------------------------------
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * |-------------------------------------------------------------------------------------------------------------------------------------|
    * |       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       ||       |
    * ---------------------------------------------------------------------------------------------------------------------------------------
    */
    LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
