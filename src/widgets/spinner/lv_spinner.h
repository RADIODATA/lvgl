/**
 * @file lv_spinner.h
 *
 */

#ifndef LV_SPINNER_H
#define LV_SPINNER_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../../lvgl.h"

#if LV_USE_SPINNER

/*Testing of dependencies*/
#if LV_USE_ARC == 0
#error "lv_spinner: lv_arc is required. Enable it in lv_conf.h (LV_USE_ARC  1) "
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
LV_ATTRIBUTE_EXTERN_DATA extern const lv_obj_class_t lv_spinner_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * lv_spinner_create(lv_obj_t * parent);


void lv_spinner_set_anim_params(lv_obj_t * obj, uint32_t t, uint32_t angle);

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_SPINNER*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_SPINNER_H*/
