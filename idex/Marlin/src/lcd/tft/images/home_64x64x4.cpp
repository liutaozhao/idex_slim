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

extern const uint8_t home_64x64x4[2048] ={ /* 0X00,0X04,0X40,0X00,0X40,0X00, */
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X7F,
0XFA,0X43,0X34,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X8F,0XFF,
0XFF,0XF9,0X62,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X32,0X7D,0XFF,0XFF,
0XFF,0XFF,0XFA,0X43,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF9,0X53,0X34,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X3D,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF9,0X52,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XDB,0XFF,
0XFF,0XBA,0XFF,0XFF,0XFF,0XE9,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XF9,0X34,0XFF,
0XFF,0X62,0X7C,0XFF,0XFF,0XFF,0XF8,0X43,0X34,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XEB,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X7D,0XFF,0XFF,0XFF,0XF8,0X43,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XEA,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X9C,0XFF,0XFF,0XFF,0XE7,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X3F,0XFF,0XFF,0XFF,0XFB,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X23,0X8D,0XFF,0XFF,0XFF,0XE7,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X3F,0XFF,0XFF,0XFF,0XFB,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X33,0X33,0X9E,0XFF,0XFF,0XFF,0XF7,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X3F,0XFF,0XFF,0XFF,0XFB,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X33,0X33,0X33,0XAD,0XFF,0XFF,0XFF,0XC7,0X23,0X33,0X33,0X33,
0X33,0X33,0X33,0X3F,0XFF,0XFF,0XFF,0XFF,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X33,0X33,0X33,0X24,0X8E,0XFF,0XFF,0XFF,0XD6,0X33,0X33,0X33,
0X33,0X33,0X4C,0XFF,0XFF,0XFF,0XFF,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XAF,0XFF,0XFF,0XFF,0XC6,0X33,0X43,
0X32,0X59,0XFF,0XFF,0XFF,0XFF,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XAE,0XFF,0XFF,0XFF,0XA6,0X23,
0X49,0XEF,0XFF,0XFF,0XFF,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X34,0X33,0X33,0X33,0X43,0X33,0X33,0X33,0X24,0XAF,0XFF,0XFF,0XFF,0XC5,
0X4F,0XFF,0XFF,0XF9,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X73,0X33,0X45,0X66,0X64,0X33,0X33,0X33,0X33,0X33,0X34,0XBF,0XFF,0XFF,0XFF,
0X4F,0XFF,0XFC,0X33,0X33,0X33,0X33,0X33,0X33,0X43,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0X62,0X43,0X9F,0XFF,0XFB,0X23,0X33,0X33,0X33,0X33,0X33,0X34,0XBF,0XFF,0XFF,
0X4F,0XFF,0X93,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XFF,
0XFF,0XD4,0X32,0XBF,0XFF,0XFC,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X27,0XFF,0XFF,
0X4F,0XFF,0X83,0X33,0X33,0X33,0X33,0X33,0X43,0X33,0X33,0X33,0X33,0X43,0X5E,0XFF,
0XFF,0XFE,0X52,0XBF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X63,0X36,0XFF,0XFF,
0X4F,0XFF,0X83,0X33,0X33,0X33,0X33,0X34,0X33,0X33,0X33,0X33,0X34,0X25,0XFF,0XFF,
0XFF,0XFF,0XF4,0XAF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0X26,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X34,0X43,0X33,0X33,0X33,0X33,0X32,0X6F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XEF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X26,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X34,0X44,0X43,0X33,0X33,0X33,0X33,0X33,0X27,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X26,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X32,0X9F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X32,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X3A,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X33,0X33,0X34,0X33,0X35,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X34,0X33,0XBF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X33,0X33,0X34,0X33,0X32,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X43,0X3C,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0X33,0X43,0X33,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X34,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE4,0X33,0X33,0X43,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X5F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X53,0X33,0X34,0X43,0X33,0X43,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X26,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X23,0X33,0X34,0X43,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X6E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X63,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X34,0X9C,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X94,0X33,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X22,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XA2,0X23,0X33,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X33,0X33,0X6D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X43,0X33,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X33,0X32,0X6B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X33,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X32,0X6B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD8,0X33,0X33,0X33,0X33,0X36,0XFF,0XFF,
0X4F,0XFF,0X82,0X33,0X33,0X33,0X5B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X33,0X33,0X33,0X36,0XFF,0XFE,
0X4F,0XFF,0X82,0X34,0X32,0X69,0XFF,0XFF,0XFF,0XF9,0XAF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XEC,0XFF,0XFF,0XFF,0XD7,0X33,0X33,0X36,0XFF,0XFD,
0X4F,0XFF,0X82,0X32,0X5B,0XFF,0XFF,0XFF,0XEA,0X42,0XAF,0XFF,0XFF,0XFF,0XFF,0XBA,
0XBA,0XBF,0XFF,0XFF,0XFF,0XFF,0XA2,0X8C,0XFF,0XFF,0XFF,0XB7,0X33,0X36,0XFF,0XFD,
0X4F,0XFF,0X82,0X49,0XFF,0XFF,0XFF,0XF9,0X42,0X32,0XAF,0XFF,0XFF,0XFF,0XF9,0X22,
0X22,0X28,0XFF,0XFF,0XFF,0XFF,0XB3,0X23,0X7D,0XFF,0XFF,0XFF,0XD6,0X26,0XFF,0XFD,
0X4F,0XFF,0XA7,0XFF,0XFF,0XFF,0XFB,0X43,0X33,0X32,0XAF,0XFF,0XFF,0XFF,0XF6,0X33,
0X33,0X35,0XFF,0XFF,0XFF,0XFF,0XB3,0X33,0X33,0X8E,0XFF,0XFF,0XFF,0XA9,0XFF,0XFD,
0X4F,0XFF,0XFF,0XFF,0XFF,0XFB,0X43,0X33,0X33,0X32,0XAF,0XFF,0XFF,0XFF,0XF7,0X33,
0X33,0X35,0XFF,0XFF,0XFF,0XFF,0XB3,0X33,0X33,0X33,0X9D,0XFF,0XFF,0XFF,0XFF,0XFD,
0X4F,0XFF,0XFF,0XFF,0XFA,0X52,0X33,0X33,0X33,0X32,0XAF,0XFF,0XFF,0XFF,0XF7,0X33,
0X33,0X35,0XFF,0XFF,0XFF,0XFF,0XB3,0X33,0X33,0X33,0X24,0X8E,0XFF,0XFF,0XFF,0XFD,
0X4F,0XFF,0XFF,0XFC,0X43,0X33,0X33,0X33,0X33,0X32,0XAF,0XFF,0XFF,0XFF,0XF6,0X33,
0X33,0X35,0XFF,0XFF,0XFF,0XFF,0XB3,0X33,0X33,0X33,0X33,0X34,0X8E,0XFF,0XFF,0XFD,
0X4F,0XFF,0XFD,0X43,0X33,0X33,0X33,0X33,0X33,0X32,0XAF,0XFF,0XFF,0XFF,0XF5,0X33,
0X33,0X36,0XFF,0XFF,0XFF,0XFF,0XA2,0X33,0X33,0X33,0X33,0X33,0X33,0XAF,0XFF,0XFD,
0X4F,0XFF,0XFD,0XA3,0X33,0X33,0X33,0X33,0X33,0X33,0X5E,0XFF,0XFF,0XFF,0XB4,0X33,
0X33,0X34,0XAF,0XFF,0XFF,0XFE,0X53,0X33,0X33,0X33,0X34,0X33,0X36,0XCF,0XFF,0XFD,
0X4F,0XFF,0XFF,0XFE,0X84,0X33,0X33,0X33,0X33,0X34,0X34,0X66,0X66,0X66,0X33,0X43,
0X33,0X43,0X36,0X66,0X66,0X64,0X34,0X33,0X33,0X33,0X33,0X36,0XCF,0XFF,0XFF,0XF9,
0X35,0XAF,0XFF,0XFF,0XFE,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X34,0X33,
0X33,0X34,0X33,0X33,0X33,0X33,0X43,0X33,0X33,0X33,0X36,0XBF,0XFF,0XFF,0XFD,0X73,
0X33,0X26,0XAF,0XFF,0XFF,0XF3,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XBF,0XFF,0XFF,0XFC,0X73,0X33,
0X33,0X43,0X35,0XAF,0XFF,0XFF,0XF3,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XBF,0XFF,0XFF,0XFE,0X73,0X33,0X33,
0X33,0X33,0X33,0X33,0XBF,0XFF,0XFF,0XFD,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X35,0XAF,0XFF,0XFF,0XFD,0X83,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0XBF,0XFF,0XFF,0XFC,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X34,0XBF,0XFF,0XFF,0XFD,0X83,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0XBF,0XFF,0XFF,0XFF,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X34,0XAF,0XFF,0XFF,0XFF,0X83,0X23,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XCF,0XFF,0XFF,0XFF,0XD3,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X24,0X9F,0XFF,0XFF,0XFE,0X94,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XFB,0X53,0X33,0X33,0X33,
0X33,0X33,0X33,0X34,0X9E,0XFF,0XFF,0XFE,0X93,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XFB,0X53,0X33,0X33,
0X33,0X33,0X33,0X8E,0XFF,0XFF,0XFF,0X84,0X23,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XFF,0XFF,0XFF,0XFA,0X52,0X33,
0X33,0X34,0X8E,0XFF,0XFF,0XFF,0X94,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X9F,0XFF,0XFF,0XFA,0X43,
0X33,0X8D,0XFF,0XFF,0XFF,0XA4,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XDF,0XFF,0XFF,0XFA,
0X8D,0XFF,0XFF,0XFF,0X95,0X23,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0XEF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XA5,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X43,0X33,0X33,0X33,0X33,0X33,0X39,0XEF,0XFF,
0XFF,0XFF,0XB5,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X34,0X33,0X33,0X33,0X33,0X33,0X33,0X48,0XEF,
0XFF,0X95,0X23,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,0X33,
};



#endif // HAS_GRAPHICAL_TFT
