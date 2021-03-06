/*
 * Driver for the LCD display on the Tensilica LX60 Board.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001, 2006 Tensilica Inc.
 */

void lcd_init(void);
void lcd_disp_at_pos (char*, unsigned char);
void lcd_shiftleft(void);
void lcd_shiftright(void);
