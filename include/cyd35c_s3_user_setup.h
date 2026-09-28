// SquachWatch-CYD — TFT_eSPI user setup for ESP32-S3 3.5" Capacitive Touch Board
// Board: ESP32-S3 3.5" with ST7796 TFT LCD (320x480) & GT911 Capacitive Touch
#pragma once

#define USER_SETUP_INFO    "SquachWatch-CYD / ESP32-S3 3.5 inch / ST7796 / GT911 Cap Touch"

#define ST7796_DRIVER
#define TFT_WIDTH   320
#define TFT_HEIGHT  480

// Display SPI pins
#define TFT_MISO  12
#define TFT_MOSI  13
#define TFT_SCLK  14
#define TFT_CS    15
#define TFT_DC     2
#define TFT_RST   -1
#define TFT_BL    27

#define TFT_BACKLIGHT_ON   1
#define PWM_FREQ           5000
#define PWM_MAX_DUTY       255

// GT911 I2C pins
#define PIN_I2C_SDA        33
#define PIN_I2C_SCL        32
#define PIN_TOUCH_RST      25
#define PIN_TOUCH_INT      21

#ifndef SPI_FREQUENCY
#define SPI_FREQUENCY         40000000
#endif
#define SPI_READ_FREQUENCY    20000000

#define LOAD_GLCD
#define LOAD_FONT2

#define TFT_INVERSION_ON
#define TFT_RGB_ORDER TFT_BGR
