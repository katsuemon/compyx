// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define TG_NMPC TG(_NMPDPC)
#define TG_NM68 TG(_NMPD68)
#define TD_68 TD(TD_X68K_LAYER)
#define MO_68 MO(_BASE68)

enum {
    TD_X68K_LAYER,
};

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

int led_layer_state[4] = { 0, 0, 0, 0 };

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
        KC_ESC,  TD_68,      KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,      KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,      KC_MUTE, KC_VOLD, KC_VOLU,
        KC_GRV,    JP_1,   JP_2,   JP_3,   JP_4,   JP_5,   JP_6,   JP_7,   JP_8,   JP_9,   JP_0,JP_MINS,JP_CIRC, JP_YEN,KC_BSPC,      KC_HOME, TG_NMPC, KC_END,
        KC_TAB,       JP_Q,   JP_W,   JP_E,   JP_R,   JP_T,   JP_Y,   JP_U,   JP_I,   JP_O,   JP_P,   JP_AT,   JP_LBRC,KC_ENTER,      KC_DEL,  KC_CLR,  KC_PMNS,
        KC_CAPS,       JP_A,   JP_S,   JP_D,   JP_F,   JP_G,   JP_H,   JP_J,   JP_K,   JP_L,JP_SCLN,JP_COLN,JP_RBRC,                  _______, KC_INS,  KC_PPLS,
        KC_LSFT,        JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_N,    JP_M, JP_COMM,  JP_DOT, JP_SLSH, JP_BSLS, KC_RSFT,      KC_PGUP, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, JP_MHEN,             KC_SPC,            JP_HENK, JP_KANA, KC_RALT, KC_RGUI, _______, KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_NMPDPC] = LAYOUT_compy_jis(
        _______,_______,   _______,   _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,      KC_PSLS, KC_PAST, KC_PMNS,
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______, _______, KC_PPLS,
        _______,   _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      KC_P7,   KC_P8,   KC_P9,
        _______,    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,                  KC_P4,   KC_P5,   KC_P6,
        MO_68  ,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MO_68,        KC_P1,   KC_P2,   KC_P3,
        _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,      KC_P0,   KC_PDOT, KC_PENT
    ),
    [_BASE68] = LAYOUT_compy_jis(
        KC_BRK, _______,     KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,      KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,      KC_MUTE, KC_VOLD, _______,
        KC_ESC,    JP_1,   JP_2,   JP_3,   JP_4,   JP_5,   JP_6,   JP_7,   JP_8,   JP_9,   JP_0,JP_MINS,JP_CIRC, JP_YEN,KC_BSPC,      KC_RGUI, KC_LGUI, KC_PAUS,
        KC_TAB,       JP_Q,   JP_W,   JP_E,   JP_R,   JP_T,   JP_Y,   JP_U,   JP_I,   JP_O,   JP_P,   JP_AT,   JP_LBRC,KC_ENTER,      KC_HOME, KC_NUM,  KC_DEL,
        KC_LCTL,       JP_A,   JP_S,   JP_D,   JP_F,   JP_G,   JP_H,   JP_J,   JP_K,   JP_L,JP_SCLN,JP_COLN,JP_RBRC,                  TG_NM68, KC_INS,  KC_END,
        KC_LSFT,        JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,    JP_N,    JP_M, JP_COMM,  JP_DOT, JP_SLSH, JP_BSLS, KC_RSFT,      KC_PGUP, KC_UP,   KC_PGDN,
        KC_F11,  KC_CAPS, KC_LALT, KC_INT5,             KC_SPC,            KC_INT4, KC_INT2, KC_RALT, KC_LSCR, KC_PSCR, KC_F12,       KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_NMPD68] = LAYOUT_compy_jis(
        _______,_______,   _______,   _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,      _______, _______, _______,
        _______,_______,_______,_______,_______,_______,_______,  KC_P7,  KC_P8,  KC_P9,KC_PSLS,KC_PAST,_______,_______,_______,      _______, _______, _______,
        _______,   _______,_______,_______,_______,_______,_______,  KC_P4,  KC_P5,  KC_P6,KC_PMNS,_______,_______,     _______,      _______, _______, _______,
        _______,    _______,_______,_______,_______,_______,_______,  KC_P1,  KC_P2,  KC_P3,KC_PPLS,_______,_______,                  _______, _______, _______,
        _______,     _______, _______, _______, _______, _______, _______,   KC_P0, JP_COMM, KC_PDOT, KC_PEQL, KC_PENT, _______,      _______, _______, _______,
        _______, _______, _______, _______,            _______,            _______, _______, _______, _______, _______, _______,      _______, _______, _______
    )
};

void keyboard_post_init_user(void) {
    rgblight_sethsv_range(HSV_OFF, 0, 8);
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_X68K_LAYER] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_APP,_BASE68),
};

#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM compyx_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0x00
    };

    oled_write_P(compyx_logo, false);
}

