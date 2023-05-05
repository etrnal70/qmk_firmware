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

#include "process_combo.h"
#include "quantum.h"
#include QMK_KEYBOARD_H
#include <const.h>

#include "libs/custom_shift_keys.h"

// Combo
enum combos { DOUBLE_SHIFT, MINUS_ONLY, COMBO_LENGTH };
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM double_shift[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM minus_only[]   = {KC_LSFT, KC_MINS, COMBO_END};

combo_t key_combos[] = {
    [DOUBLE_SHIFT] = COMBO(double_shift, KC_CAPS),
    [MINUS_ONLY]   = COMBO(minus_only, KC_MINS),
};

// Shift
const custom_shift_key_t custom_shift_keys[] = {
    {KC_MINS, KC_MINS} // No effect on minus
};
uint8_t NUM_CUSTOM_SHIFT_KEYS = sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_custom_shift_keys(keycode, record)) {
        return false;
    }

    return true;
}
