// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_layer {
	_QWERTY,
	_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x7(
        // left hand
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LPRN,
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL,   KC_LGUI, KC_LALT, KC_HOME, KC_END,
                                                      KC_SPC,  KC_ENT,
                                                 KC_LCTL, KC_LSFT, KC_BSPC,
                                                     KC_LALT, KC_LGUI,
        // Right Hand
                    TT(_FN),    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_EQL,  
                    KC_RPRN,    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_BSLS,
                    KC_RBRC,    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN, KC_QUOT,
                                KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT,
                                          KC_UP,    KC_DOWN,  KC_LEFT,  KC_RGHT, KC_MINS,
            KC_PGUP,  KC_SPC,
        KC_PGDN,  TT(_FN), KC_ENT,
            KC_DEL, KC_BSPC
    ),

    [_FN] = LAYOUT_6x7(
        // left hand
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______,
        _______, _______, _______, KC_UP,   _______, _______, _______,
        _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,
        KC_MPRV, KC_MNXT, _______, KC_MSTP, KC_MPLY,
                                                      _______,  _______,
                                                 _______, _______, _______,
                                                     _______, _______,
        // Right Hand
                    _______,  KC_F7,    KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,
                    KC_PPLS,  KC_PMNS,  KC_P7,    KC_P8,    KC_P9,   _______,  _______,
                    KC_PSLS,  KC_PAST,  KC_P4,    KC_P5,    KC_P6,   KC_PENT,  _______,
                              KC_PEQL,  KC_P1,    KC_P2,    KC_P3,   _______,  _______,
                                        KC_PDOT,  KC_P0,    KC_PDOT, _______,  _______,
            _______,  _______,
        _______,  _______, _______,
            _______, _______
    ),
};

// Haven't figured out how to get uantum keys to work:
/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x7(
        // left hand
        KC_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LSPO,
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LCTL,   KC_LGUI, KC_LALT, KC_HOME, KC_END,
                                                      KC_SPC,  KC_ENT,
                                                 KC_LCTL, KC_LSFT, KC_BSPC,
                                                     KC_LALT, KC_LGUI,
        // Right Hand
                    TT(_FN),    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    KC_EQL,  
                    KC_RSPC,    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_BSLS,
                    KC_RBRC,    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN, KC_QUOT,
                                KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT,
                                          KC_UP,    KC_DOWN,  KC_LEFT,  KC_RGHT, KC_MINS,
            KC_PGUP,  KC_SPC,
        KC_PGDN,  TT(_FN), KC_ENT,
            KC_DEL, KC_BSPC
    ),
*/