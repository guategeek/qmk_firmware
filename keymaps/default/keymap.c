// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_layer {
	_DVORAK,
    _QWERTY,
	_FN,
};

// Stuff for QMK-DFU Bootloader
#define QMK_ESC_OUTPUT F5 // Usualy a COL
#define QMK_ESC_INPUT D4 // Usualy a ROW
#define QMK_LED B0 // B0 is one of the two LEDs on the Pro Micro itself.

// Custom keycodes
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define PASTENF MEH(KC_V) // Paste without formatting
#define CUT LCTL(KC_X)
#define SAVE LCTL(KC_S)
#define UNDO LCTL(KC_Z)
#define REDO RCS(KC_Z)

    
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT_6x7(
        // left hand                                                                   // Right Hand
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_CAPS,                 KC_CALC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS, 
        KC_GRV , KC_QUOT, KC_COMM, KC_DOT , KC_P   , KC_Y   , KC_LPRN,                 KC_RPRN, KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , KC_EQL ,
        KC_TAB , KC_A   , KC_O   , KC_E   , KC_U   , KC_I   , KC_LBRC,                 KC_RBRC, KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , KC_MINS,
        COPY   , KC_SCLN, KC_Q   , KC_J   , KC_K   , KC_X   ,                                   KC_B   , KC_M   , KC_W   , KC_V   , KC_Z   , KC_SLSH,
        PASTE  , KC_LGUI, UNDO   , REDO   , SAVE ,                                                     KC_UP  , KC_DOWN, KC_LEFT, KC_RGHT, TO(1),
                                                     KC_SPC , KC_ENT,                    KC_ENT , KC_SPC ,
                                                KC_LCTL, KC_LSFT, TG(_FN),        KC_INS ,OSM(MOD_LSFT), TT(_FN),
                                                     KC_LALT, KC_DEL ,                   KC_DEL , KC_BSPC
    ),

    [_QWERTY] = LAYOUT_6x7(
        // left hand                                                                   // Right Hand
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_CAPS,                 KC_CALC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS, 
        KC_GRV , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LPRN,                 KC_RPRN, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
        KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LBRC,                 KC_RBRC, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_MINS,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT, KC_HOME, KC_END ,                                                     KC_UP  , KC_DOWN, KC_LEFT, KC_RGHT, TO(0),
                                                     KC_SPC , KC_ENT,                    KC_ENT , KC_SPC ,
                                                KC_LCTL, KC_LSFT, TG(_FN),          KC_INS ,OSM(MOD_LSFT), TT(_FN),
                                                     KC_LALT, KC_DEL ,                   KC_DEL , KC_BSPC
    ),

    [_FN] = LAYOUT_6x7(
        // left hand                                                                   // Right Hand
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F11 ,                 KC_F12 , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,  _______,
        _______, _______, KC_HOME, KC_UP  , KC_END , KC_PGUP, LCTL(KC_C),                 KC_PPLS, KC_PMNS, KC_P7  , KC_P8  , KC_P9  , _______,  _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, LCTL(KC_V),                 KC_PSLS, KC_PAST, KC_P4  , KC_P5  , KC_P6  , KC_PENT,  _______,
        CUT    , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,                                   KC_PEQL, KC_P1  , KC_P2  , KC_P3  , _______,  _______,
        PASTENF, KC_MNXT, _______, KC_MSTP, KC_MPLY,                                                     KC_P0  , KC_PDOT, _______, _______,  _______,
                                                      _______,  _______,                     _______,  _______,
                                                 _______, _______, _______,          _______,  _______, _______,
                                                     _______, KC_BSPC,                    _______, _______
    ),
/*
  // empty layer
    [_EMPTY] = LAYOUT_6x7(
        // left hand                                                                   // Right Hand
        _______, _______, _______, _______, _______, _______, _______,                 _______, _______, _______, _______, _______, _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,                 _______, _______, _______, _______, _______, _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,                 _______, _______, _______, _______, _______, _______,  _______,
        _______, _______, _______, _______, _______, _______,                                   _______, _______, _______, _______, _______,  _______,
        _______, _______, _______, _______, _______,                                                     _______, _______, _______, _______,  _______,
                                                      _______,  _______,                     _______,  _______,
                                                 _______, _______, _______,          _______,  _______, _______,
                                                     _______, _______,                    _______, _______
    ),
  */
};

// Oled Options
#ifdef OLED_ENABLE
// From https://docs.qmk.fm/#/feature_oled_driver?id=oled-type
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _DVORAK:
            oled_write_P(PSTR("DVORAK\n"), false);
            break;
        case _QWERTY:
            oled_write_P(PSTR("Qwerty\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("Function\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    //oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAPS ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
// Trying to copy from crkbd devorak keymap
/*
#define DISPLAY_LAYER_NAME(LAYER_NAME, LAYER_STRING) \
  if(get_highest_layer(layer_state) == LAYER_NAME) { \
      oled_write_ln_P(PSTR(LAYER_STRING), false); \
      return;\
  }\

void oled_render_layer_state(void) {

  DISPLAY_LAYER_NAME(QWERTY, "QWERTY");
  DISPLAY_LAYER_NAME(FN, "Function");
}
*/
#endif // OLED_ENABLE
