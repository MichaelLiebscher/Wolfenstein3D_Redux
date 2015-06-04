/*

	Copyright (C) 2006 Michael Liebscher <johnnycanuck@users.sourceforge.net>

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

/**
 * \file blakestone_pal.c
 * \brief Blake Stone Palette.
 * \author Michael Liebscher 
 * \date 2007 
 */

#include "../../common/platform.h"

W8 blakestone_gamepal[ 768 ] = {
	0, 0, 0,
	4, 4, 4,
	12, 12, 12,
	20, 20, 20,
	28, 28, 28,
	36, 36, 36,
	44, 44, 44,
	52, 52, 52,
	60, 60, 60,
	68, 68, 68,
	76, 76, 76,
	84, 84, 84,
	92, 92, 92,
	100, 100, 100,
	108, 108, 108,
	116, 116, 116,
	32, 0, 0,
	52, 0, 0,
	72, 0, 0,
	92, 0, 0,
	112, 4, 4,
	132, 4, 4,
	152, 8, 8,
	172, 12, 12,
	192, 16, 16,
	196, 36, 36,
	204, 56, 56,
	208, 80, 80,
	216, 100, 100,
	220, 124, 124,
	228, 152, 152,
	236, 180, 180,
	44, 20, 0,
	60, 28, 0,
	80, 36, 0,
	100, 48, 0,
	116, 56, 4,
	136, 68, 4,
	152, 76, 8,
	172, 88, 12,
	192, 100, 16,
	196, 112, 36,
	204, 128, 56,
	208, 144, 80,
	216, 156, 100,
	220, 172, 124,
	228, 192, 152,
	236, 208, 180,
	44, 44, 0,
	60, 60, 0,
	80, 80, 0,
	100, 100, 0,
	116, 120, 4,
	132, 136, 8,
	148, 152, 12,
	164, 168, 20,
	180, 184, 28,
	196, 200, 36,
	204, 204, 56,
	208, 212, 80,
	216, 216, 104,
	224, 224, 128,
	228, 228, 156,
	236, 236, 184,
	12, 20, 0,
	32, 44, 0,
	52, 68, 0,
	68, 92, 0,
	88, 116, 0,
	108, 140, 0,
	124, 164, 0,
	144, 188, 0,
	152, 192, 16,
	164, 200, 40,
	176, 208, 64,
	188, 216, 92,
	200, 224, 120,
	212, 228, 152,
	224, 236, 180,
	236, 244, 216,
	0, 20, 0,
	0, 44, 0,
	0, 68, 0,
	0, 92, 0,
	0, 116, 0,
	0, 140, 0,
	0, 164, 0,
	0, 192, 0,
	16, 196, 16,
	40, 204, 40,
	68, 212, 68,
	92, 216, 92,
	120, 224, 120,
	152, 232, 152,
	184, 236, 184,
	216, 244, 216,
	0, 20, 12,
	0, 44, 28,
	0, 68, 40,
	0, 92, 56,
	0, 116, 72,
	4, 140, 88,
	4, 164, 104,
	4, 188, 120,
	24, 192, 132,
	48, 200, 144,
	72, 208, 156,
	96, 216, 172,
	124, 224, 188,
	156, 228, 200,
	184, 236, 216,
	216, 244, 232,
	0, 20, 20,
	0, 44, 44,
	0, 68, 68,
	0, 92, 92,
	0, 116, 116,
	0, 140, 140,
	0, 164, 164,
	0, 188, 188,
	16, 192, 192,
	40, 200, 200,
	64, 208, 208,
	92, 216, 216,
	120, 224, 224,
	152, 228, 228,
	180, 236, 236,
	216, 244, 244,
	0, 20, 44,
	0, 28, 60,
	0, 40, 80,
	0, 48, 100,
	4, 60, 116,
	4, 68, 136,
	8, 80, 152,
	12, 92, 172,
	16, 104, 192,
	36, 116, 196,
	56, 132, 204,
	80, 144, 208,
	100, 160, 216,
	124, 172, 220,
	152, 192, 228,
	180, 208, 236,
	0, 0, 44,
	0, 0, 60,
	0, 0, 80,
	0, 0, 100,
	4, 4, 116,
	4, 4, 136,
	8, 8, 152,
	12, 12, 172,
	16, 16, 192,
	40, 40, 200,
	64, 64, 208,
	92, 92, 216,
	120, 120, 224,
	152, 152, 228,
	180, 180, 236,
	216, 216, 244,
	116, 116, 116,
	124, 124, 124,
	132, 132, 132,
	140, 140, 140,
	152, 152, 152,
	160, 160, 160,
	168, 168, 168,
	176, 176, 176,
	188, 188, 188,
	196, 196, 196,
	204, 204, 204,
	216, 216, 216,
	224, 224, 224,
	232, 232, 232,
	240, 240, 240,
	252, 252, 252,
	60, 24, 0,
	64, 28, 0,
	72, 32, 4,
	80, 40, 4,
	84, 44, 8,
	92, 52, 12,
	96, 56, 20,
	104, 64, 24,
	112, 72, 32,
	200, 204, 40,
	200, 176, 36,
	200, 144, 32,
	196, 112, 28,
	196, 80, 24,
	192, 48, 20,
	192, 16, 16,
	44, 0, 20,
	60, 0, 28,
	80, 0, 36,
	100, 0, 48,
	116, 4, 56,
	136, 4, 68,
	152, 8, 76,
	172, 12, 88,
	192, 16, 100,
	196, 36, 112,
	204, 56, 128,
	208, 80, 144,
	216, 100, 156,
	220, 124, 172,
	228, 152, 192,
	236, 180, 208,
	32, 20, 8,
	48, 28, 12,
	64, 40, 16,
	80, 52, 24,
	96, 64, 28,
	112, 72, 32,
	128, 84, 36,
	148, 96, 44,
	160, 108, 60,
	168, 120, 76,
	176, 132, 88,
	188, 144, 108,
	196, 160, 128,
	208, 176, 148,
	216, 188, 168,
	228, 208, 192,
	8, 20, 32,
	12, 28, 48,
	20, 40, 64,
	24, 52, 80,
	32, 64, 96,
	36, 72, 112,
	44, 84, 128,
	52, 96, 144,
	60, 108, 160,
	76, 120, 168,
	88, 132, 176,
	108, 144, 188,
	128, 160, 196,
	148, 176, 208,
	168, 188, 216,
	192, 208, 228,
	28, 28, 32,
	248, 248, 252,
	96, 0, 0,
	248, 0, 0,
	0, 48, 0,
	0, 248, 0,
	28, 32, 28,
	116, 120, 116,
	248, 252, 248,
	116, 120, 116,
	40, 40, 204,
	120, 120, 228,
	216, 228, 248,
	120, 120, 228,
	40, 40, 204,
	152, 0, 136
};