static void render_layer(void) {
    static const char PROGMEM img_layer[] = { 0x01, 0x02, 0x03, 0x04, 0x00 };
    oled_write_P(img_layer, false);
}

static void render_pc(void) {
    static const char PROGMEM img_pc[] = { 0x05, 0x06, 0x07, 0x00 };
    oled_write_P(img_pc, false);
}

static void render_x68k(void) {
    static const char PROGMEM img_x68k[] = { 0x0B, 0x0C, 0x0C, 0x00 };
    oled_write_P(img_x68k, false);
}

static void render_num(void) {
    static const char PROGMEM img_num[] = { 0x08, 0x09, 0x09, 0x00 };
    oled_write_P(img_num, false);
}

static void render_kana_on(void) {
    static const char PROGMEM img_kana_on[] = { 0x8D, 0x8E, 0x8F, 0x00 };
    oled_write_P(img_kana_on, false);
}

static void render_roma_on(void) {
    static const char PROGMEM img_roma_on[] = { 0x90, 0x91, 0x92, 0x00 };
    oled_write_P(img_roma_on, false);
}

static void render_code_on(void) {
    static const char PROGMEM img_code_on[] = { 0x93, 0x94, 0x95, 0x00 };
    oled_write_P(img_code_on, false);
}

static void render_caps_on(void) {
    static const char PROGMEM img_caps_on[] = { 0x96, 0x97, 0x98, 0x00 };
    oled_write_P(img_caps_on, false);
}

static void render_ins_on(void) {
    static const char PROGMEM img_ins_on[] = { 0x99, 0x9A, 0x9B, 0x00 };
    oled_write_P(img_ins_on, false);
}

static void render_hira_on(void) {
    static const char PROGMEM img_hira_on[] = { 0x9C, 0x9D, 0x9E, 0x00 };
    oled_write_P(img_hira_on, false);
}

static void render_zenkaku_on(void) {
    static const char PROGMEM img_zenkaku_on[] = { 0xAD, 0xAE, 0xAF, 0x00 };
    oled_write_P(img_zenkaku_on, false);
}

static void render_kana_off(void) {
    static const char PROGMEM img_kana_off[] = { 0xB0, 0xB1, 0xB2, 0x00 };
    oled_write_P(img_kana_off, false);
}

static void render_roma_off(void) {
    static const char PROGMEM img_roma_off[] = { 0xB3, 0xB4, 0xB5, 0x00 };
    oled_write_P(img_roma_off, false);
}

static void render_code_off(void) {
    static const char PROGMEM img_code_off[] = { 0xB6, 0xB7, 0xB8, 0x00 };
    oled_write_P(img_code_off, false);
}

static void render_caps_off(void) {
    static const char PROGMEM img_caps_off[] = { 0xB9, 0xBA, 0xBB, 0x00 };
    oled_write_P(img_caps_off, false);
}

static void render_ins_off(void) {
    static const char PROGMEM img_ins_off[] = { 0xBC, 0xBD, 0xBE, 0x00 };
    oled_write_P(img_ins_off, false);
}

static void render_hira_off(void) {
    static const char PROGMEM img_hira_off[] = { 0xCD, 0xCE, 0xCF, 0x00 };
    oled_write_P(img_hira_off, false);
}

static void render_zenkaku_off(void) {
    static const char PROGMEM img_zenkaku_off[] = { 0xD0, 0xD1, 0xD2, 0x00 };
    oled_write_P(img_zenkaku_off, false);
}

bool oled_task_user(void) {
    const led_t led_state = host_keyboard_led_state();
    if (led_state.caps_lock) { led_layer_state[get_highest_layer(layer_state)] |= _CAPS; } else { led_layer_state[get_highest_layer(layer_state)] &= ~_CAPS;};
    oled_set_cursor(0,0);

    render_logo();

    // Layer indicator
    oled_set_cursor(14,2);
    render_layer();
    switch(get_highest_layer(layer_state)) {
        case _BASEPC:
            render_pc();
            break;
        case _NMPDPC:
            render_num();
            break;
        case _BASE68:
            render_x68k();
            break;
        case _NMPD68:
            render_num();
            break;
        default:
            oled_write_P(PSTR("UNDEF\n"),false);
    }

    // LED State indicator
    oled_set_cursor(0,3);
    if (led_layer_state[get_highest_layer(layer_state)] & _KANA) {
        render_kana_on();
    } else {
        render_kana_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _ROMA) {
        render_roma_on();
    } else {
        render_roma_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _CODE) {
        render_code_on();
    } else {
        render_code_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _CAPS) {
        render_caps_on();
    } else {
        render_caps_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _INS) {
        render_ins_on();
    } else {
        render_ins_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _HIRA) {
        render_hira_on();
    } else {
        render_hira_off();
    }
    if (led_layer_state[get_highest_layer(layer_state)] & _ZENK) {
        render_zenkaku_on();
    } else {
        render_zenkaku_off();
    }

    return false;
}
#endif