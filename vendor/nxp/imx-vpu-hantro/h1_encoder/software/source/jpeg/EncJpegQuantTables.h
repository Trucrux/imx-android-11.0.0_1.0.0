/*------------------------------------------------------------------------------
--       Copyright (c) 2015-2017, VeriSilicon Inc. All rights reserved        --
--         Copyright (c) 2011-2014, Google Inc. All rights reserved.          --
--         Copyright (c) 2007-2010, Hantro OY. All rights reserved.           --
--                                                                            --
-- This software is confidential and proprietary and may be used only as      --
--   expressly authorized by VeriSilicon in a written licensing agreement.    --
--                                                                            --
--         This entire notice must be reproduced on all copies                --
--                       and may not be removed.                              --
--                                                                            --
--------------------------------------------------------------------------------
-- Redistribution and use in source and binary forms, with or without         --
-- modification, are permitted provided that the following conditions are met:--
--   * Redistributions of source code must retain the above copyright notice, --
--       this list of conditions and the following disclaimer.                --
--   * Redistributions in binary form must reproduce the above copyright      --
--       notice, this list of conditions and the following disclaimer in the  --
--       documentation and/or other materials provided with the distribution. --
--   * Neither the names of Google nor the names of its contributors may be   --
--       used to endorse or promote products derived from this software       --
--       without specific prior written permission.                           --
--------------------------------------------------------------------------------
-- THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"--
-- AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE  --
-- IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE --
-- ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE  --
-- LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR        --
-- CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF       --
-- SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS   --
-- INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN    --
-- CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)    --
-- ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE --
-- POSSIBILITY OF SUCH DAMAGE.                                                --
--------------------------------------------------------------------------------
--                                                                            --
--  Abstract  : 
--
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------

    Table of contents

    1. Include headers
    2. Module defines
    3. Data types
    4. Function prototypes

------------------------------------------------------------------------------*/
#ifndef __QUANT_TABLES_H__
#define __QUANT_TABLES_H__

/*------------------------------------------------------------------------------
    1. Include headers
------------------------------------------------------------------------------*/
#include "basetype.h"

/*------------------------------------------------------------------------------
    2. Module defines
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
    3. Data types
------------------------------------------------------------------------------*/

