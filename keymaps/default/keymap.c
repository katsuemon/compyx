// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum layer_number {
    _BASEPC,
    _NMPDPC,
    _BASE68,
    _NMPD68
};

enum led_flag {
    _KANA = 0x01,
    _ROMA = 0x02,
    _CODE = 0x04,
    _CAPS = 0x08,
    _INS  = 0x10,
    _HIRA = 0x20,
    _ZENK = 0x40,
    _NUML = 0x80
};

int led_state[4] = { 0, 0 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* PC Layout
     * ┌───┬───┐ ┌────┬────┬────┬────┬────┐┌────┬────┬────┬────┬─────┐ ┌────┬────┬────┐
     * |ESC|APP| | F1 | F2 | F3 | F4 | F5 || F6 | F7 | F8 | F9 | F10 | |MUTE| VD | VU |
     * └───┴───┘ └────┴────┴────┴────┴────┘└────┴────┴────┴────┴─────┘ ├────┼────┼────┤
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐ |HOME|NUM |END |
     * │Z/H│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ ^ │ \ | BS  | └────┴────┴────┘
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────┤ ┌────┬────┬────┐
     * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ @ │ [ │ ENTER │ |DEL |CLR | -  |
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐      │ ├────┼────┼────┤
     * │ CAPS │ A | S | D | F | G | H | J | K | L | ; | : | ] |      │ |    |INS | +  |
     * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤ ├────┼────┼────┤
     * │ SHIFT │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ _ │  SHIFT  │ |PGUP| UP |PGDN|
     * ├────┬──┴─┬─┴──┬┴───┼───┴───┴───┼───┴┬──┴─┬─┴──┬┴───┼────┬────┤ ├────┼────┼────┤
     * │CTRL│LGUI│LALT|MHEN|           |HENK|KANA|RALT|RGUI|    |CTRL| |LEFT|DOWN|RGHT|
     * └────┴────┴────┴────┴───────────┴────┴────┴────┴────┴────┴────┘ └────┴────┴────┘
     */

    /* X68K Layout
     * ┌───┬───┐ ┌────┬────┬────┬────┬────┐┌────┬────┬────┬────┬─────┐ ┌────┬────┬────┐
     * |BRK|CPY| | F1 | F2 | F3 | F4 | F5 || F6 | F7 | F8 | F9 | F10 | |KIGO|TRKU|HELP|
     * └───┴───┘ └────┴────┴────┴────┴────┘└────┴────┴────┴────┴─────┘ ├────┼────┼────┤
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐ |ZENK|HIRA|CODE|
     * │Z/H│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ ^ │ \ | BS  | └────┴────┴────┘
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────┤ ┌────┬────┬────┐
     * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ @ │ [ │ ENTER │ |HOME|CLR |DEL |
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐      │ ├────┼────┼────┤
     * │ CAPS │ A | S | D | F | G | H | J | K | L | ; | : | ] |      │ |NUM |INS |UNDO|
     * ├──────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤ ├────┼────┼────┤
     * │ SHIFT │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ _ │  SHIFT  │ |R.UP| UP |R.DN|
     * ├────┬──┴─┬─┴──┬┴───┼───┴───┴───┼───┴┬──┴─┬─┴──┬┴───┼────┬────┤ ├────┼────┼────┤
     * │OPT1│CAPS│XF1 |XF2 |           |XF3 |XF4 |XF5 |ROMA|KANA|OPT2| |LEFT|DOWN|RGHT|
     * └────┴────┴────┴────┴───────────┴────┴────┴────┴────┴────┴────┘ └────┴────┴────┘
     */

    [_BASEPC] = LAYOUT_compy_jis(
        KC_ESC,  KC_APP,     KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,      KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,      KC_MUTE, KC_VOLD, KC_VOLU,
        KC_GRV,    JP_1,   JP_2,   JP_3,   JP_4,   JP_5,   JP_6,   JP_7,   JP_8,   JP_9,   JP_0,JP_MINS,JP_CIRC, JP_YEN,KC_BSPC,      KC_HOME, _______, KC_END,
        KC_TAB,       JP_Q,   JP_W,   JP_E,   JP_R,   JP_T,   JP_Y,   JP_U,   JP_I,   JP_O,   JP_P,   JP_AT,   JP_LBRC,KC_ENTER,      KC_DEL,  KC_CLR,  KC_PMNS,
        KC_CAPS,       JP_A,   JP_S,   JP_D,   JP_F,   JP_G,   JP_H,   JP_J,   JP_K,   JP_L,JP_SCLN,JP_COLN,JP_RBRC,                  _______, KC_INS,  KC_PPLS,
        KC_LSFT,        JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_N,    JP_M, JP_COMM,  JP_DOT, JP_SLSH, JP_BSLS, KC_RSFT,      KC_PGUP, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, JP_MHEN,             KC_SPC,            JP_HENK, JP_KANA, KC_RALT, KC_RGUI, _______, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_NMPDPC] = LAYOUT_compy_jis(
        _______,_______,   _______,   _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,      _______, _______, _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______, _______, _______,
        _______,   _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      _______, _______, _______,
        _______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                  _______, _______, _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,
        _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,      _______, _______, _______
    ),
    [_BASE68] = LAYOUT_compy_jis(
        _______,_______,   _______,   _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,      _______, _______, _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______, _______, _______,
        _______,   _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      _______, _______, _______,
        _______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                  _______, _______, _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,
        _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,      _______, _______, _______
    ),
    [_NMPD68] = LAYOUT_compy_jis(
        _______,_______,   _______,   _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,      _______, _______, _______,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______, _______, _______,
        _______,   _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      _______, _______, _______,
        _______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                  _______, _______, _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______,
        _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,      _______, _______, _______
    )
};



