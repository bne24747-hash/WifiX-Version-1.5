/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once

#define STROBE 2
#define NYALA HIGH
#define MATI LOW
#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

// =================================================================================================
// BOARD SETTINGS (WEMOS D1 MINI)
// =================================================================================================
#define WEMOS_D1_MINI 

// Reset settings wajib aktif buat flash pertama biar config lama ilang
#define RESET_SETTINGS 
// Jangan aktifkan FORMAT_EEPROM karena fungsi format di .ino lo minta 2 argumen
// #define FORMAT_EEPROM 

#if defined(WEMOS_D1_MINI)
 // Pakai GPIO asli (15 = D8) biar nggak tabrakan macro pin board
 #define LED_NEOPIXEL
 #define LED_NUM 1
 #define LED_NEOPIXEL_PIN 15 
 #define LED_MODE_BRIGHTNESS 10
 #define USE_LED true
 
 #define INTRO_STR "WifiX v1.5"
 #define USE_DISPLAY false 
 #define FLIP_DIPLAY true
 #define DISPLAY_TEXT "WifiX Monster"
 
 #define SH1106_I2C
 #define I2C_ADDR 0x3C
 #define I2C_SDA 4
 #define I2C_SCL 5
 
 // Pakai GPIO asli untuk tombol
 #define BUTTON_UP 14   
 #define BUTTON_DOWN 12 
 #define BUTTON_A 13    
 #define BUTTON_B 0     
 #define RESET_BUTTON 255
#endif

// =================================================================================================
// CORE DEFINITIONS (Agar file lain nggak 'Not Declared')
// =================================================================================================
#define DEAUTHER_VERSION "2.6.1"
#define DEAUTHER_VERSION_MAJOR 2
#define DEAUTHER_VERSION_MINOR 6
#define DEAUTHER_VERSION_REVISION 1

#define EEPROM_SIZE 4096
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100

#define ATTACK_ALL_CH false
#define RANDOM_TX false
#define ATTACK_TIMEOUT 0
#define DEAUTHS_PER_TARGET 25
#define DEAUTH_REASON 1
#define PROBE_FRAMES_PER_SSID 1
#define BEACON_INTERVAL_100MS true
#define CH_TIME 200
#define MIN_DEAUTH_FRAMES 3

#define AP_SSID "WifiX-MONSTER"
#define AP_PASSWD "deauther"
#define AP_HIDDEN false

// FIX FORMAT IP ADDRESS
#define AP_IP_ADDR {192, 168, 4, 1}
#define WEB_IP_ADDR 192, 168, 4, 1

#define WEB_ENABLED true
#define WEB_CAPTIVE_PORTAL false
#define WEB_USE_SPIFFS false  
#define DEFAULT_LANG "en"
#define WEB_URL "deauth.me"
#define CLI_ENABLED true
#define CLI_ECHO true

#define LED_MODE_OFF 0, 0, 0
#define LED_MODE_SCAN 0, 0, 255
#define LED_MODE_ATTACK 255, 0, 0
#define LED_MODE_IDLE 0, 255, 0
#define DISPLAY_TIMEOUT 600
