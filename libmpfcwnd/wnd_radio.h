/******************************************************************
 * Copyright (C) 2004 by SG Software.
 ******************************************************************/

/* FILE NAME   : wnd_radio.h
 * PURPOSE     : MPFC Window Library. Interface for radio button
 *               functions.
 * PROGRAMMER  : Sergey Galanov
 * LAST UPDATE : 19.08.2004
 * NOTE        : Module prefix 'radio'.
 *
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation; either version 2 
 * of the License, or (at your option) any later version.
 *  
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *  
 * You should have received a copy of the GNU General Public 
 * License along with this program; if not, write to the Free 
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, 
 * MA 02111-1307, USA.
 */

#ifndef __SG_MPFC_WND_RADIO_H__
#define __SG_MPFC_WND_RADIO_H__

#include "types.h"
#include "wnd.h"
#include "wnd_dlgitem.h"

/* Radio button type */
typedef struct
{
	/* Dialog item part */
	dlgitem_t m_wnd;

	/* If dialog item is checked */
	bool_t m_checked;
} radio_t;

/* Convert a window object to radio button type */
#define RADIO_OBJ(wnd)	((radio_t *)wnd)

/* Create a new radio button */
radio_t *radio_new( wnd_t *parent, char *title, char *id, 
		char letter, bool_t checked );

/* Radio button constructor */
bool_t radio_construct( radio_t *r, wnd_t *parent, char *title, char *id, 
		char letter, bool_t checked );

/* 'keydown' message handler */
wnd_msg_retcode_t radio_on_keydown( wnd_t *wnd, wnd_key_t key );

/* 'display' message handler */
wnd_msg_retcode_t radio_on_display( wnd_t *wnd );

/* 'mouse_ldown' message handler */
wnd_msg_retcode_t radio_on_mouse( wnd_t *wnd, int x, int y,
		wnd_mouse_button_t mb, wnd_mouse_event_t type );

/* Set checked state */
void radio_check( radio_t *r );

/* Get size desired by check box */
void radio_get_desired_size( dlgitem_t *di, int *width, int *height );

/*
 * Class functions
 */

/* Initialize radio button class */
wnd_class_t *radio_class_init( wnd_global_data_t *global );

#endif

/* End of 'wnd_radio.h' file */

