#include "zx_screens.h"

screen_lights_t screen_lights;
static void image_lights_ba_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_main, 1);
    }
}

static void image_light_sw2_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_light_sw3_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_master_sw_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static void image_mur_sw_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {}
}

static lv_obj_t* image_lights_ba_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 5, 8);
    lv_obj_set_size(image, 70, 70);
    lv_img_set_src(image, &img_img_back_btn);
    // set style
    lv_obj_add_event_cb(image, image_lights_ba_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* image_light_sw1_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 104, 56);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_light_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    return image;
}

static lv_obj_t* lab_light_sw1_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 90, 136);
    lv_obj_set_size(label, 110, 30);
    lv_label_set_text(label, "Pendant");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* image_light_sw2_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 104, 200);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_light_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(image, image_light_sw2_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* lab_light_sw2_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 89, 280);
    lv_obj_set_size(label, 110, 30);
    lv_label_set_text(label, "Reading");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* image_light_sw3_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 104, 343);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_light_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(image, image_light_sw3_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* lab_light_sw3_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 81, 423);
    lv_obj_set_size(label, 125, 30);
    lv_label_set_text(label, "Bed Lamp");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* image_master_sw_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 295, 56);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_master_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(image, image_master_sw_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* lab_master_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 295, 136);
    lv_obj_set_size(label, 80, 30);
    lv_label_set_text(label, "Master");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* image_dnd_sw_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 295, 200);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_dnd_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    return image;
}

static lv_obj_t* lab_dnd_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 253, 280);
    lv_obj_set_size(label, 170, 30);
    lv_label_set_text(label, "Do not disturb");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* image_mur_sw_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 295, 343);
    lv_obj_set_size(image, 80, 80);
    lv_img_set_src(image, &img_img_mur_off);
    // set style
    lv_obj_set_style_shadow_width(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(image, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(image, image_mur_sw_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* lab_mur_create(lv_obj_t* parent) {
    lv_obj_t* label = lv_label_create(parent);
    lv_obj_set_pos(label, 253, 423);
    lv_obj_set_size(label, 170, 30);
    lv_label_set_text(label, "Make up room");
    // set style
    lv_obj_set_style_text_color(label, lv_color_hex(0xd9d4d4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, &montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    const lv_font_t* font = lv_obj_get_style_text_font(label, LV_PART_MAIN);
    ((lv_label_t*)label)->offset.y = (lv_obj_get_style_height(label, LV_PART_MAIN) - lv_font_get_line_height(font)) / 2;

    return label;
}

static lv_obj_t* screen_lights_create(lv_obj_t* parent) {
    lv_obj_t* page = lv_obj_create(parent);
    lv_obj_set_scrollbar_mode(page, LV_SCROLLBAR_MODE_OFF);

    screen_lights.image_lights_ba = image_lights_ba_create(page);
    screen_lights.image_light_sw1 = image_light_sw1_create(page);
    screen_lights.lab_light_sw1 = lab_light_sw1_create(page);
    screen_lights.image_light_sw2 = image_light_sw2_create(page);
    screen_lights.lab_light_sw2 = lab_light_sw2_create(page);
    screen_lights.image_light_sw3 = image_light_sw3_create(page);
    screen_lights.lab_light_sw3 = lab_light_sw3_create(page);
    screen_lights.image_master_sw = image_master_sw_create(page);
    screen_lights.lab_master = lab_master_create(page);
    screen_lights.image_dnd_sw = image_dnd_sw_create(page);
    screen_lights.lab_dnd = lab_dnd_create(page);
    screen_lights.image_mur_sw = image_mur_sw_create(page);
    screen_lights.lab_mur = lab_mur_create(page);
    // set style
    lv_obj_set_style_bg_color(page, lv_color_hex(0x2b5b8b), LV_PART_MAIN | LV_STATE_DEFAULT);

    screen_lights.main = page;
    return page;
}

static int screen_lights_delete(void) {
    if (screen_lights.main) {
        lv_obj_del_async(screen_lights.main);
        screen_lights.main = NULL;
    }
    return 0;
}

zx_screen_t zx_screen_lights = {
    .create = screen_lights_create,
    .del = screen_lights_delete,
};