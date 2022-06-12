/* Copyright 2020 tominabox1
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

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_planck_mit(KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_RSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_UP, KC_DOT, KC_LCTL, KC_APP, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_ENT, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT),
        [1] = LAYOUT_planck_mit(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_CAPS, KC_F1, KC_F3, KC_F5, KC_F7, KC_F9, KC_F11, KC_F24, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_LSFT, KC_F2, KC_F4, KC_F6, KC_F8, KC_F10, KC_F12, KC_MHEN, KC_HENK, KC_KANA, KC_PGUP, KC_INS, KC_LCTL, TO(2), KC_LGUI, KC_LALT, KC_TRNS, KC_PSCR, KC_ENT, KC_BSLS, KC_HOME, KC_PGDN, KC_END),
        [2] = LAYOUT_planck_mit(RESET, DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(5), TO(3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD),
        [3] = LAYOUT_planck_mit(KC_NO, KC_NO, KC_NO, KC_NO, KC_F2, KC_F5, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_A, KC_S, KC_NO, KC_NO, KC_ESC, KC_F12, KC_NO, KC_NO, KC_L, KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_NO, KC_S, KC_X, KC_NO, MO(4), KC_NO, KC_COMM, KC_L, KC_NO, KC_QUOT),
        [4] = LAYOUT_planck_mit(TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
        [5] = LAYOUT_planck_mit(TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_NO, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NO, KC_NO, KC_1, KC_C, KC_V, KC_N, KC_M, KC_1, KC_NO, KC_NO, KC_NO)
};