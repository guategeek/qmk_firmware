// Modified by Guategeek

#include QMK_KEYBOARD_H

/*
 *┌──┐    ┌──┐┌──┐┌──┐┌──┐                      ┌──┐┌──┐┌──┐┌──┐    ┌──┐
 *│  │┌──┐│  ││  ││  ││  │                      │  ││  ││  ││  │┌──┐│  │
 *└──┘│  │└──┘└──┘└──┘└──┘                      └──┘└──┘└──┘└──┘│  │└──┘
 *┌──┐└──┘┌──┐┌──┐┌──┐┌──┐                      ┌──┐┌──┐┌──┐┌──┐└──┘┌──┐
 *│  │┌──┐│  ││  ││  ││  │                      │  ││  ││  ││  │┌──┐│  │
 *└──┘│  │└──┘└──┘└──┘└──┘                      └──┘└──┘└──┘└──┘│  │└──┘
 *┌──┐└──┘┌──┐┌──┐┌──┐┌──┐                      ┌──┐┌──┐┌──┐┌──┐└──┘┌──┐
 *│  │┌──┐│  ││  ││  ││  │                      │  ││  ││  ││  │┌──┐│  │
 *└──┘│  │└──┘└──┘└──┘└──┘                      └──┘└──┘└──┘└──┘│  │└──┘
 *┌──┐└──┘┌──┐┌──┐┌──┐┌──┐                      ┌──┐┌──┐┌──┐┌──┐└──┘┌──┐
 *│  │┌──┐│  ││  ││  ││  │ ┌──┐┌──┐    ┌──┐┌──┐ │  ││  ││  ││  │┌──┐│  │
 *└──┘│  │└──┘└──┘└──┘└──┘ │  ││  │    │  ││  │ └──┘└──┘└──┘└──┘│  │└──┘
 *┌──┐└──┘┌──┐┌──┐┌──┐     └──┘└──┘    └──┘└──┘     ┌──┐┌──┐┌──┐└──┘┌──┐ 
 *│  │┌──┐│  ││  ││  │ ┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐ │  ││  ││  │┌──┐│  │
 *└──┘│  │└──┘└──┘└──┘ │  ││  ││  │    │  ││  ││  │ └──┘└──┘└──┘│  │└──┘
 *    └──┘             │  ││  │└──┘    └──┘│  ││  │             └──┘
 *                     │  ││  │┌──┐    ┌──┐│  ││  │
 *                     │  ││  ││  │    │  ││  ││  │
 *                     └──┘└──┘└──┘    └──┘└──┘└──┘
 */

enum custom_layers {
  _QWERTY,
  _NAV,
};

// Custom Layer Indicator LEDs
// void keyboard_pre_init_user(void) {
// setPinOutput(GP6);  
// setPinOutput(GP7);  
// }
// layer_state_t layer_state_set_user(layer_state_t state) {
//     if(IS_LAYER_ON_STATE(state, 1)) { 
//         writePinHigh(GP6); 
//     } 
//     else { 
//         writePinLow(GP7);
//     } 
//     if(IS_LAYER_ON_STATE(state, 2)) { 
//         writePinHigh(GP6); 
//     } 
//     else { 
//         writePinLow(GP7); 
//     } 
// return state; 
// }

// Custom keycodes
#define TG_NAV TG(_NAV) // This makes a key to switch directly to the numbers layer
#define COPY LGUI(KC_C)
#define PASTE LGUI(KC_V)
#define PASTENF MEH(KC_V) // Paste without formatting
#define CUT LGUI(KC_X)
#define SAVE LGUI(KC_S)
#define UNDO LGUI(KC_Z)
#define REDO LGUI(S(KC_Z))
//#define TT_SYM TT(_SYMBOLS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_EQL , KC_1   , KC_2    , KC_3   , KC_4   , KC_5   ,                          KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_TAB , KC_Q   , KC_W    , KC_E   , KC_R   , KC_T   ,                          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        KC_CAPS, KC_A   , KC_S    , KC_D   , KC_F   , KC_G   ,                          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X    , KC_C   , KC_V   , KC_B   ,                          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        TG_NAV , QK_GESC, KC_BSLS , KC_LEFT, KC_RGHT,                                            KC_UP  , KC_DOWN, KC_LBRC, KC_RBRC, _______,
                                                      KC_LGUI, KC_LALT,        KC_RCTL, KC_RGUI,
                                             KC_BSPC, KC_DEL , KC_HOME,        KC_PGUP, KC_ENT , KC_SPC ,
                                                               KC_END ,        KC_PGDN
    ),
    [_NAV] = LAYOUT(
        QK_BOOT, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                          KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,
        UG_VALU, _______, KC_HOME, KC_UP  , KC_END , KC_PGUP,                          _______, KC_P7  , KC_P8  , KC_P9  , KC_PMNS, KC_F12,
        UG_VALD, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                          _______, KC_P4  , KC_P5  , KC_P6  , KC_PPLS, _______,
        UG_HUEU, _______, _______, _______, _______, _______,                          _______, KC_P1  , KC_P2  , KC_P3  , KC_SLSH, _______,
        TG_NAV , UG_TOGG, UG_NEXT, KC_MPRV, KC_MNXT,                                            KC_PCMM, KC_P0  , KC_PDOT, KC_PENT, _______,
                                                     _______, _______,        _______, _______,
                                            _______, _______, _______,        _______, _______, _______,
                                                              _______,        _______
    ),
};
