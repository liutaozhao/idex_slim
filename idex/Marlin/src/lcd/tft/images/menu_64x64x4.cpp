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

extern const uint8_t menu_64x64x4[2048] = { /* 0X00,0X04,0X40,0X00,0X40,0X00, */
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
0X88,0X9F,0XF9,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X9F,0XF9,0X88,
0X88,0XCF,0XC8,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X8C,0XFC,0X88,
0X88,0XEF,0X98,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X89,0XFE,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X7A,0XFF,0XFF,0XD8,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X8F,0XFF,0XFF,0XFF,0XF7,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0XAF,0XF8,0X8A,0XEF,0XFF,0XA7,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X7F,0XFF,0X77,0X78,0XFF,0XF9,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0XFF,0XF7,0X77,0X7E,0XFF,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X7F,0XFD,0X77,0X77,0XFF,0XD7,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X9A,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0XFF,0X77,0X77,0X9F,0XF7,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X8F,0XFF,0XD7,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X9F,0XFC,0X77,0X77,0X77,0XFF,0X87,0X77,0X7F,0XFA,0X77,
0X77,0X77,0X77,0X77,0X77,0X78,0XFF,0XFF,0XF7,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0XFF,0XFF,0XD7,0X77,0X78,0XFF,0X77,0X77,0X7D,0XFE,0X77,
0X77,0X77,0X77,0X77,0X77,0X7F,0XFE,0XAF,0XF7,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0XFF,0XBF,0XFE,0X77,0X9F,0XFD,0X77,0X77,0X7C,0XFF,0X77,
0X77,0X77,0X77,0X77,0X77,0XFF,0XFA,0XFF,0XB7,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0XFF,0X7A,0XFF,0XFF,0XFF,0XF7,0X77,0X77,0X7C,0XFF,0X77,
0X77,0X77,0X77,0X77,0X7F,0XFF,0XDF,0XFE,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0XFF,0XA7,0X9F,0XFF,0XFE,0X77,0X77,0X77,0X7D,0XFD,0X77,
0X77,0X77,0X77,0X77,0XFF,0XFD,0XFF,0XD7,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0XEF,0XD7,0X77,0X77,0X77,0X77,0X77,0X77,0X7F,0XF9,0X77,
0X77,0X77,0X77,0X7E,0XFF,0XDF,0XFA,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X8F,0XF8,0X77,0X77,0X77,0X77,0X77,0X77,0X8F,0XFE,0X77,
0X77,0X77,0X77,0XFF,0XFD,0XFF,0XB7,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X7F,0XFF,0X77,0X77,0X77,0X77,0X77,0X77,0X79,0XFF,0XE7,
0X77,0X77,0X7E,0XFF,0XDF,0XFB,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X78,0XFF,0XD7,0X77,0X77,0X77,0X77,0X77,0X77,0XAF,0XFC,
0X77,0X77,0XEF,0XFD,0XFF,0XB7,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0XAF,0XFF,0X77,0X77,0X77,0X77,0X77,0X77,0X7A,0XFF,
0X87,0X7E,0XFF,0XDF,0XFB,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X79,0XFF,0XFF,0XB9,0X9C,0X77,0X77,0X77,0X77,0XFF,
0X97,0XEF,0XFD,0XFF,0XC7,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X8E,0XFF,0XFF,0XFF,0XF8,0X77,0X77,0X8F,0XFF,
0X7D,0XFF,0XDF,0XFC,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X9D,0XEF,0XFF,0XFF,0XA7,0X7A,0XFF,0XF7,
0XDF,0XFD,0XFF,0XC7,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XEF,0XFB,0XAF,0XFE,0X7D,
0XFF,0XDF,0XFC,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X7D,0XFF,0XFF,0XD7,0XDF,
0XFA,0X8F,0XFE,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XCF,0XFD,0X7C,0XFF,
0XB7,0X79,0XFF,0XE7,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XCF,0XFB,
0X77,0X77,0X9F,0XFF,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XBC,0XB9,0X7C,0XFF,0XB7,
0X77,0X77,0X79,0XFF,0XF7,0X78,0X99,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X7E,0XFF,0XFF,0XFF,0XFF,0XE7,
0X77,0X77,0X77,0X9F,0XFF,0XFF,0XFF,0XFF,0XB7,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XDF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X77,0X77,0X77,0X78,0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X7D,0XFF,0XA7,0X77,0X79,0XFF,0XFF,
0XE7,0X77,0X77,0X77,0X9E,0X87,0X77,0X7B,0XFF,0XFA,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0XEF,0XFA,0X77,0X77,0X77,0XFF,0X9F,
0XFE,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X7E,0XFF,0X97,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X7D,0XFF,0XA7,0X77,0X77,0X77,0XFF,0X79,
0XFF,0XE7,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0XEF,0XF7,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0XDF,0XFA,0X77,0X77,0X77,0X77,0XFF,0X77,
0X9F,0XFE,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X7F,0XFD,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X7E,0XFF,0XA7,0X77,0X77,0X77,0X77,0XFF,0X87,
0X79,0XFF,0XE7,0X77,0X77,0X77,0X77,0X77,0X77,0X7A,0XFF,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0XEF,0XFA,0X77,0X77,0X77,0X77,0X7C,0XFF,0X77,
0X77,0X9F,0XF9,0X77,0X77,0X77,0X7D,0XFF,0XD7,0X77,0XFF,0X87,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X7E,0XFF,0XA7,0X77,0X77,0X77,0X77,0XBF,0XFB,0X77,
0X77,0X7F,0XF7,0X77,0X77,0X79,0XFF,0XFF,0XFF,0XA7,0XFF,0XA7,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0XDF,0XFA,0X77,0X77,0X77,0X77,0X7C,0XFF,0XC7,0X77,
0X77,0X7F,0XF7,0X77,0X77,0X7F,0XFF,0XBB,0XFF,0XF9,0XEF,0X97,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X79,0XFF,0XA7,0X77,0X77,0X77,0X77,0XCF,0XFC,0X77,0X77,
0X77,0X7F,0XF7,0X77,0X77,0XBF,0XF7,0X77,0X7E,0XFF,0XFF,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X7E,0XFE,0X77,0X77,0X77,0X77,0X7C,0XFF,0XC7,0X77,0X77,
0X77,0X7F,0XFA,0X77,0X77,0XEF,0XB7,0X77,0X77,0XEF,0XFE,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X7F,0XFA,0X77,0X77,0X77,0X77,0XCF,0XFB,0X77,0X77,0X77,
0X77,0X7D,0XFE,0X77,0X77,0XDF,0XC7,0X77,0X77,0X7A,0XA7,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X7F,0XFB,0X77,0X77,0X77,0X7C,0XFF,0XC7,0X77,0X77,0X77,
0X77,0X77,0XFF,0X97,0X77,0XAF,0XF7,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X7D,0XFF,0X77,0X77,0X77,0XCF,0XFC,0X77,0X77,0X77,0X77,
0X77,0X77,0XDF,0XF8,0X77,0X7F,0XFF,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0XFF,0XE7,0X77,0X7C,0XFF,0XB7,0X77,0X77,0X77,0X77,
0X77,0X77,0X7F,0XFF,0XA7,0X77,0XFF,0XF7,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0XAF,0XFF,0XBB,0XFF,0XFC,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0XFF,0XFE,0XA8,0X8F,0XFB,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X79,0XFF,0XFF,0XFF,0XB7,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X7C,0XFF,0XFF,0XFF,0XFA,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X7A,0XEE,0XB7,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X7C,0XFF,0XFF,0XF7,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XFF,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X88,0XFF,0X88,
0X88,0XEF,0X98,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X78,0X89,0XFE,0X88,
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