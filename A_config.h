/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once
#define STROBE 2
  #define NYALA HIGH
  #define MATI LOW
#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

// =================================================================================================
// PILIHAN BOARD (WEMOS D1 MINI)
// =================================================================================================
#define WEMOS_D1_MINI 

// PENTING: Matikan FORMAT_EEPROM dulu jika fungsi format di .ino lo bermasalah dengan 1 argumen
// #define RESET_SETTINGS 
// #define FORMAT_SPIFFS

// ========== CONFIGS KHUSUS WEMOS D1 MINI ========== //

#if defined(WEMOS_D1_MINI)
 #define LED_NEOPIXEL_GRB
 #define LED_NUM 1
 #define LED_NEOPIXEL_PIN 15 // Gunakan angka 15 (GPIO15) daripada D8 untuk menghindari error macro
 #define LED_MODE_BRIGHTNESS 10
 #define INTRO_STR "WifiX v1.5"
 #define USE_DISPLAY false 
 #define FLIP_DIPLAY true
 #define DISPLAY_TEXT "WifiX Monster"
 #define SH1106_I2C
 #define I2C_ADDR 0x3C
 #define I2C_SDA 4
 #define I2C_SCL 5
 #define BUTTON_UP 14   // GPIO14
 #define BUTTON_DOWN 12 // GPIO12
 #define BUTTON_A 13    // GPIO13
 #define BUTTON_B 0     // GPIO0
 #define RESET_BUTTON 255
#endif

// =================================================================================================
// DEFINISI STANDAR (WAJIB ADA BIAR GAK ERROR COMPILE)
// =================================================================================================

#define DEAUTHER_VERSION "2.6.1"
#define DEAUTHER_VERSION_MAJOR 2
#define DEAUTHER_VERSION_MINOR 6
#define DEAUTHER_VERSION_REVISION 1

// FIX EEPROM SIZE
#define EEPROM_SIZE 4096
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100

// ===== ATTACK SETTINGS =====
#define ATTACK_ALL_CH false
#define RANDOM_TX false
#define ATTACK_TIMEOUT 0
#define DEAUTHS_PER_TARGET 25
#define DEAUTH_REASON 1
#define PROBE_FRAMES_PER_SSID 1
#define BEACON_INTERVAL_100MS true

// ===== SNIFFER SETTINGS =====
#define CH_TIME 200
#define MIN_DEAUTH_FRAMES 3

// ===== ACCESS POINT SETTINGS =====
#define AP_SSID "WifiX-MONSTER"
#define AP_PASSWD "deauther"
#define AP_HIDDEN false
#define AP_IP_ADDR { 192, 168, 4, 1 }

// ===== WEB INTERFACE SETTINGS =====
#define WEB_ENABLED true
#define WEB_CAPTIVE_PORTAL false
#define WEB_USE_SPIFFS false  
#define DEFAULT_LANG "en"
#define WEB_URL "deauth.me"

// ===== CLI & LED SETTINGS =====
#define CLI_ENABLED true
#define CLI_ECHO true
#define USE_LED true
#define LED_NEOPIXEL // Tambahkan ini secara eksplisit
#define LED_MODE_OFF 0, 0, 0
#define LED_MODE_SCAN 0, 0, 255
#define LED_MODE_ATTACK 255, 0, 0
#define LED_MODE_IDLE 0, 255, 0
#define DISPLAY_TIMEOUT 600

// ERROR CHECK
#if LED_MODE_BRIGHTNESS == 0
#error LED_MODE_BRIGHTNESS must not be zero!
#endif 
