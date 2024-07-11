

/*
 * @Author: yangxu
 * @Date: 2024-06-18 21:18:45
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-06-19 23:23:57
 * @FilePath: \lv_pc_v8.3\lvgl\demos\my_gui.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "my_gui.h"
#include "../lvgl.h"
/**
 * @description: 
 * @return 
 */

static lv_style_t style;//样式的必须是静态全句变量，不然执行后会被销毁
void demo_switch()
{
  lv_obj_t* switch_obj=lv_switch_create(lv_scr_act());
  lv_obj_set_size(switch_obj,120,60);
  lv_obj_align(switch_obj,LV_ALIGN_CENTER,0,0);
  lv_obj_set_pos(switch_obj,50,100);
}

void demo_style()
{
    lv_style_init(&style);//初始化样式
    lv_style_set_bg_color(&style,lv_color_hex(0xf4b183));//设置样式的背景颜色
    lv_obj_t* sreen=lv_obj_create(lv_scr_act());//获取活动窗口
    lv_obj_set_size(sreen,240,296);
    lv_obj_add_style(sreen,&style,LV_STATE_DEFAULT);//添加样式
    
}

void my_gui(void)
{
    demo_style();
   demo_switch();
}