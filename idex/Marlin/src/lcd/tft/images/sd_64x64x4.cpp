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

extern const uint8_t sd_64x64x4[2048] = { /* 0X80,0X04,0X40,0X00,0X40,0X00, */
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XCC,0XCC,0XCC,0XCC,0XCC,
0XC8,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X88,0X8F,0XC8,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X88,0XFF,0XFF,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X8F,0XFF,0XFF,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X8F,0XFF,0XFF,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X8C,0XFF,0XFF,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0XFF,0XF8,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,0X88,0X8F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X8F,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0XCC,0XCC,0XCF,0XCC,0XCC,
0XC8,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XCF,0XC8,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XCF,0X88,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8C,0XFF,0XF8,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8C,0XCF,0XFF,0XFF,0XCC,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8C,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XF8,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XC8,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X8C,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8C,0XCF,0XFF,0XFF,0XCC,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,
0X88,0X88,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC8,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC8,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC8,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XC8,0X88,0X88,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XFF,0XFC,0X88,
0X88,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0XCC,0XC8,0X88,
0X88,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XC8,0X88,0X88,0X88,0XFF,0XFC,0XCC,0XCC,0XCC,0XCC,0XCC,0XCC,0XCC,0XCC,
0XCC,0XCC,0XCC,0XCC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
};








#endif // HAS_GRAPHICAL_TFT
