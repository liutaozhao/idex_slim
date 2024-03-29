/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t settings_64x64x4[2048] =  { /* 0X00,0X04,0X40,0X00,0X40,0X00, */
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X9C,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XC9,0X88,0X88,0X88,
0X88,0X88,0X8C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC8,0X88,0X88,
0X88,0X88,0XDF,0XFC,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XCF,0XFD,0X88,0X88,
0X88,0X8C,0XFF,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XFF,0XC8,0X88,
0X88,0X9F,0XF9,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X9F,0XF9,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8C,0XFC,0X88,
0X88,0XEF,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XFE,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XEF,0XFF,
0XFF,0XFF,0XA8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFF,
0XFF,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8A,0XA8,0X88,0X88,0XFF,0XFF,
0XFF,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XBF,0XFA,0X88,0X88,0XFF,0XFE,
0XDF,0XFF,0XF8,0X88,0X8A,0XFF,0XB8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8C,0XFF,0XFF,0XA8,0X89,0XFF,0XFB,
0X8B,0XFF,0XF9,0X88,0XAF,0XFF,0XFC,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XDF,0XFF,0XFF,0XFB,0XAD,0XFF,0XFA,
0X8A,0XFF,0XFD,0XAB,0XFF,0XFF,0XFF,0XD8,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,
0X8A,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X98,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XDF,0XFF,0XFC,0XEF,0XFF,0XFF,0XFF,0XF9,
0X89,0XFF,0XFF,0XFF,0XFF,0XEC,0XFF,0XFF,0XF9,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XEF,0XFF,0XD8,0X8E,0XFF,0XFF,0XFD,0XB8,
0X88,0XBD,0XFF,0XFF,0XFE,0X88,0XDF,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XBF,0XFF,0XF8,0X88,0XEF,0XEA,0X88,0X88,
0X88,0X88,0X8A,0XEF,0XE8,0X88,0XFF,0XFF,0XB8,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8D,0XFF,0XFD,0X88,0X8A,0X88,0X88,0X88,
0X88,0X88,0X88,0X8A,0X88,0X8D,0XFF,0XFD,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFF,0XB8,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0XBF,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XBF,0XFF,0XC8,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0XEF,0XFF,0XD8,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X89,0X99,0X88,0X8C,0XFF,0X98,0X88,0X88,0X88,0XAC,
0XCC,0XA8,0X88,0X88,0X88,0X9F,0XFF,0XF9,0X89,0X99,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0XDF,0XFF,0XFF,0XFD,0X98,0X88,0X88,0X88,0XBF,0XFF,
0XFF,0XFF,0XB8,0X88,0X88,0X8B,0XFF,0XFF,0XFF,0XFF,0XD8,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X89,0XFF,0XFF,0XFF,0XFF,0XB8,0X88,0X88,0X88,0XFF,0XFF,
0XFF,0XFF,0XFE,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XF9,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8A,0XFF,0XFF,0XFF,0XFF,0XB8,0X88,0X88,0X88,0XFF,0XFF,
0XFF,0XFF,0XFF,0XD8,0X88,0X88,0XBF,0XFF,0XFF,0XFF,0XFA,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8B,0XFF,0XFD,0XDD,0XEC,0X88,0X88,0X88,0X88,0XAD,0XCA,
0X99,0XCF,0XFF,0XFB,0X88,0X88,0X8C,0XED,0XDD,0XFF,0XFB,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8D,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X89,0XFF,0XFF,0X88,0X88,0X88,0X88,0X88,0XFF,0XFD,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8E,0XFF,0XFA,0X88,0X88,0X88,0X88,0X89,0XA8,0X88,0X88,
0X88,0X88,0XDF,0XFF,0X98,0X88,0X88,0X88,0X8A,0XFF,0XFE,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFE,0XB8,0X88,0X88,0X9F,0XFF,0X88,0X88,
0X88,0X88,0XAF,0XFF,0XB8,0X88,0X88,0XBE,0XFF,0XFF,0XFF,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X8E,0XFF,0XFF,0XFF,0XFC,0X88,0X88,0XBF,0XFF,0X98,0X88,
0X88,0X88,0X9F,0XFF,0XB8,0X88,0X8C,0XFF,0XFF,0XFF,0XFE,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X89,0XDF,0XFF,0XFF,0XFC,0X88,0X88,0XBF,0XFF,0XA8,0X88,
0X88,0X88,0XAF,0XFF,0XB8,0X88,0X8C,0XFF,0XFF,0XFF,0XD9,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X9C,0XFF,0XFD,0X88,0X88,0X9F,0XFF,0XD8,0X88,
0X88,0X88,0XDF,0XFF,0X98,0X88,0X8D,0XFF,0XFC,0X98,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFE,0X88,0X88,0X8F,0XFF,0XFB,0X88,
0X88,0X8B,0XFF,0XFF,0X88,0X88,0X8E,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XEF,0XFF,0X88,0X88,0X8B,0XFF,0XFF,0XDA,
0X99,0XDF,0XFF,0XFC,0X88,0X88,0X8F,0XFF,0XE8,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X9F,0XFF,0XFF,0XB8,0X88,0X88,0XDF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF8,0X88,0X88,0XBF,0XFF,0XFF,0X98,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X8B,0XFF,0XFF,0XFD,0X88,0X88,0X88,0X8E,0XFF,0XFF,
0XFF,0XFF,0XFF,0X98,0X88,0X88,0X8D,0XFF,0XFF,0XFB,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0XAF,0XFF,0XFF,0XB8,0X88,0X88,0X88,0X88,0XBF,0XFF,
0XFF,0XFF,0XC8,0X88,0X88,0X88,0X88,0XBF,0XFF,0XFF,0XA8,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0XCF,0XFF,0XF9,0X88,0X88,0X88,0X88,0X88,0X88,0XAC,
0XCC,0XA8,0X88,0X88,0X88,0X88,0X88,0X89,0XFF,0XFF,0XC8,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X9F,0XFF,0XF8,0X8B,0XEF,0XE8,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0XEF,0XEB,0X88,0XFF,0XFF,0X98,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X8C,0XFF,0XFE,0XFF,0XFF,0XFE,0X98,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X9E,0XFF,0XFF,0XFE,0XFF,0XFC,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFA,0X88,0X88,0X88,
0X88,0X88,0X88,0X8A,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC8,0X88,0X88,
0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XB8,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8E,0XFF,0XFD,0X9A,0XFF,0XFF,0XB8,0X8A,0XBB,
0XAB,0XBA,0X88,0XBF,0XFF,0XFA,0X9D,0XFF,0XFE,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X89,0XDC,0X98,0X88,0XCF,0XFF,0X98,0X8F,0XFF,
0XFF,0XFF,0X88,0X9F,0XFF,0XC8,0X88,0X9C,0XD9,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XEF,0XFF,0X88,0XCF,0XFF,
0XFF,0XFF,0XC8,0X8F,0XFF,0XE8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFD,0X88,0XFF,0XFF,
0XFF,0XFF,0XF8,0X8D,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8A,0XFF,0XFF,0XBC,0XFF,0XFD,
0XBD,0XFF,0XFC,0XBF,0XFF,0XFA,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8C,0XFF,0XFF,0XFF,0XFF,0XF8,
0X88,0XFF,0XFF,0XFF,0XFF,0XFB,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8B,0XFF,0XFF,0XFF,0XFF,0XD8,
0X88,0XDF,0XFF,0XFF,0XFF,0XF8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8B,0XEF,0XFF,0XFF,0X98,
0X88,0X9F,0XFF,0XFF,0XEB,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XCE,0XFC,0X88,
0X88,0X8C,0XFE,0XC9,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0X88,
0X88,0XEF,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XFE,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X8C,0XFC,0X88,
0X88,0X9F,0XF9,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X9F,0XF9,0X88,
0X88,0X8C,0XFF,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XFF,0XC8,0X88,
0X88,0X88,0XDF,0XFC,0X98,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X89,0XCF,0XFD,0X88,0X88,
0X88,0X88,0X8C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC8,0X88,0X88,
0X88,0X88,0X88,0X9C,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XC9,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
};



#endif // HAS_GRAPHICAL_TFT