/* Quantization tables for luminance, levels 0-10 */
static const u8 QuantLuminance[11][64] = {

    {80, 56, 50, 80, 120, 200, 248, 248,
     60, 60, 72, 96, 136, 248, 248, 248,
     72, 68, 80, 120, 200, 248, 248, 248,
     72, 88, 112, 152, 248, 248, 248, 248,
     92, 112, 192, 248, 248, 248, 248, 248,
     120, 176, 248, 248, 248, 248, 248, 248,
     152, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248},

    {40, 28, 25, 40, 60, 100, 128, 160,
     30, 30, 36, 48, 68, 152, 152, 144,
     36, 34, 40, 60, 100, 144, 176, 144,
     36, 44, 56, 76, 128, 224, 200, 160,
     46, 56, 96, 144, 176, 248, 248, 200,
     60, 88, 144, 160, 208, 248, 248, 232,
     124, 160, 200, 224, 248, 248, 248, 248,
     184, 232, 240, 248, 248, 248, 248, 248},

    {27, 18, 17, 27, 40, 68, 88, 104,
     20, 20, 23, 32, 44, 96, 100, 92,
     23, 22, 27, 40, 68, 96, 116, 96,
     23, 28, 38, 48, 88, 144, 136, 104,
     30, 38, 62, 96, 116, 184, 176, 128,
     40, 58, 92, 108, 136, 176, 192, 160,
     84, 108, 136, 144, 176, 208, 200, 168,
     120, 160, 160, 168, 192, 168, 176, 168},

    {20, 14, 13, 20, 30, 50, 64, 76,
     15, 15, 18, 24, 34, 76, 76, 72,
     18, 16, 20, 30, 50, 72, 88, 72,
     18, 21, 28, 36, 64, 112, 100, 80,
     23, 28, 46, 72, 88, 136, 136, 96,
     30, 44, 72, 80, 104, 136, 144, 116,
     62, 80, 100, 112, 136, 152, 152, 128,
     92, 116, 120, 124, 144, 128, 136, 124},

    {16, 11, 10, 16, 24, 40, 52, 62,
     12, 12, 14, 19, 26, 58, 60, 56,
     14, 13, 16, 24, 40, 58, 72, 56,
     14, 17, 22, 29, 52, 88, 80, 62,
     18, 22, 38, 56, 68, 112, 104, 80,
     24, 36, 56, 64, 84, 104, 116, 92,
     50, 64, 80, 88, 104, 124, 120, 104,
     72, 92, 96, 100, 124, 100, 104, 100},

    {13,  9,  8, 13, 19, 32, 42, 50,
     10, 10, 11, 15, 21, 46, 48, 44,
     11, 10, 13, 19, 32, 46, 56, 46,
     11, 14, 18, 23, 42, 72, 64, 50,
     14, 18, 30, 46, 54, 88, 84, 62,
     19, 28, 44, 52, 68, 84, 92, 76,
     40, 52, 62, 72, 84, 100, 96, 84,
     58, 76, 76, 80, 100, 80, 84, 80},

    {10,  7,  6, 10, 14, 24, 31, 38,
      7,  7,  8, 11, 16, 36, 36, 34,
      8,  8, 10, 14, 24, 34, 42, 34,
      8, 10, 13, 17, 32, 52, 48, 38,
     11, 13, 22, 34, 42, 68, 62, 46,
     14, 21, 34, 38, 50, 62, 68, 56,
     29, 38, 48, 52, 62, 76, 72, 62,
     44, 56, 58, 60, 68, 60, 62, 60},

    { 6,  4,  4,  6, 10, 16, 20, 24,
      5,  5,  6,  8, 10, 23, 24, 22,
      6,  5,  6, 10, 16, 23, 28, 22,
      6,  7,  9, 12, 20, 36, 32, 25,
      7,  9, 15, 22, 27, 44, 42, 31,
     10, 14, 22, 26, 32, 42, 46, 38,
     20, 26, 31, 36, 42, 48, 48, 40,
     29, 38, 38, 40, 46, 40, 42, 40},

    { 3,  2,  2,  3,  5,  8, 10, 12,
      2,  2,  3,  4,  5, 12, 12, 11,
      3,  3,  3,  5,  8, 11, 14, 11,
      3,  3,  4,  6, 10, 17, 16, 12,
      4,  4,  7, 11, 14, 22, 21, 15,
      5,  7, 11, 13, 16, 21, 23, 18,
     10, 13, 16, 17, 21, 24, 24, 20,
     14, 18, 19, 20, 22, 20, 21, 20},

    { 1,  1,  1,  1,  2,  3,  3,  4,
      1,  1,  1,  1,  2,  4,  4,  4,
      1,  1,  1,  2,  3,  4,  5,  4,
      1,  1,  1,  2,  3,  6,  5,  4,
      1,  1,  2,  4,  5,  7,  7,  5,
      2,  2,  4,  4,  5,  7,  8,  6,
      3,  4,  5,  6,  7,  8,  8,  7,
      5,  6,  6,  7,  7,  7,  7,  7},

    {1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1}
};

