# WeGoWireless ESP32 Boards

Arduino board definitions for custom WeGoWireless ESP32-S3 hardware.

## Supported Boards

- WeGoWireless Indust24
- WeGoWireless RdyTouch2.8

Both boards currently use an ESP32-S3-WROOM-1 module with:

- 8 MB Flash
- 2 MB QSPI PSRAM
- 240 MHz ESP32-S3
- USB CDC/JTAG support
- Serial and OTA firmware upload support

## Requirements

This package uses the Espressif Arduino-ESP32 core rather than including a
separate copy of the ESP32 core.

Install the Espressif ESP32 Arduino core before using these board definitions.

Currently tested with:

- Arduino-ESP32 3.3.11
- Arduino IDE
- Visual Studio with Visual Micro

## Partition Schemes

### OTA Max App (No SPIFFS)

The default WeGoWireless partition scheme provides two large OTA application
partitions and no SPIFFS partition.

Each application partition supports up to:

4,128,768 bytes

The custom partition table is stored with each board variant.

### Default 8MB

The standard Espressif 8 MB partition scheme is also available:

- 3 MB application partition
- 1.5 MB SPIFFS

## Package Structure

```text
variants/
├── wegowireless_indust24/
│   ├── pins_arduino.h
│   └── wego_8MB_ota.csv
└── wegowireless_rdytouch_2_8/
    ├── pins_arduino.h
    └── wego_8MB_ota.csv
