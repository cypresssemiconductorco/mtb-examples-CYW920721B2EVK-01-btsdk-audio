/***************************************************************************//**
* File Name: cycfg_gatt_db.h
* Version: 2.0
*
* Description:
* Definitions for constants used in the device's GATT database and function
* prototypes.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 2.0.0 build 1231
*
********************************************************************************
* Copyright 2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#if !defined(CYCFG_GATT_DB_H)
#define CYCFG_GATT_DB_H

#include "stdint.h"

#define __UUID_SERVICE_GENERIC_ACCESS               0x1800
#define __UUID_CHARACTERISTIC_DEVICE_NAME           0x2A00
#define __UUID_CHARACTERISTIC_APPEARANCE            0x2A01
#define __UUID_SERVICE_GENERIC_ATTRIBUTE            0x1801
#define __UUID_SERVICE_BATTERY                      0x180F
#define __UUID_CHARACTERISTIC_BATTERY_LEVEL         0x2A19
#define __UUID_SERVICE_DEVICE_INFORMATION           0x180A
#define __UUID_CHARACTERISTIC_MANUFACTURER_NAME_STRING    0x2A29
#define __UUID_CHARACTERISTIC_MODEL_NUMBER_STRING    0x2A24
#define __UUID_CHARACTERISTIC_FIRMWARE_REVISION_STRING    0x2A26
#define __UUID_CHARACTERISTIC_SOFTWARE_REVISION_STRING    0x2A28

/* Service Generic Access */
#define HDLS_GAP                                    0x01
/* Characteristic Device Name */
#define HDLC_GAP_DEVICE_NAME                        0x02
#define HDLC_GAP_DEVICE_NAME_VALUE                  0x03
/* Characteristic Appearance */
#define HDLC_GAP_APPEARANCE                         0x04
#define HDLC_GAP_APPEARANCE_VALUE                   0x05

/* Service Generic Attribute */
#define HDLS_GATT                                   0x06

/* Service Battery */
#define HDLS_BAS                                    0x07
/* Characteristic Battery Level */
#define HDLC_BAS_BATTERY_LEVEL                      0x08
#define HDLC_BAS_BATTERY_LEVEL_VALUE                0x09

/* Service Device Information */
#define HDLS_DIS                                    0x0A
/* Characteristic Manufacturer Name String */
#define HDLC_DIS_MANUFACTURER_NAME_STRING           0x0B
#define HDLC_DIS_MANUFACTURER_NAME_STRING_VALUE     0x0C
/* Characteristic Model Number String */
#define HDLC_DIS_MODEL_NUMBER_STRING                0x0D
#define HDLC_DIS_MODEL_NUMBER_STRING_VALUE          0x0E
/* Characteristic Firmware Revision String */
#define HDLC_DIS_FIRMWARE_REVISION_STRING           0x0F
#define HDLC_DIS_FIRMWARE_REVISION_STRING_VALUE     0x10
/* Characteristic Software Revision String */
#define HDLC_DIS_SOFTWARE_REVISION_STRING           0x11
#define HDLC_DIS_SOFTWARE_REVISION_STRING_VALUE     0x12

/* External Lookup Table Entry */
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table_t;

/* External definitions */
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table_t app_gatt_db_ext_attr_tbl[];
extern const uint16_t app_gatt_db_ext_attr_tbl_size;
extern uint8_t app_gap_device_name[];
extern const uint16_t app_gap_device_name_len;
extern uint8_t app_gap_appearance[];
extern const uint16_t app_gap_appearance_len;
extern uint8_t app_bas_battery_level[];
extern const uint16_t app_bas_battery_level_len;
extern uint8_t app_dis_manufacturer_name_string[];
extern const uint16_t app_dis_manufacturer_name_string_len;
extern uint8_t app_dis_model_number_string[];
extern const uint16_t app_dis_model_number_string_len;
extern uint8_t app_dis_firmware_revision_string[];
extern const uint16_t app_dis_firmware_revision_string_len;
extern uint8_t app_dis_software_revision_string[];
extern const uint16_t app_dis_software_revision_string_len;

#endif /* CYCFG_GATT_DB_H */
