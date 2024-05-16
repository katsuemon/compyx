// Copyright 2023 gkeyboard (@gkeyboard)
// SPDX-License-Identifier: GPL-2.0-or-later

// This is the 'classic' fixed-space bitmap font for Adafruit_GFX since 1.0.
// See gfxfont.h for newer custom bitmap font info.

#pragma once

#include "progmem.h"

static const unsigned char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0x40, 0x40, 0x00,
    0x7C, 0x14, 0x7C, 0x00, 0x1C, 0x70,
    0x1C, 0x00, 0x7C, 0x54, 0x54, 0x00,
    0x7C, 0x14, 0x6C, 0x00, 0x00, 0x28,
    0x00, 0x00, 0x7C, 0x24, 0x24, 0x24,
    0x24, 0x18, 0x00, 0x00, 0x38, 0x44,
    0x44, 0x44, 0x44, 0x44, 0x00, 0x00,
    0x00, 0x7C, 0x08, 0x10, 0x7C, 0x00,
    0x3C, 0x40, 0x40, 0x3C, 0x00, 0x7C,
    0x08, 0x10, 0x08, 0x7C, 0x00, 0x00,
    0x00, 0x00, 0x6C, 0x10, 0x6C, 0x00,
    0x7C, 0x54, 0x74, 0x00, 0x7C, 0x54,
    0x7C, 0x00, 0x7C, 0x10, 0x6C, 0x00,
    0x00, 0xAA, 0x00, 0xAA, 0x00, 0xAA,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x5C, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00,
    0x28, 0x7C, 0x28, 0x7C, 0x28, 0x00,
    0x48, 0x54, 0x7C, 0x54, 0x20, 0x00,
    0x4C, 0x2C, 0x10, 0x68, 0x64, 0x00,
    0x28, 0x54, 0x54, 0x28, 0x50, 0x00,
    0x00, 0x08, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x38, 0x44, 0x00, 0x00,
    0x00, 0x44, 0x38, 0x00, 0x00, 0x00,
    0x54, 0x38, 0x7C, 0x38, 0x54, 0x00,
    0x10, 0x10, 0x7C, 0x10, 0x10, 0x00,
    0x00, 0x00, 0xE0, 0x60, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00,
    0x40, 0x20, 0x10, 0x08, 0x04, 0x00,
    0x38, 0x44, 0x44, 0x44, 0x38, 0x00,
    0x00, 0x44, 0x7C, 0x40, 0x00, 0x00,
    0x64, 0x54, 0x54, 0x54, 0x48, 0x00,
    0x54, 0x54, 0x54, 0x54, 0x38, 0x00,
    0x3C, 0x20, 0x20, 0x7C, 0x20, 0x00,
    0x5C, 0x54, 0x54, 0x54, 0x24, 0x00,
    0x38, 0x54, 0x54, 0x54, 0x20, 0x00,
    0x04, 0x44, 0x24, 0x14, 0x0C, 0x00,
    0x28, 0x54, 0x54, 0x54, 0x28, 0x00,
    0x08, 0x54, 0x54, 0x54, 0x38, 0x00,
    0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x28, 0x44, 0x00,
    0x00, 0x28, 0x28, 0x28, 0x00, 0x00,
    0x00, 0x44, 0x28, 0x10, 0x00, 0x00,
    0x0C, 0x04, 0x54, 0x14, 0x1C, 0x00,
    0x38, 0x44, 0x54, 0x54, 0x48, 0x00,
    0x78, 0x14, 0x14, 0x14, 0x78, 0x00,
    0x7C, 0x54, 0x54, 0x54, 0x28, 0x00,
    0x38, 0x44, 0x44, 0x44, 0x44, 0x00,
    0x7C, 0x44, 0x44, 0x44, 0x38, 0x00,
    0x7C, 0x54, 0x54, 0x54, 0x44, 0x00,
    0x7C, 0x14, 0x14, 0x14, 0x04, 0x00,
    0x38, 0x44, 0x54, 0x54, 0x74, 0x00,
    0x7C, 0x10, 0x10, 0x10, 0x7C, 0x00,
    0x00, 0x44, 0x7C, 0x44, 0x00, 0x00,
    0x20, 0x40, 0x44, 0x44, 0x3C, 0x00,
    0x7C, 0x10, 0x10, 0x28, 0x44, 0x00,
    0x7C, 0x40, 0x40, 0x40, 0x40, 0x00,
    0x7C, 0x08, 0x10, 0x08, 0x7C, 0x00,
    0x7C, 0x08, 0x10, 0x20, 0x7C, 0x00,
    0x38, 0x44, 0x44, 0x44, 0x38, 0x00,
    0x7C, 0x24, 0x24, 0x24, 0x18, 0x00,
    0x38, 0x44, 0x44, 0x24, 0x58, 0x00,
    0x7C, 0x24, 0x24, 0x24, 0x58, 0x00,
    0x58, 0x54, 0x54, 0x54, 0x34, 0x00,
    0x04, 0x04, 0x7C, 0x04, 0x04, 0x00,
    0x3C, 0x40, 0x40, 0x40, 0x3C, 0x00,
    0x1C, 0x20, 0x40, 0x20, 0x1C, 0x00,
    0x7C, 0x20, 0x10, 0x20, 0x7C, 0x00,
    0x6C, 0x10, 0x10, 0x10, 0x6C, 0x00,
    0x0C, 0x10, 0x70, 0x10, 0x0C, 0x00,
    0x44, 0x64, 0x54, 0x4C, 0x44, 0x00,
    0x00, 0x7C, 0x44, 0x44, 0x44, 0x00,
    0x04, 0x08, 0x10, 0x20, 0x40, 0x00,
    0x00, 0x44, 0x44, 0x44, 0x7C, 0x00,
    0x00, 0x08, 0x04, 0x08, 0x00, 0x00,
    0x40, 0x40, 0x40, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x04, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF0, 0xF8, 0xFC, 0x1E, 0x0E,
    0x0E, 0x0E, 0x1E, 0x7C, 0x78, 0x70,
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0,
    0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x80, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0x00, 0xC0,
    0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0xC0,
    0xC0, 0x80, 0x00, 0x00, 0xC0, 0xC0,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0xC0, 0xC0, 0x06, 0x1E, 0x7E,
    0xFE, 0xFC, 0xF0, 0xC0, 0x10, 0x7C,
    0xFE, 0x7E, 0x1E, 0x06, 0x00, 0x00,
    0x00, 0x7C, 0xFE, 0x96, 0xE2, 0xB6,
    0x8E, 0xFA, 0xE6, 0xFE, 0xFE, 0xD6,
    0xE2, 0x96, 0x8A, 0xD6, 0xFE, 0x7C,
    0x00, 0x7C, 0xFE, 0x82, 0xBA, 0xBA,
    0x82, 0xFE, 0xEE, 0xEE, 0xEE, 0xFE,
    0xEA, 0xDA, 0xAA, 0xF2, 0xFE, 0x7C,
    0x00, 0x7C, 0xFE, 0xBA, 0xBA, 0x82,
    0xFE, 0xEE, 0xEE, 0xEE, 0xFE, 0x82,
    0xEE, 0xD2, 0xDE, 0xF2, 0xFE, 0x7C,
    0x00, 0x7C, 0xFE, 0x82, 0xBA, 0xFE,
    0x82, 0xEA, 0x82, 0xFE, 0x82, 0xEA,
    0xE2, 0xFE, 0xA2, 0x8A, 0xFE, 0x7C,
    0x00, 0x7C, 0xFE, 0xFE, 0x82, 0xFE,
    0xFE, 0x82, 0xF6, 0xEE, 0x82, 0xFE,
    0xA2, 0xAA, 0x8A, 0xFE, 0xFE, 0x7C,
    0x00, 0x7C, 0xFE, 0xFE, 0xCA, 0xB2,
    0xBE, 0xC6, 0xF6, 0xFE, 0xFE, 0xA6,
    0xAE, 0xAA, 0xDA, 0xFE, 0xFE, 0x7C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0,
    0x00, 0xFE, 0xFF, 0xFF, 0x03, 0x01,
    0x01, 0x01, 0x03, 0xFF, 0xFF, 0xFE,
    0x00, 0xFE, 0xFF, 0xFF, 0x03, 0x01,
    0x03, 0xFF, 0xFF, 0xFF, 0x03, 0x01,
    0x03, 0xFF, 0xFF, 0xFE, 0x00, 0xFF,
    0xFF, 0xFF, 0x03, 0x01, 0x01, 0x01,
    0x03, 0xFF, 0xFF, 0xFC, 0x01, 0x0F,
    0x3F, 0xFE, 0xF0, 0x80, 0xF0, 0xFE,
    0x7F, 0x0F, 0x01, 0x00, 0x00, 0xC0,
    0xF1, 0xC7, 0x1F, 0x7F, 0xFF, 0xFC,
    0xF1, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7C, 0xFE, 0xAE, 0xA6, 0x8A,
    0xA6, 0xAE, 0xFE, 0xFE, 0x86, 0xD2,
    0xC2, 0xD2, 0x86, 0xFE, 0xFE, 0x7C,
    0x00, 0x00, 0x00, 0x68, 0x1C, 0x48,
    0x70, 0x04, 0x18, 0x00, 0x00, 0x28,
    0x1C, 0x68, 0x74, 0x28, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7C, 0x44, 0x44,
    0x7C, 0x00, 0x10, 0x10, 0x10, 0x00,
    0x14, 0x24, 0x54, 0x0C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x44, 0x44, 0x7C,
    0x00, 0x10, 0x10, 0x10, 0x00, 0x7C,
    0x10, 0x2C, 0x20, 0x0C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7C, 0x44, 0x00,
    0x7C, 0x14, 0x7C, 0x00, 0x7C, 0x14,
    0x1C, 0x00, 0x5C, 0x74, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7C, 0x00,
    0x00, 0x7C, 0x08, 0x10, 0x7C, 0x00,
    0x5C, 0x54, 0x74, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x03, 0x07, 0x0F, 0x0E,
    0x0E, 0x0E, 0x0F, 0x07, 0x03, 0x01,
    0x00, 0x01, 0x03, 0x07, 0x0F, 0x0E,
    0x0E, 0x0E, 0x0F, 0x07, 0x03, 0x01,
    0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00,
    0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00,
    0x00, 0x0F, 0x0F, 0x0F, 0x00, 0xFF,
    0xFF, 0xFF, 0x07, 0x0E, 0x0E, 0x0E,
    0x0F, 0x07, 0x03, 0x00, 0x00, 0xE0,
    0xE0, 0xF8, 0xFF, 0x7F, 0x1F, 0x03,
    0x00, 0x00, 0x00, 0x0C, 0x0F, 0x0F,
    0x0F, 0x07, 0x01, 0x00, 0x01, 0x07,
    0x0F, 0x0F, 0x0F, 0x0C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x34, 0x4C,
    0x40, 0x38, 0x08, 0x00, 0x58, 0x50,
    0x54, 0x24, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x50, 0x58, 0x74,
    0x58, 0x50, 0x00, 0x00, 0x78, 0x2C,
    0x3C, 0x2C, 0x78, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0x82, 0xBA, 0xBA,
    0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA,
    0xBA, 0xBA, 0x82, 0x7C, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0x82, 0x82, 0x82,
    0x82, 0x82, 0x82, 0x82, 0x82, 0x82,
    0x82, 0x82, 0x82, 0x7C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
