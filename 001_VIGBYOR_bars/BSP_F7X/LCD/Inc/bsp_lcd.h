/*
 * bsp_lcd.h
 *
 *  Created on: Mar 21, 2025
 *      Author: Nemanja Djekic
 */

#ifndef BSP_LCD_H_
#define BSP_LCD_H_

#include"stm32f746xx.h"
#include "reg_util.h"
#include "board.h"

extern GPIO_TypeDef *ltdc_io_ports[];
extern const uint8_t ltdc_pins[];
extern const uint8_t total_ltdc_pins;

#endif /* BSP_LCD_H_ */
