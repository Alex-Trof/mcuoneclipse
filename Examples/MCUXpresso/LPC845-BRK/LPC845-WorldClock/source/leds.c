/*
 * Copyright (c) 2019, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "platform.h"
#include "leds.h"
#include "McuLED.h"

/* LED on the board */
#if PL_CONFIG_IS_CLIENT /* blue led */
  #define LED_BLUE_GPIO       GPIO
  #define LED_BLUE_PORT       0U
  #define LED_BLUE_PIN        19U
#elif PL_CONFIG_IS_MASTER
  /* LEDs on LPC845-BRK */
  #define LED_GREEN_GPIO      GPIO
  #define LED_GREEN_PORT      1U
  #define LED_GREEN_PIN       0U

  #define LED_BLUE_GPIO       GPIO
  #define LED_BLUE_PORT       1U
  #define LED_BLUE_PIN        1U

  #define LED_RED_GPIO        GPIO
  #define LED_RED_PORT        1U
  #define LED_RED_PIN         2U
#endif

McuLED_Handle_t LEDS_Led;

void LEDS_Deinit(void) {
  LEDS_Led = McuLED_DeinitLed(LEDS_Led);
}

void LEDS_Init(void) {
  McuLED_Config_t config;

  /* initialize LEDs */
  McuLED_GetDefaultConfig(&config);
  config.isLowActive = true;

  config.hw.gpio = LED_BLUE_GPIO;
  config.hw.port = LED_BLUE_PORT;
  config.hw.pin = LED_BLUE_PIN;
  LEDS_Led = McuLED_InitLed(&config);
}
