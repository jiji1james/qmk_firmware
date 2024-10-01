/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation,     either version 2 of the License,     or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not,     see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

enum layers {
    _WIN,
    _MAC,
    _FIRST,
    _SECOND,
    _THIRD
};

// Define custom keycode
#define SP_CTL CTL_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_WIN] = LAYOUT_preonic_grid(
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_TAB,      KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,                         KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,        KC_BSPC,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_ESC,      KC_A,        KC_S,        KC_D,        KC_F,        KC_G,                         KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,     KC_QUOT,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_LSFT,     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,                         KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,     KC_ENT,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     KC_RALT,     MO(_FIRST),  SP_CTL,                       KC_SPC,      MO(_SECOND), KC_LGUI,     XXXXXXX,     XXXXXXX,     XXXXXXX
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
  ),

    [_MAC] = LAYOUT_preonic_grid(
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_TAB,      KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,                         KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,        KC_BSPC,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_ESC,      KC_A,        KC_S,        KC_D,        KC_F,        KC_G,                         KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,     KC_QUOT,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_LSFT,     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,                         KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,     KC_ENT,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     KC_RALT,     MO(_FIRST),  SP_CTL,                       KC_SPC,      MO(_SECOND), KC_LCTL,     XXXXXXX,     XXXXXXX,     XXXXXXX
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
  ),


    [_FIRST] = LAYOUT_preonic_grid(
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_TAB,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,                         KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_BSPC,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_ESC,      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      KC_LEFT,     KC_DOWN,     KC_UP,       KC_RIGHT,    XXXXXXX,     XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_LSFT,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END,      XXXXXXX,     XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     _______,     _______,     _______,                      _______,     MO(_THIRD),  _______,     XXXXXXX,     XXXXXXX,     XXXXXXX
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
  ),

    [_SECOND] = LAYOUT_preonic_grid(
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_TAB,      KC_EXLM,     KC_AT,       KC_HASH,     KC_DLR,      KC_PERC,                      KC_CIRC,     KC_AMPR,     KC_ASTR,     KC_LPRN,     KC_RPRN,     KC_BSPC,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_ESC,      KC_LEFT,     KC_DOWN,     KC_UP,       KC_RIGHT,    XXXXXXX,                      KC_MINS,     KC_EQL,      KC_LBRC,     KC_RBRC,     KC_BSLS,     KC_GRV,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      KC_LSFT,     KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END,      XXXXXXX,                      KC_UNDS,     KC_PLUS,     KC_LCBR,     KC_RCBR,     KC_PIPE,     KC_TILD,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     _______,     MO(_THIRD),  _______,                      _______,      _______,     _______,     XXXXXXX,     XXXXXXX,     XXXXXXX
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
  ),

    [_THIRD] = LAYOUT_preonic_grid(
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,   XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,                       KC_F6,        KC_F7,       KC_F8,       KC_F9,       KC_F10,      XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      QK_BOOT,     CG_NORM,     CG_SWAP,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     KC_F11,      KC_F12,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,                      XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
      XXXXXXX,     XXXXXXX,     XXXXXXX,     _______,     _______,     _______,                      _______,     _______,     _______,     XXXXXXX,     XXXXXXX,     XXXXXXX
  //|------------+------------+------------+------------+------------+--------|                    |------------+------------+------------+------------+------------+--------|
  )
};
