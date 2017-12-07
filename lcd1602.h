#ifndef LCD1602_H
#define LCD1602_H
//
// LCD1602 2 line by 16 character LCD library
//
// Written by Larry Bank - 12/6/2017
// Copyright (c) 2017 BitBank Software, Inc.
// bitbank@pobox.com
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

//
// Opens a file system handle to the I2C device
// Turns on the LCD, sets the 4-bit mode and clears the memory
// Returns 0 for success, 1 for failure
//
int lcd1602Init(int iChannel, int iAddr);

//
// Set the cursor position on the LCD
//
int lcd1602SetCursor(int x, int y);

//
// Control the backlight, cursor, and blink
//
int lcd1602Control(int bBacklight, int bCursor, int bBlink);

//
// Print a zero-terminated character string
// Only 1 line at a time can be accessed
//
int lcd1602WriteString(char *szText);

//
// Clear the characters from the LCD
//
int lcd1602Clear(void);

//
// Turn off the LCD and backlight
// close the I2C file handle
//
void lcd1602Shutdown(void);

#endif // LCD1602_H
