/*!
 * \file      hw_modem_pin_names.h
 *
 * \brief     Hardware modem specific pinout
 *
 * Revised BSD License
 * Copyright Semtech Corporation 2020. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Semtech corporation nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL SEMTECH CORPORATION BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __HW_MODEM_PIN_NAMES_H__
#define __HW_MODEM_PIN_NAMES_H__

#ifdef __cplusplus
extern "C" {
#endif

/********************************************************************************/
/*                         Application     dependant                            */
/********************************************************************************/
// clang-format off

// Nucleo L073 board with Semtech sx1280 shield
#define NOT_CONNECTED           PD_2

//Debug uart specific pinout for debug print
#define DEBUG_UART_TX           PA_2
#define DEBUG_UART_RX           PA_3

//Radio specific pinout and peripherals
#define RADIO_SPI_MOSI          PA_7
#define RADIO_SPI_MISO          PA_6
#define RADIO_SPI_SCLK          PA_5
#define RADIO_NSS               PA_8
#define RADIO_NRST              PA_0
#define RADIO_DIOX              PB_4
#define RADIO_BUSY_PIN          PB_3

#define RADIO_ANTENNA_SWITCH    PB_0  // For board with 2 antennas

//Hw modem specific pinout
#define HW_MODEM_COMMAND_PIN    PB_5
#define HW_MODEM_EVENT_PIN      PB_10
#define HW_MODEM_BUSY_PIN       PA_1
#define HW_MODEM_TX_LINE        PA_9
#define HW_MODEM_RX_LINE        PA_10

//Optional available debug pins
#define DEBUG_PIN_1             PC_8
#define DEBUG_PIN_2             PC_6
#define DEBUG_PIN_3             PC_5
#define DEBUG_PIN_4             PC_10
#define DEBUG_PIN_5             PC_11
#define DEBUG_PIN_6             PC_12

// clang-format on

#ifdef __cplusplus
}
#endif

#endif  //__HW_MODEM_PIN_NAMES_H__
