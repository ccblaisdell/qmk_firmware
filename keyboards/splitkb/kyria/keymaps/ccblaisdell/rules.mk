OLED_ENABLE = yes
ENCODER_ENABLE = no       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
COMBO_ENABLE = yes

# All of these are optimizations to save space
# https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
MOUSEKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
EXTRAFLAGS += -flto
