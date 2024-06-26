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

#pragma once

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 80

#undef TAPPING_TERM
#define TAPPING_TERM 350
#define TAPPING_TERM_PER_KEY

#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT

#define POINTING_DEVICE_ROTATION_90
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_TASK_THROTTLE_MS 8

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
