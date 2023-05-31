// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: esp32_ssd1306_128x64_test

#include "../ui.h"

void ui_Loading_Screen_screen_init(void)
{
    ui_Loading_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Loading_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Loading_Screen, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Loading_Screen, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    ui_lblLoading = lv_label_create(ui_Loading_Screen);
    lv_obj_set_width(ui_lblLoading, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblLoading, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblLoading, -27);
    lv_obj_set_y(ui_lblLoading, 182);
    lv_obj_set_align(ui_lblLoading, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblLoading, "Loading");
    lv_obj_set_style_text_font(ui_lblLoading, &ui_font_MontserratSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_spinnerLoading = lv_spinner_create(ui_Loading_Screen, 1000, 90);
    lv_obj_set_width(ui_spinnerLoading, 16);
    lv_obj_set_height(ui_spinnerLoading, 16);
    lv_obj_set_x(ui_spinnerLoading, -87);
    lv_obj_set_y(ui_spinnerLoading, -17);
    lv_obj_clear_flag(ui_spinnerLoading, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_spinnerLoading, 21, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_spinnerLoading, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_spinnerLoading, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_spinnerLoading, 2, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Loading_Screen, ui_event_Loading_Screen, LV_EVENT_ALL, NULL);

}
