#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

LV_FONT_DECLARE(montserrat_18);
LV_FONT_DECLARE(montserrat_130);
LV_FONT_DECLARE(montserrat_20);
LV_FONT_DECLARE(montserrat_24);
LV_FONT_DECLARE(montserrat_25);
LV_FONT_DECLARE(montserrat_75);
LV_FONT_DECLARE(montserrat_30);

#ifdef __cplusplus
}
#endif