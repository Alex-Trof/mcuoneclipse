/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_CLKDIV0 0x00u      /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u       /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u       /*!<@brief Input not invert */
#define IOCON_PIO_MODE_PULLUP 0x10u  /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u        /*!<@brief Disables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSWD_DEBUGPins(void); /* Function assigned for the Cortex-M0P */

/*! @name PIO1_1 (number 14), MAG_M0
  @{ */
#define BOARD_INITMAGPINS_MAG_M0_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M0_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMAGPINS_MAG_M0_PIN 1U    /*!<@brief 1U pin index: 1 */
                                           /* @} */

/*! @name PIO0_17 (number 48), MAG_M2
  @{ */
#define BOARD_INITMAGPINS_MAG_M2_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M2_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M2_PIN 17U   /*!<@brief 0U pin index: 17 */
                                           /* @} */

/*! @name PIO0_18 (number 47), MAG_M3
  @{ */
#define BOARD_INITMAGPINS_MAG_M3_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M3_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M3_PIN 18U   /*!<@brief 0U pin index: 18 */
                                           /* @} */

/*! @name PIO0_23 (number 39), MAG_M4
  @{ */
#define BOARD_INITMAGPINS_MAG_M4_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M4_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M4_PIN 23U   /*!<@brief 0U pin index: 23 */
                                           /* @} */

/*! @name PIO0_29 (number 38), MAG_M5
  @{ */
#define BOARD_INITMAGPINS_MAG_M5_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M5_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M5_PIN 29U   /*!<@brief 0U pin index: 29 */
                                           /* @} */

/*! @name PIO1_2 (number 16), MAG_M6
  @{ */
#define BOARD_INITMAGPINS_MAG_M6_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M6_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMAGPINS_MAG_M6_PIN 2U    /*!<@brief 1U pin index: 2 */
                                           /* @} */

/*! @name PIO0_16 (number 15), MAG_M7
  @{ */
#define BOARD_INITMAGPINS_MAG_M7_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M7_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M7_PIN 16U   /*!<@brief 0U pin index: 16 */
                                           /* @} */

/*! @name PIO0_31 (number 9), MAG_M1
  @{ */
#define BOARD_INITMAGPINS_MAG_M1_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMAGPINS_MAG_M1_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMAGPINS_MAG_M1_PIN 31U   /*!<@brief 0U pin index: 31 */
                                           /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitMagPins(void); /* Function assigned for the Cortex-M0P */

/*! @name PIO1_9 (number 3), M0_DIR
  @{ */
#define BOARD_INITMOTORPINS_M0_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M0_DIR_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMOTORPINS_M0_DIR_PIN 9U    /*!<@brief 1U pin index: 9 */
                                             /* @} */

/*! @name PIO1_8 (number 1), M1_STEP
  @{ */
#define BOARD_INITMOTORPINS_M1_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M1_STEP_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMOTORPINS_M1_STEP_PIN 8U    /*!<@brief 1U pin index: 8 */
                                              /* @} */

/*! @name PIO0_13 (number 2), M1_DIR
  @{ */
#define BOARD_INITMOTORPINS_M1_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M1_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M1_DIR_PIN 13U   /*!<@brief 0U pin index: 13 */
                                             /* @} */

/*! @name PIO0_12 (number 4), M0_STEP
  @{ */
#define BOARD_INITMOTORPINS_M0_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M0_STEP_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M0_STEP_PIN 12U   /*!<@brief 0U pin index: 12 */
                                              /* @} */

/*! @name PIO0_4 (number 6), M2_DIR
  @{ */
#define BOARD_INITMOTORPINS_M2_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M2_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M2_DIR_PIN 4U    /*!<@brief 0U pin index: 4 */
                                             /* @} */

/*! @name PIO0_28 (number 7), M2_STEP
  @{ */
#define BOARD_INITMOTORPINS_M2_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M2_STEP_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M2_STEP_PIN 28U   /*!<@brief 0U pin index: 28 */
                                              /* @} */

/*! @name PIO0_26 (number 18), M3_STEP
  @{ */
#define BOARD_INITMOTORPINS_M3_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M3_STEP_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M3_STEP_PIN 26U   /*!<@brief 0U pin index: 26 */
                                              /* @} */

/*! @name PIO0_27 (number 17), M3_DIR
  @{ */
#define BOARD_INITMOTORPINS_M3_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M3_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M3_DIR_PIN 27U   /*!<@brief 0U pin index: 27 */
                                             /* @} */

/*! @name PIO0_0 (number 36), M4_DIR
  @{ */
#define BOARD_INITMOTORPINS_M4_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M4_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M4_DIR_PIN 0U    /*!<@brief 0U pin index: 0 */
                                             /* @} */

/*! @name PIO1_7 (number 35), M4_STEP
  @{ */
#define BOARD_INITMOTORPINS_M4_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M4_STEP_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMOTORPINS_M4_STEP_PIN 7U    /*!<@brief 1U pin index: 7 */
                                              /* @} */

/*! @name PIO0_6 (number 34), M5_DIR
  @{ */
#define BOARD_INITMOTORPINS_M5_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M5_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M5_DIR_PIN 6U    /*!<@brief 0U pin index: 6 */
                                             /* @} */

/*! @name PIO0_7 (number 33), M5_STEP
  @{ */
#define BOARD_INITMOTORPINS_M5_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M5_STEP_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M5_STEP_PIN 7U    /*!<@brief 0U pin index: 7 */
                                              /* @} */

/*! @name PIO1_6 (number 28), M7_STEP
  @{ */
#define BOARD_INITMOTORPINS_M7_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M7_STEP_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMOTORPINS_M7_STEP_PIN 6U    /*!<@brief 1U pin index: 6 */
                                              /* @} */

/*! @name PIO1_5 (number 27), M7_DIR
  @{ */
#define BOARD_INITMOTORPINS_M7_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M7_DIR_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITMOTORPINS_M7_DIR_PIN 5U    /*!<@brief 1U pin index: 5 */
                                             /* @} */

/*! @name PIO0_8 (number 26), M6_DIR
  @{ */
#define BOARD_INITMOTORPINS_M6_DIR_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M6_DIR_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M6_DIR_PIN 8U    /*!<@brief 0U pin index: 8 */
                                             /* @} */

/*! @name PIO0_9 (number 25), M6_STEP
  @{ */
#define BOARD_INITMOTORPINS_M6_STEP_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITMOTORPINS_M6_STEP_PORT 0U   /*!<@brief PORT device name: 0U */
#define BOARD_INITMOTORPINS_M6_STEP_PIN 9U    /*!<@brief 0U pin index: 9 */
                                              /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitMotorPins(void); /* Function assigned for the Cortex-M0P */

/*! @name PIO1_4 (number 23), PIO1_4/CAPT_X5
  @{ */
#define BOARD_INITRS485_RS485_TXRX_EN_GPIO GPIO /*!<@brief GPIO device name: GPIO */
#define BOARD_INITRS485_RS485_TXRX_EN_PORT 1U   /*!<@brief PORT device name: 1U */
#define BOARD_INITRS485_RS485_TXRX_EN_PIN 4U    /*!<@brief 1U pin index: 4 */
                                                /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitRS485(void); /* Function assigned for the Cortex-M0P */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