#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM compyx_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00
    };

    oled_write_P(compyx_logo, false);
}

static void render_kana_on(void) {
    static const char PROGMEM kana_on[] = {
        0x8D, 0x8E, 0x8F, 0x00
    };

    oled_write_P(kana_on, false);
}

static void render_roma_on(void) {
    static const char PROGMEM roma_on[] = {
        0x90, 0x91, 0x92, 0x00
    };

    oled_write_P(roma_on, false);
}

static void render_code_on(void) {
    static const char PROGMEM code_on[] = {
        0x93, 0x94, 0x95, 0x00
    };

    oled_write_P(code_on, false);
}

static void render_caps_on(void) {
    static const char PROGMEM caps_on[] = {
        0x96, 0x97, 0x98, 0x00
    };

    oled_write_P(caps_on, false);
}

static void render_ins_on(void) {
    static const char PROGMEM ins_on[] = {
        0x99, 0x9A, 0x9B, 0x00
    };

    oled_write_P(ins_on, false);
}

static void render_hira_on(void) {
    static const char PROGMEM hira_on[] = {
        0x9C, 0x9D, 0x9E, 0x00
    };

    oled_write_P(hira_on, false);
}

static void render_zenkaku_on(void) {
    static const char PROGMEM zenkaku_on[] = {
        0xAD, 0xAE, 0xAF, 0x00
    };

    oled_write_P(zenkaku_on, false);
}
/*
static void render_kana_off(void) {
    static const char PROGMEM kana_off[] = {
        0xB0, 0xB1, 0xB2, 0x00
    };

    oled_write_P(kana_off, false);
}

static void render_roma_off(void) {
    static const char PROGMEM roma_off[] = {
        0xB3, 0xB4, 0xB5, 0x00
    };

    oled_write_P(roma_off, false);
}

static void render_code_off(void) {
    static const char PROGMEM code_off[] = {
        0xB6, 0xB7, 0xB8, 0x00
    };

    oled_write_P(code_off, false);
}

static void render_caps_off(void) {
    static const char PROGMEM caps_off[] = {
        0xB9, 0xBA, 0xBB, 0x00
    };

    oled_write_P(caps_off, false);
}

static void render_ins_off(void) {
    static const char PROGMEM ins_off[] = {
        0xBC, 0xBD, 0xBE, 0x00
    };

    oled_write_P(ins_off, false);
}

static void render_hira_off(void) {
    stSatic const char PROGMEM hira_off[] = {
        0xCD, 0xCE, 0xCF, 0x00
    };

    oled_write_P(hira_off, false);
}

static void render_zenkaku_off(void) {
    static const char PROGMEM zenkaku_off[] = {
        0xD0, 0xD1, 0xD2, 0x00
    };

    oled_write_P(zenkaku_off, false);
}
*/
bool oled_task_user(void) {
    render_logo();
    render_kana_on();
    render_roma_on();
    render_code_on();
    render_caps_on();
    render_ins_on();
    render_hira_on(); 
    render_zenkaku_on();
    /*
    render_kana_off();
    render_roma_off();
    render_code_off();
    render_caps_off();
    render_ins_off();
    render_hira_off();
    render_zenkaku_off();
    */
    return false;
}

#endif