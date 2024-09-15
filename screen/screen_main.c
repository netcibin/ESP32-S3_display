#include "zx_screens.h"

screen_main_t screen_main;
static void button_lights_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_lights, 1);
    }
}

static void button_ac_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_aircon, 1);
    }
}

static lv_obj_t* button_lights_create(lv_obj_t* parent) {
    lv_obj_t* button = NULL;
    button = lv_btn_create(parent);
    lv_obj_set_pos(button, 174, 80);
    lv_obj_set_size(button, 132, 71);
    lv_obj_t* btn_label = lv_label_create(button);
    lv_obj_set_size(btn_label, 100, 51);
    lv_obj_center(btn_label);
    lv_label_set_text(btn_label, "LIGHTS");
    lv_label_set_long_mode(btn_label, LV_LABEL_LONG_CLIP);
    button->user_data = btn_label;
    // set style
    lv_obj_set_style_text_align(btn_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(btn_label, &montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(btn_label, LV_PART_MAIN);
    ((lv_label_t*)btn_label)->offset.y = (lv_obj_get_style_height(btn_label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;
    lv_obj_set_style_bg_color(button, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(button, lv_color_hex(0xfcfafa), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(button, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(button, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(button, button_lights_event, LV_EVENT_ALL, NULL);

    return button;
}

static lv_obj_t* button_ac_create(lv_obj_t* parent) {
    lv_obj_t* button = NULL;
    button = lv_btn_create(parent);
    lv_obj_set_pos(button, 174, 328);
    lv_obj_set_size(button, 132, 71);
    lv_obj_t* btn_label = lv_label_create(button);
    lv_obj_set_size(btn_label, 100, 51);
    lv_obj_center(btn_label);
    lv_label_set_text(btn_label, "AC");
    lv_label_set_long_mode(btn_label, LV_LABEL_LONG_CLIP);
    button->user_data = btn_label;
    // set style
    lv_obj_set_style_text_align(btn_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(btn_label, &montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(btn_label, LV_PART_MAIN);
    ((lv_label_t*)btn_label)->offset.y = (lv_obj_get_style_height(btn_label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;
    lv_obj_set_style_bg_color(button, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(button, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(button, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(button, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(button, button_ac_event, LV_EVENT_ALL, NULL);

    return button;
}

static lv_obj_t* lab_date_time_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 115, 220);
    lv_obj_set_size(label, 249, 40);
    lv_label_set_text(label, "14.09.2024 7:30 PM");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xdfe0da), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_25, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* screen_main_create(lv_obj_t* parent) {
    lv_obj_t* page = lv_obj_create(parent);
    lv_obj_set_scrollbar_mode(page, LV_SCROLLBAR_MODE_OFF);

    screen_main.button_lights = button_lights_create(page);
    screen_main.button_ac = button_ac_create(page);
    screen_main.lab_date_time = lab_date_time_create(page);
    // set style
    lv_obj_set_style_bg_color(page, lv_color_hex(0x2b5b8b), LV_PART_MAIN | LV_STATE_DEFAULT);

    screen_main.main = page;
    return page;
}

static int screen_main_delete(void) {
    if (screen_main.main) {
        lv_obj_del_async(screen_main.main);
        screen_main.main = NULL;
    }
    return 0;
}

zx_screen_t zx_screen_main = {
    .create = screen_main_create,
    .del = screen_main_delete,
};