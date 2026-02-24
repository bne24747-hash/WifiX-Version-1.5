/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once
#define STROBE 2
  #define NYALA HIGH
  #define MATI LOW
#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

// =================================================================================================
// PILIHAN BOARD (FIXED FOR WEMOS D1 MINI)
// =================================================================================================
#define WEMOS_D1_MINI 

// RESET SETTINGS (Wajib aktif di flash pertama biar memori bersih)
#define RESET_SETTINGS 
#define FORMAT_SPIFFS
#define FORMAT_EEPROM

// ========== CONFIGS ========== //

#if defined(WEMOS_D1_MINI)
 #define LED_NEOPIXEL_GRB
 #define LED_NUM 1
 #define LED_NEOPIXEL_PIN D8
 #define LED_MODE_BRIGHTNESS 5
 #define INTRO_STR "WifiX v1.5"
 
 // --- FIX VARIABEL ERROR DISINI ---
 #define USE_DISPLAY false 
 #define FLIP_DIPLAY true   // Ini yang tadi bikin error
 #define DISPLAY_TEXT "WifiX Monster" // Ini juga yang tadi bikin error
 // ---------------------------------

 #define SH1106_I2C
 #define I2C_ADDR 0x3C
 #define I2C_SDA 4
 #define I2C_SCL 5
 #define BUTTON_UP D5   
 #define BUTTON_DOWN D6 
 #define BUTTON_A D4     
 #define BUTTON_B D3     
#endif

// =================================================================================================
// PENGATURAN WEB INTERFACE (MENGGUNAKAN WEBFILES.H)
// =================================================================================================

#ifndef WEB_ENABLED
  #define WEB_ENABLED true
#endif

// Karena di folder lo ada webfiles.h, kita pakai mode internal (false)
#ifndef WEB_USE_SPIFFS
  #define WEB_USE_SPIFFS false 
#endif

#ifndef AP_SSID
  #define AP_SSID "WifiX-MONSTER"
#endif 

#ifndef AP_PASSWD
  #define AP_PASSWD "deauther"
#endif

#ifndef WEB_URL
  #define WEB_URL "deauth.me"
#endif

#ifndef WEB_IP_ADDR
  #define WEB_IP_ADDR (192, 168, 4, 1)
#endif

#define DEAUTHER_VERSION "2.6.1"

// ERROR CHECK
#if LED_MODE_BRIGHTNESS == 0
#error LED_MODE_BRIGHTNESS must not be zero!
#endif 
