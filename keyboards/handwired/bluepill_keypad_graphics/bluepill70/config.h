#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001

//  Modified by Xydane
#define MANUFACTURER "QMK"
#define PRODUCT "BluePillKeypadForGraphics"
#define DESCRIPTION "QMK keyboard firmware with ChibiOS"

/* key matrix size */
//  Modified by Xydane
#define MATRIX_ROWS 3
#define MATRIX_COLS 2
#define DIODE_DIRECTION COL2ROW

// Iso fix for Space Cadet, comment for ANSI layouts
//#define LSPO_KEY KC_8
//#define RSPC_KEY KC_9

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B0 }

//#define ENCODER_DIRECTION_FLIP


