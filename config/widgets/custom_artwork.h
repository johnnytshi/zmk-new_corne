#pragma once

#include <lvgl.h>
#include <zmk/display/widgets/widget.h>

struct zmk_widget_artwork {
    struct zmk_widget_status status;
    lv_obj_t *obj;
};

int zmk_widget_artwork_init(struct zmk_widget_artwork *widget, lv_obj_t *parent);
int zmk_widget_artwork_draw(struct zmk_widget_artwork *widget);