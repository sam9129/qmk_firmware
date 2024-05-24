# --- enable this for left hand side
OLED_ENABLE = no 		   # right side doesn't have OLED
# ---
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGB_MATRIX_ENABLE = no     # Disable keyboard RGB matrix, as it is enabled by default on rev3
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
SERIAL_DRIVER = vendor
# --- disable this for left hand side
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pimoroni_trackball
# ---