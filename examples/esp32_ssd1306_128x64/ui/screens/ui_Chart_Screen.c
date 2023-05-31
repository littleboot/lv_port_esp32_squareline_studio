// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: esp32_ssd1306_128x64_test

#include "../ui.h"

void ui_Chart_Screen_screen_init(void)
{
    ui_Chart_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chart_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Chart_Screen, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Chart_Screen, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    ui_chartOne = lv_chart_create(ui_Chart_Screen);
    lv_obj_set_width(ui_chartOne, 128);
    lv_obj_set_height(ui_chartOne, 64);
    lv_obj_set_x(ui_chartOne, -9);
    lv_obj_set_y(ui_chartOne, -9);
    lv_obj_set_align(ui_chartOne, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_chartOne, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_chartOne, LV_CHART_AXIS_PRIMARY_X, 0, 0, 0, 0, false, 10);
    lv_chart_set_axis_tick(ui_chartOne, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 0, 0, false, 50);
    lv_chart_set_axis_tick(ui_chartOne, LV_CHART_AXIS_SECONDARY_Y, 0, 0, 5, 2, false, 25);
    lv_chart_series_t * ui_chartOne_series_1 = lv_chart_add_series(ui_chartOne, lv_color_hex(0x000000),
                                                                   LV_CHART_AXIS_SECONDARY_Y);
    static lv_coord_t ui_chartOne_series_1_array[] = { 0, 10, 20, 40, 80, 80, 40, 20, 10, 0 };
    lv_chart_set_ext_y_array(ui_chartOne, ui_chartOne_series_1, ui_chartOne_series_1_array);
    lv_obj_set_style_radius(ui_chartOne, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_chartOne, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chartOne, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Chart_Screen, ui_event_Chart_Screen, LV_EVENT_ALL, NULL);

}
