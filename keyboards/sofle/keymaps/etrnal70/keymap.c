/* Copyright 2023 Mochammad Hanif R <etrnal70>
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
#include <const.h>

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * PRIMARY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | MO(1)|  _   | LAlt | /Enter  /       \Space \  | RAlt |   -  | MO(1)| RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */

[_PR] = LAYOUT(
  KC_GRV,        KC_1,  KC_2,    KC_3,    KC_4,          KC_5,                           KC_6,    KC_7,       KC_8,    KC_9,    KC_0,  KC_EQL,
  KC_TAB,        KC_Q,  KC_W,    KC_E,    KC_R,          KC_T,                           KC_Y,    KC_U,       KC_I,    KC_O,    KC_P, KC_BSLS,
  CTL_T(KC_ESC), KC_A,  KC_S,    KC_D,    KC_F,          KC_G,                           KC_H,    KC_J,       KC_K,    KC_L, KC_SCLN, KC_QUOT,
  KC_LSFT,       KC_Z,  KC_X,    KC_C,    KC_V,          KC_B,    TO(2),      TO(1),     KC_N,    KC_M,    KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                        KC_LCTL, MO(_SE), KC_UNDERSCORE, KC_LALT, KC_ENT,    KC_SPC,  KC_RALT, KC_MINS,    MO(_SE),  KC_RCTL
),
/* SECONDARY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  |  F10 | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |LShift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_SE] = LAYOUT(
    KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_PERC,                       KC_LBRC, KC_RBRC, KC_LCBR,  KC_RCBR,    KC_0, _______,
  _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,                        KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, KC_RPRN, KC_PIPE,
  _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,     _______, KC_LBRC, KC_RBRC, KC_SCLN,  KC_COLN, KC_BSLS, _______,
                    _______, _______, _______, _______, _______,     KC_BSPC, _______, _______, _______, _______
),
/* MISC
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |      | Pscr | Slck |Pause |      |      |                    |      |      |   7  |   8  |   9  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | Ins  | Home | PgUp |      |      |                    |      |      |   4  |   5  |   6  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Del  | End  | PgDn |      |      |-------.    ,-------|      |      |   1  |   2   |  3  |      |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      |      |  0   |       |     |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_MI] = LAYOUT(
  _______, KC_PSCR, KC_SCRL, KC_PAUSE, _______,  _______,                       _______, _______, KC_P7, KC_P8,  KC_P9, _______,
  _______, KC_INS,  KC_HOME, KC_PGUP,  XXXXXXX,  XXXXXXX,                       _______, _______, KC_P4, KC_P5,  KC_P6, _______,
  _______, KC_DEL,  KC_END,  KC_PGDN,  XXXXXXX,  XXXXXXX,                       _______, _______, KC_P1, KC_P2,  KC_P3, XXXXXXX,
  _______, KC_UNDO, KC_CUT,  KC_COPY,  KC_PASTE, XXXXXXX, _______,     _______, XXXXXXX, _______, KC_P0, _______,  XXXXXXX, _______,
                      _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
),
/*
 * GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | MO(1)|  _   | LAlt | /Space  /       \Space \  | RAlt |   -  | MO(1)| RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */

[_GM] = LAYOUT(
  KC_GRV,        KC_1,  KC_2,    KC_3,    KC_4,          KC_5,                           KC_6,    KC_7,       KC_8,    KC_9,    KC_0,  KC_EQL,
  KC_TAB,        KC_Q,  KC_W,    KC_E,    KC_R,          KC_T,                           KC_Y,    KC_U,       KC_I,    KC_O,    KC_P, KC_BSLS,
  CTL_T(KC_ESC), KC_A,  KC_S,    KC_D,    KC_F,          KC_G,                           KC_H,    KC_J,       KC_K,    KC_L, KC_SCLN, KC_QUOT,
  KC_LSFT,       KC_Z,  KC_X,    KC_C,    KC_V,          KC_B,    TO(2),      TO(1),     KC_N,    KC_M,    KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                        KC_LCTL, MO(_SE), KC_UNDERSCORE, KC_LALT, KC_SPC,    KC_SPC,  KC_RALT, KC_MINS,    MO(_SE),  KC_RCTL
)};
