#include "zx_screens.h"

screen_aircon_t screen_aircon;
static void image_ac_back_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_main, 1);
    }
}

static void image_fan_high_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_fan_med_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_fan_low_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_power_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_temp_up_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_temp_down_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static lv_obj_t* container_ac_1_create(lv_obj_t* parent) {
    lv_obj_t* container = lv_obj_create(parent);
    lv_obj_set_scrollbar_mode(container, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_pos(container, 125, 150);
    lv_obj_set_size(container, 229, 180);

    // set style
    lv_obj_set_style_bg_color(container, lv_color_hex(0x2b5b8b), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(container, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(container, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(container, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    return container;
}

static lv_obj_t* image_ac_back_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 5, 8);
    lv_obj_set_size(image, 70, 70);
    lv_img_set_src(image, &img_img_back_btn);
    // set style
    lv_obj_add_event_cb(image, image_ac_back_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_fan_high_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 405, 115);
    lv_obj_set_size(image, 46, 47);
    lv_img_set_src(image, &img_img_ac_high);
    // set style
    lv_obj_add_event_cb(image, image_fan_high_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_fan_med_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 405, 216);
    lv_obj_set_size(image, 47, 47);
    lv_img_set_src(image, &img_img_ac_med);
    // set style
    lv_obj_add_event_cb(image, image_fan_med_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_fan_low_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 406, 317);
    lv_obj_set_size(image, 47, 47);
    lv_img_set_src(image, &img_img_ac_low);
    // set style
    lv_obj_add_event_cb(image, image_fan_low_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_power_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 200, 8);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_master_off);
    // set style
    lv_obj_add_event_cb(image, image_power_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_temp_up_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 17, 115);
    lv_obj_set_size(image, 70, 70);
    lv_img_set_src(image, &img_img_tmpdown_btn);
    // set style
    lv_obj_add_event_cb(image, image_temp_up_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_temp_down_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 17, 295);
    lv_obj_set_size(image, 70, 70);
    lv_img_set_src(image, &img_img_tmpup_btn);
    // set style
    lv_obj_add_event_cb(image, image_temp_down_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* lab_temp_data_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 165, 185);
    lv_obj_set_size(label, 150, 110);
    lv_label_set_text(label, "25");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xdfe0da), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_130, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* lab_degree_text_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 304, 162);
    lv_obj_set_size(label, 50, 40);
    lv_label_set_text(label, "°C");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    return label;
}

static lv_obj_t* lab_hum_text_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 170, 362);
    lv_obj_set_size(label, 100, 24);
    lv_label_set_text(label, "Humidity:");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xdfe0da), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* lab_hum_data_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 270, 363);
    lv_obj_set_size(label, 24, 24);
    lv_label_set_text(label, "50");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xdfe0da), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* lab_hum_symbol_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 291, 363);
    lv_obj_set_size(label, 24, 24);
    lv_label_set_text(label, "%");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xdfe0da), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* lab_set_temp_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 5, 195);
    lv_obj_set_size(label, 100, 90);
    lv_label_set_text(label, "23");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_75, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* lab_fan_text_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 393, 381);
    lv_obj_set_size(label, 70, 40);
    lv_label_set_text(label, "High");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* screen_aircon_create(lv_obj_t* parent) {
    lv_obj_t* page = lv_obj_create(parent);
    lv_obj_set_scrollbar_mode(page, LV_SCROLLBAR_MODE_OFF);

    screen_aircon.container_ac_1 = container_ac_1_create(page);
    screen_aircon.image_ac_back = image_ac_back_create(page);
    screen_aircon.image_fan_high = image_fan_high_create(page);
    screen_aircon.image_fan_med = image_fan_med_create(page);
    screen_aircon.image_fan_low = image_fan_low_create(page);
    screen_aircon.image_power = image_power_create(page);
    screen_aircon.image_temp_up = image_temp_up_create(page);
    screen_aircon.image_temp_down = image_temp_down_create(page);
    screen_aircon.lab_temp_data = lab_temp_data_create(page);
    screen_aircon.lab_degree_text = lab_degree_text_create(page);
    screen_aircon.lab_hum_text = lab_hum_text_create(page);
    screen_aircon.lab_hum_data = lab_hum_data_create(page);
    screen_aircon.lab_hum_symbol = lab_hum_symbol_create(page);
    screen_aircon.lab_set_temp = lab_set_temp_create(page);
    screen_aircon.lab_fan_text = lab_fan_text_create(page);
    // set style
    lv_obj_set_style_bg_color(page, lv_color_hex(0x2b5b8b), LV_PART_MAIN | LV_STATE_DEFAULT);

    screen_aircon.main = page;
    return page;
}

static int screen_aircon_delete(void) {
    if (screen_aircon.main) {
        lv_obj_del_async(screen_aircon.main);
        screen_aircon.main = NULL;
    }
    return 0;
}

zx_screen_t zx_screen_aircon = {
    .create = screen_aircon_create,
    .del = screen_aircon_delete,
};