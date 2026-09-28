// SquachWatch-CYD — GT911 capacitive touch driver
// Used on CrowPanel 7 and ESP32-3248S035C.
//
// Same shape as src/cap_touch.cpp: a probe at boot, then a raw read that
// the caller feeds into TouchFit. The GT911 reports native panel pixels,
// so the default fit is the identity and nothing needs calibrating.
#pragma once
#include <stdint.h>

namespace Gt911 {
    // Begins Wire and runs the wake/reset dance. If pin arguments are < 0,
    // board defaults are used. Returns true if a GT911 answered.
    bool begin(int sda = -1, int scl = -1, int rst = -1, int irq = -1);
    bool present();
    // One contact, in panel pixels. False when no finger is down.
    bool read(uint16_t& x, uint16_t& y);
    uint8_t address();
}
