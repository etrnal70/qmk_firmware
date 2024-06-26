# Software
COMBO_ENABLE = yes
DYNAMIC_MACRO_ENABLE = no
EXTRAKEY_ENABLE = yes
KEY_OVERRIDE_ENABLE = no
MOUSEKEY_ENABLE = yes
QMK_SETTINGS = no
WPM_ENABLE = yes

# Hardware
SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
ENCODER_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pimoroni_trackball

# Build
LTO_ENABLE = yes
VIA_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
MUSIC_ENABLE = no

#Debug options
VERBOSE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

SRC += libs/custom_shift_keys.c
SRC += oled.c misc.c
