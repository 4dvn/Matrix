#ifndef MATRIX_VARIABLE
#define MATRIX_VARIABLE

#include <Arduino.h>
#include "../Parameter/MatrixParameter.h"

//enum Modes {Normal, Fn, Animation, Boot, Ascii, App};
//DeviceSetting
extern u8 device_id; //0~255 0 for off
//extern Modes mode;
extern u8 current_keymap;
//extern u8 appID;
extern u8 bootAnimationSelector;
extern bool unipad_mode;
extern bool debug_mode;

//LED setting
extern u8 brightness;
extern u16 max_mAh;
extern u8 brightness_level[8];
extern u32 palette[4][128];
extern u8 led_gamma[256];
extern u8 fps;

//KeyMap
extern u32 keymap_colour[5];
extern u8 keymap [5][YSIZE][XSIZE];
extern u8 bottom_led_map [5][NUM_BOTTOM_LEDS];
extern u8 fn_keymap[5][2][XSIZE];
extern u32 fn_keymap_idle_color[5][2][XSIZE];
extern u32 fn_keymap_active_color[5][2][XSIZE];

extern u8 user1_keymap_optimized[64];
//TouchBar
//extern u8 touch_sensitive;

//Sysex
extern u8 rotation;
extern u8 midi_channel;
extern bool gamma_enable; //Wont effect colour palette
extern bool midi_enable;
extern bool m2p_enable;
extern bool powercord_enable;
extern bool massage_return;

extern u8 report_code[10];
extern u8 available_report_code;
#endif