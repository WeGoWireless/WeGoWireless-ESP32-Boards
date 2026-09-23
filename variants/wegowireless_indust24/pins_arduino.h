#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_MANUFACTURER "WeGoWireless"
#define USB_PRODUCT      "Indust24"
#define USB_SERIAL       ""

// Indust24 primary I2C - 2nd production hardware
static const uint8_t SDA = 2;
static const uint8_t SCL = 1;

// Indust24 primary SPI
static const uint8_t SS = 39;
static const uint8_t MOSI = 35;
static const uint8_t MISO = 37;
static const uint8_t SCK = 36;

#endif /* Pins_Arduino_h */
