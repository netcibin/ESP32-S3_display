#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "../zx_ui.h"

// screen_init member
typedef struct {
    lv_obj_t* main;
    lv_obj_t* image_logo;
} screen_init_t;

extern screen_init_t screen_init;
extern zx_screen_t zx_screen_init;

// screen_main member
typedef struct {
    lv_obj_t* main;
    lv_obj_t* button_lights;
    lv_obj_t* button_ac;
    lv_obj_t* lab_date_time;
} screen_main_t;

extern screen_main_t screen_main;
extern zx_screen_t zx_screen_main;

// screen_aircon member
typedef struct {
    lv_obj_t* main;
    lv_obj_t* container_ac_1;
    lv_obj_t* image_ac_back;
    lv_obj_t* image_fan_high;
    lv_obj_t* image_fan_med;
    lv_obj_t* image_fan_low;
    lv_obj_t* image_power;
    lv_obj_t* image_temp_up;
    lv_obj_t* image_temp_down;
    lv_obj_t* lab_temp_data;
    lv_obj_t* lab_degree_text;
    lv_obj_t* lab_hum_text;
    lv_obj_t* lab_hum_data;
    lv_obj_t* lab_hum_symbol;
    lv_obj_t* lab_set_temp;
    lv_obj_t* lab_fan_text;
} screen_aircon_t;

extern screen_aircon_t screen_aircon;
extern zx_screen_t zx_screen_aircon;

// screen_lights member
typedef struct {
    lv_obj_t* main;
    lv_obj_t* image_lights_ba;
    lv_obj_t* image_light_sw1;
    lv_obj_t* lab_light_sw1;
    lv_obj_t* image_light_sw2;
    lv_obj_t* lab_light_sw2;
    lv_obj_t* image_light_sw3;
    lv_obj_t* lab_light_sw3;
    lv_obj_t* image_master_sw;
    lv_obj_t* lab_master;
    lv_obj_t* image_dnd_sw;
    lv_obj_t* lab_dnd;
    lv_obj_t* image_mur_sw;
    lv_obj_t* lab_mur;
} screen_lights_t;

extern screen_lights_t screen_lights;
extern zx_screen_t zx_screen_lights;

#ifdef __cplusplus
}
#endif