// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2023 The Pybricks Authors

#include "stm32f070xb.h"

#define MICROPY_HW_BOARD_NAME                   "BOOST Move Hub"
#define MICROPY_HW_MCU_NAME                     "STM32F070RB"

#define PYBRICKS_HUB_NAME                       "movehub"
#define PYBRICKS_HUB_CLASS_NAME                 (MP_QSTR_MoveHub)
#define PYBRICKS_HUB_MOVEHUB                    (1)

// ------------------------------------------------------------
// Pybricks core modules (keep essentials small)
// ------------------------------------------------------------
#define PYBRICKS_PY_COMMON                      (1)
#define PYBRICKS_PY_COMMON_BLE                  (1)
#define PYBRICKS_PY_COMMON_CHARGER              (0)
#define PYBRICKS_PY_COMMON_COLOR_LIGHT          (1)
#define PYBRICKS_PY_COMMON_CONTROL              (0)
#define PYBRICKS_PY_COMMON_IMU                  (0)
#define PYBRICKS_PY_COMMON_KEYPAD               (0)
#define PYBRICKS_PY_COMMON_KEYPAD_HUB_BUTTONS   (0)
#define PYBRICKS_PY_COMMON_LIGHT_ARRAY          (1)
#define PYBRICKS_PY_COMMON_LIGHT_MATRIX         (0)
#define PYBRICKS_PY_COMMON_LOGGER               (0)
#define PYBRICKS_PY_COMMON_MOTOR_MODEL          (0)
#define PYBRICKS_PY_COMMON_MOTORS               (1)
#define PYBRICKS_PY_COMMON_SYSTEM               (1)

#define PYBRICKS_PY_EXPERIMENTAL                (0)

// ------------------------------------------------------------
// Higher-level modules
// ------------------------------------------------------------
#define PYBRICKS_PY_HUBS                        (1)
#define PYBRICKS_PY_IODEVICES                   (1)
#define PYBRICKS_PY_PARAMETERS                  (1)
#define PYBRICKS_PY_PARAMETERS_BUTTON           (1)
#define PYBRICKS_PY_PARAMETERS_BUTTON_REMOTE_ONLY (0)
#define PYBRICKS_PY_PARAMETERS_ICON             (0)
#define PYBRICKS_PY_PARAMETERS_IMAGE            (0)
#define PYBRICKS_PY_DEVICES                     (1)

// Powered Up device support (you need motors + color sensor)
#define PYBRICKS_PY_PUPDEVICES                  (1)
#define PYBRICKS_PY_PUPDEVICES_REMOTE           (0)

// ------------------------------------------------------------
// REMOVE ROBOTICS COMPLETELY (saves flash + fixes link error)
// ------------------------------------------------------------
#define PYBRICKS_PY_ROBOTICS                    (0)
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_GYRO     (0)
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_SPIKE    (0)

// ------------------------------------------------------------
// Tools (needed for wait(), timers, utility functions)
// ------------------------------------------------------------
#define PYBRICKS_PY_TOOLS                       (1)
#define PYBRICKS_PY_TOOLS_HUB_MENU              (0)
#define PYBRICKS_PY_TOOLS_APP_DATA              (0)

// ------------------------------------------------------------
// Options — keep all minimal
// ------------------------------------------------------------
#define PYBRICKS_OPT_COMPILER                   (0)
#define PYBRICKS_OPT_USE_STACK_END_AS_TOP       (1)
#define PYBRICKS_OPT_RAW_REPL                   (0)
#define PYBRICKS_OPT_FLOAT                      (0)
#define PYBRICKS_OPT_TERSE_ERR                  (0)
#define PYBRICKS_OPT_EXTRA_LEVEL1               (0)
#define PYBRICKS_OPT_EXTRA_LEVEL2               (0)
#define PYBRICKS_OPT_CUSTOM_IMPORT              (1)
#define PYBRICKS_OPT_NATIVE_MOD                 (0)

// ------------------------------------------------------------
// Load common MicroPython configuration
// ------------------------------------------------------------
#include "../_common/mpconfigport.h"

// ------------------------------------------------------------
// Enable bytearray WITHOUT enabling whole EXTRA_LEVEL1
// ------------------------------------------------------------
#undef MICROPY_PY_BUILTINS_BYTEARRAY
#define MICROPY_PY_BUILTINS_BYTEARRAY (1)

// ------------------------------------------------------------
// FULL ROBOTICS REMOVAL (Fixes linker error)
// ------------------------------------------------------------

// Remove robotics module table entry
#undef PB_MODULE_ROBOTICS
#define PB_MODULE_ROBOTICS

// Remove robotics init hook if it exists
#undef PB_DEFINE_ROBOTICS
#define PB_DEFINE_ROBOTICS