#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1
#define _NUMPAD 2

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_GRV,             KC_1,    KC_2,     KC_3,   KC_4,   KC_5,
        LGUI_T(KC_TAB),     KC_Q,    KC_W,     KC_E,   KC_R,   KC_T,
        LCTL_T(KC_ESC),     KC_A,    KC_S,     KC_D,   KC_F,   KC_G,
        KC_LSPO,            KC_Z,    KC_X,     KC_C,   KC_V,   KC_B,
        TT(_FN),            KC_LGUI, KC_LCTL,  KC_LALT,
                                                               KC_SPC,  KC_ENTER, KC_DEL,           KC_LSPO,
                                                                                  LCTL_T(KC_LBRC),  TT(_FN),
        // right hand
                                   KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     KC_MINS,
                                   KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLS,
                                   KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
                                   KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC,
                                                     KC_RALT,  KC_RCTL,  KC_RGUI,  TT(_FN),
        KC_RSPC,   KC_BSPC,        KC_BSPC, KC_SPC,
        KC_EQL,    RCTL_T(KC_RBRC)
    ),

    [_FN] = LAYOUT_5x7(
        // left hand

        RGB_TOG,          KC_F1,     KC_F2,    KC_F3,     KC_F4,     KC_F5,
        RGB_MODE_SNAKE,   _______,   KC_HOME,   KC_UP,    KC_END,    KC_PGUP,
        RGB_MODE_KNIGHT,  _______,   KC_LEFT,   KC_DOWN,  KC_RGHT,   KC_PGDOWN,
        _______,          _______,   _______,  _______,   RGB_VAI,   RGB_VAD,
        TG(_FN),          _______,   _______,  _______,
                                                                    _______, _______,  _______, _______,
                                                                                       _______, TG(_FN),
        // right hand
                                     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,
                                     _______,   _______,   _______,   _______,   _______,   KC_F12,
                                     _______,   _______,   _______,   _______,   _______,   _______,
                                     _______,   _______,   _______,   _______,   _______,   _______,
                                                           _______,   _______,   _______,   _______,
        _______, _______,    _______, _______,
        TG(_FN), _______
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                                     _______,   KC_NLCK,   _______,   KC_PMNS,   KC_PPLS,   _______,
                                     _______,   KC_P7,     KC_P8,     KC_P9,     _______,   _______,
                                     _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
                                     _______,   KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
                                                           KC_P0,     KC_PDOT,   _______,   _______,
             _______, KC_PENT,
             _______, _______,
             _______, _______
    ),
};

#define HSV_CTRL_LO 85, 255, 140

#define HSV_SHIFT_LO 234, 128, 200

#define HSV_ALT_LO 5, 218, 158

#define HSV_SUPER_LO 140, 200, 150

#define HSV_FN_LO 36, 255, 150
#define HSV_FN_HI 36, 255, 255

#define HSV_F 150, 255, 100
#define HSV_CURSOR 63, 255, 200
#define HSV_CURSORB 45, 255, 150

const rgblight_segment_t PROGMEM left_main_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                             // FN
                                                                               {27, 1, HSV_FN_LO},
                                                                               {33, 1, HSV_FN_LO},
                                                                               // Shift
                                                                               {18, 1, HSV_SHIFT_LO},
                                                                               {24, 1, HSV_SHIFT_LO},
                                                                               // Ctrl
                                                                               {17, 1, HSV_CTRL_LO},
                                                                               {28, 1, HSV_CTRL_LO},
                                                                               {31, 1, HSV_CTRL_LO},
                                                                               // Alt
                                                                               {30, 1, HSV_ALT_LO},
                                                                               // Super
                                                                               {6, 1, HSV_SUPER_LO},
                                                                               {32, 1, HSV_SUPER_LO}
);

const rgblight_segment_t PROGMEM right_main_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                             // FN
                                                                               {33, 1, HSV_FN_LO},
                                                                               // Shift
                                                                               {18, 1, HSV_SHIFT_LO},
                                                                               {24, 1, HSV_SHIFT_LO},
                                                                               // Ctrl
                                                                               {28, 1, HSV_CTRL_LO},
                                                                               {31, 1, HSV_CTRL_LO},
                                                                               // Alt
                                                                               {30, 1, HSV_ALT_LO},
                                                                               // Super
                                                                               {32, 1, HSV_SUPER_LO}
);

const rgblight_segment_t PROGMEM left_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                           // FN
                                                                           {27, 1, HSV_FN_HI},
                                                                           {33, 1, HSV_FN_HI},
                                                                           // Function keys
                                                                           {0, 5, HSV_F},
                                                                           // Cursor keys
                                                                           //{7, 1, HSV_CURSORB},
                                                                           //{8, 1, HSV_CURSOR},
                                                                           //{9, 1, HSV_CURSORB},
                                                                           //{14, 3, HSV_CURSOR},
                                                                           //{10, 1, HSV_CURSORB},
                                                                           //{13, 1, HSV_CURSORB}

                                                                           {8, 1, HSV_CURSORB},
                                                                           {9, 1, HSV_CURSOR},
                                                                           {10, 1, HSV_CURSORB},
                                                                           {13, 3, HSV_CURSOR},
                                                                           {11, 1, HSV_CURSORB},
                                                                           {12, 1, HSV_CURSORB}
);
const rgblight_segment_t PROGMEM right_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
                                                                            // FN
                                                                            {33, 1, HSV_FN_HI},
                                                                            // Function keys
                                                                            {0, 6, HSV_F},
                                                                            {11, 1, HSV_F}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM left_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
                                                                               left_main_layer,
                                                                               left_fn_layer
);

const rgblight_segment_t* const PROGMEM right_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
                                                                               right_main_layer,
                                                                               right_fn_layer
);

void keyboard_post_init_user(void) {
  if (is_keyboard_master()) {
    rgblight_layers = left_rgb_layers;
  } else {
    rgblight_layers = right_rgb_layers;
  }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, true);
    rgblight_set_layer_state(1, layer_state_cmp(state, _FN));
    return state;
}