/* Quantization tables for chrominance, levels 0-10 */
static const u8 QuantChrominance[11][64] = {
    {88, 92, 120, 240, 248, 248, 248, 248,
     92, 108, 136, 248, 248, 248, 248, 248,
     120, 136, 248, 248, 248, 248, 248, 248,
     240, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248},

    {44, 46, 60, 120, 248, 248, 248, 248,
     46, 54, 68, 168, 248, 248, 248, 248,
     60, 66, 144, 248, 248, 248, 248, 248,
     120, 168, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248,
     248, 248, 248, 248, 248, 248, 248, 248},

    {28, 30, 40, 80, 168, 168, 168, 168,
     30, 36, 44, 112, 168, 168, 168, 168,
     40, 44, 96, 168, 168, 168, 168, 168,
     80, 112, 168, 168, 168, 168, 168, 168,
     168, 168, 168, 168, 168, 168, 168, 168,
     168, 168, 168, 168, 168, 168, 168, 168,
     168, 168, 168, 168, 168, 168, 168, 168,
     168, 168, 168, 168, 168, 168, 168, 168},

    {21, 23, 30, 60, 124, 124, 124, 124,
     23, 26, 34, 84, 124, 124, 124, 124,
     30, 34, 72, 124, 124, 124, 124, 124,
     60, 84, 124, 124, 124, 124, 124, 124,
     124, 124, 124, 124, 124, 124, 124, 124,
     124, 124, 124, 124, 124, 124, 124, 124,
     124, 124, 124, 124, 124, 124, 124, 124,
     124, 124, 124, 124, 124, 124, 124, 124},

    {17, 18, 24, 48, 100, 100, 100, 100,
     18, 21, 26, 68, 100, 100, 100, 100,
     24, 26, 56, 100, 100, 100, 100, 100,
     48, 68, 100, 100, 100, 100, 100, 100,
     100, 100, 100, 100, 100, 100, 100, 100,
     100, 100, 100, 100, 100, 100, 100, 100,
     100, 100, 100, 100, 100, 100, 100, 100,
     100, 100, 100, 100, 100, 100, 100, 100},

    {14, 14, 19, 38, 80, 80, 80, 80,
     14, 17, 21, 54, 80, 80, 80, 80,
     19, 21, 46, 80, 80, 80, 80, 80,
     38, 54, 80, 80, 80, 80, 80, 80,
     80, 80, 80, 80, 80, 80, 80, 80,
     80, 80, 80, 80, 80, 80, 80, 80,
     80, 80, 80, 80, 80, 80, 80, 80,
     80, 80, 80, 80, 80, 80, 80, 80},

    {10, 11, 14, 28, 60, 60, 60, 60,
     11, 13, 16, 40, 60, 60, 60, 60,
     14, 16, 34, 60, 60, 60, 60, 60,
     28, 40, 60, 60, 60, 60, 60, 60,
     60, 60, 60, 60, 60, 60, 60, 60,
     60, 60, 60, 60, 60, 60, 60, 60,
     60, 60, 60, 60, 60, 60, 60, 60,
     60, 60, 60, 60, 60, 60, 60, 60},

    { 7,  7, 10, 19, 40, 40, 40, 40,
      7,  8, 10, 26, 40, 40, 40, 40,
     10, 10, 22, 40, 40, 40, 40, 40,
     19, 26, 40, 40, 40, 40, 40, 40,
     40, 40, 40, 40, 40, 40, 40, 40,
     40, 40, 40, 40, 40, 40, 40, 40,
     40, 40, 40, 40, 40, 40, 40, 40,
     40, 40, 40, 40, 40, 40, 40, 40},

    { 3,  4,  5,  9, 20, 20, 20, 20,
      4,  4,  5, 13, 20, 20, 20, 20,
      5,  5, 11, 20, 20, 20, 20, 20,
      9, 13, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20},

    { 1,  1,  2,  3,  7,  7,  7,  7,
      1,  1,  2,  4,  7,  7,  7,  7,
      2,  2,  4,  7,  7,  7,  7,  7,
      3,  4,  7,  7,  7,  7,  7,  7,
      7,  7,  7,  7,  7,  7,  7,  7,
      7,  7,  7,  7,  7,  7,  7,  7,
      7,  7,  7,  7,  7,  7,  7,  7,
      7,  7,  7,  7,  7,  7,  7,  7},

    {1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1}
};

#endif /* #ifndef __QUANT_TABLES_H__ */
