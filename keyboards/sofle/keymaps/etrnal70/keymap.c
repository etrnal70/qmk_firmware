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

enum sofle_layers {
    _PR, // Primary
    _SE, // Secondary
    _MI, // Misc
    _MS, // Mouse
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | MO(1)| LCTR | LAlt | /Enter  /       \Space \  | RAlt | MO(1)| RAlt | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */

[_PR] = LAYOUT(
  KC_GRV,               KC_1,    KC_2,    KC_3,     KC_4,  KC_5,                   KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_BSPC,
  KC_TAB,               KC_Q,    KC_W,    KC_E,     KC_R,  KC_T,                   KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_BSPC,
  MT(MOD_LCTL, KC_ESC), KC_A,    KC_S,    KC_D,     KC_F,  KC_G,                   KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,              KC_Z,    KC_X,    KC_C,     KC_V,  KC_B, TO(2),     TO(1), KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LCTL, MO(_SE), KC_LCTL,  KC_LALT, KC_ENT,               KC_SPC,  KC_RALT,   KC_RCTL,  MO(_SE), KC_RCTL
),
/* RAISE
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
    KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
  _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,     _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
                    _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
),
/* LOWER
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |      | Pscr | Slck |Pause |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | Ins  | Home | PgUp |      |      |                    |      |      |      |       |     |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Del  | End  | PgDn |      |      |-------.    ,-------| Left | Down | Up   | Right |     |      |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      |      |      |       |     |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_MI] = LAYOUT(
  _______, KC_PSCR, KC_SCRL, KC_PAUSE, _______,  _______,                       _______, _______, _______, _______,  _______, _______,
  _______, KC_INS,  KC_HOME, KC_PGUP,  XXXXXXX,  XXXXXXX,                       _______, _______, _______, _______,  _______, _______,
  _______, KC_DEL,  KC_END,  KC_PGDN,  XXXXXXX,  XXXXXXX,                       KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX, XXXXXXX,
  _______, KC_UNDO, KC_CUT,  KC_COPY,  KC_PASTE, XXXXXXX, _______,     _______, XXXXXXX, _______, XXXXXXX, _______,  XXXXXXX, _______,
                      _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
),
/* LOWER
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |       |     |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Del  | End  | PgDn |      |      |-------.    ,-------|MLeft |MDown |  MUp |MRight |     |      |
 * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |       |     |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_MS] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                          _______,    _______,  _______,     _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                          _______,    _______,  _______,     _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                          KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______   , _______, _______, _______, _______,  _______, _______,
                    _______, _______, _______, _______, KC_MS_BTN1,  KC_MS_BTN2, _______, _______, _______, _______
),
};

// Combo
enum combos {
  DOUBLE_SHIFT,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM double_shift[] = {KC_LSFT, KC_RSFT, COMBO_END};

combo_t key_combos[] = {
    [DOUBLE_SHIFT] = COMBO(double_shift, KC_CAPS),
};
