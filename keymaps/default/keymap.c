// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐ ┌────┬────┬────┬────┬────┐┌────┬────┬────┬────┬─────┐ ┌───┬───┬───┐
     * |ESC|APP| | F1 | F2 | F3 | F4 | F5 || F6 | F7 | F8 | F9 | F10 | |   |   |   |
     * └───┴───┘ └────┴────┴────┴────┴────┘└────┴────┴────┴────┴─────┘ ├───┼───┼───┤
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐ |   |   |   |
     * │Z/H│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ ^ │ \ | BS  | └───┴───┴───┘
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────┤ ┌───┬───┬───┐
     * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ @ │ [ │ ENTER │ |   |   |   |
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐      │ ├───┼───┼───┤
     * │ CAPS │ A | S | D | F | G | H | J | K | L | ; | : | ] |      │ |   |   |   |
     * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤ ├───┼───┼───┤
     * │ SHIFT │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ _ │  SHIFT  │ |   |   |   |
     * ├────┬──┴─┬─┴──┬┴───┼───┴───┴───┼───┴┬──┴─┬─┴──┬┴───┼────┬────┤ ├───┼───┼───┤
     * │CTRL│LGUI│LALT|MHEN|           |HENK|KANA|RALT|RGUI|    |CTRL| |   |   |   |
     * └────┴────┴────┴────┴───────────┴────┴────┴────┴────┴────┴────┘ └───┴───┴───┘
     */
    [_BASEPC] = LAYOUT_x68kcomp96_jis(
        KC_ESC,  KC_APP,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                      KC_MUTE, KC_VOLD, TD(TD_VOLU_LAYER),
        KC_GRV,  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, JP_CIRC, JP_YEN, KC_BSPC,    KC_HOME, TG(_NMPDWIN),KC_END,
        KC_TAB,  JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,    JP_Y,    JP_U,    JP_I,    JP_O,    JP_P,    JP_AT,   JP_LBRC,         KC_ENTER,   KC_DEL,  KC_CLR,  KC_PMNS,
        KC_CAPS, JP_A,    JP_S,    JP_D,    JP_F,    JP_G,    JP_H,    JP_J,    JP_K,    JP_L,    JP_SCLN, JP_COLN, JP_RBRC,                    _______,  KC_INS,  KC_PPLS,
        KC_LSFT, JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_N,    JP_M,    JP_COMM, JP_DOT,  JP_SLSH, JP_BSLS, KC_RSFT,                    KC_PGUP,  KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, JP_MHEN,          KC_SPC,           JP_HENK, JP_KANA, KC_RALT, KC_RGUI, _______, KC_RCTL,                    KC_LEFT,  KC_DOWN, KC_RGHT
    ),\
};
