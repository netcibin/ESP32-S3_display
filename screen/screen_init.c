#include "zx_screens.h"

screen_init_t screen_init;
static void screen_init_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_main, 1);
    }
}

static void image_logo_event(lv_event_t* e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t* target = lv_event_get_target(e);

    if (event_code == LV_EVENT_CLICKED) {
        zx_screen_load(&zx_screen_main, 1);
    }
}

static lv_obj_t* image_logo_create(lv_obj_t* parent) {
    lv_obj_t* image = lv_img_create(parent);
    lv_obj_set_pos(image, 142, 147);
    lv_obj_set_size(image, 200, 200);
    lv_img_set_src(image, &img_img_logo);
    // set style
    lv_obj_add_event_cb(image, image_logo_event, LV_EVENT_ALL, NULL);

    return image;
}

static lv_obj_t* screen_init_create(lv_obj_t* parent) {
    lv_obj_t* page = lv_obj_create(parent);
    lv_obj_set_scrollbar_mode(page, LV_SCROLLBAR_MODE_OFF);

    screen_init.image_logo = image_logo_create(page);
    // set style
    lv_obj_set_style_bg_color(page, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(page, screen_init_event, LV_EVENT_ALL, NULL);

    screen_init.main = page;
    return page;
}

static int screen_init_delete(void) {
    if (screen_init.main) {
        lv_obj_del_async(screen_init.main);
        screen_init.main = NULL;
    }
    return 0;
}

zx_screen_t zx_screen_init = {
    .create = screen_init_create,
    .del = screen_init_delete,
};