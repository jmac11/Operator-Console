/****************************************************************************	
*	Operator Console - an extensible user interface for the Imatest IT 		*
*	library																	*
*	Copyright (C) 2013 Imatest LLC.											*
*																			*
*	This program is free software: you can redistribute it and/or modify	*
*	it under the terms of the GNU General Public License as published by	*
*	the Free Software Foundation, either version 3 of the License, or		*
*	(at your option) any later version.										*
*																			*
*	This program is distributed in the hope that it will be useful,			*
*	but WITHOUT ANY WARRANTY; without even the implied warranty of			*
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the			*
*	GNU General Public License for more details.							*
*																			*
*	You should have received a copy of the GNU General Public License		*
*	along with this program.  If not, see <http://www.gnu.org/licenses/>. 	*
****************************************************************************/

#pragma once

///
/// Quadrant Status Overlay (QSO) refers to values drawn on top
/// of the image indicating whether or not each area passed a test.
///
/// The image is divided into 5 areas called quadrants:
///
///   x-----x\n
///   ---x---\n
///   x-----x\n
///
/// This is the order of the quadrants in the data
///
typedef enum EQuadrant
{
	eCenter = 0,
	eUpperRight,
	eLowerRight,
	eUpperLeft,
	eLowerLeft,
	eNumQuadrants
} EQuadrant;
