/******************************************************************
 * Copyright (C) 2003 by SG Software.
 ******************************************************************/

/* FILE NAME   : player.h
 * PURPOSE     : SG Konsamp. Interface for main player functions.
 * PROGRAMMER  : Sergey Galanov
 * LAST UPDATE : 28.04.2003
 * NOTE        : None.
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

#ifndef __SG_KONSAMP_PLAYER_H__
#define __SG_KONSAMP_PLAYER_H__

#include "types.h"
#include "window.h"

/* User messages for root window types */
#define PLAYER_MSG_END_TRACK    0

/* Player statuses */
#define PLAYER_STATUS_PLAYING 	0
#define PLAYER_STATUS_PAUSED	1
#define PLAYER_STATUS_STOPPED	2

/* Initialize player */
bool player_init( int argc, char *argv[] );

/* Unitialize player */
void player_deinit( void );

/* Run player */
bool player_run( void );

/* Parse program command line */
bool player_parse_cmd_line( int argc, char *argv[] );

/* Handle key function */
void player_handle_key( wnd_t *wnd, dword data );

/* Handle mouse left button click */
void player_handle_mouse_click( wnd_t *wnd, dword data );

/* Display player function */
void player_display( wnd_t *wnd, dword data );

/* User message handling function */
void player_handle_user( wnd_t *wnd, dword data );

/* Key handler function for command repeat value edit box */
void player_repval_handle_key( wnd_t *wnd, dword data );

/* Seek song */
void player_seek( int sec, bool rel );

/* Play song */
void player_play( void );

/* End play song thread */
void player_end_play( void );

/* Player thread function */
void *player_thread( void *arg );

/* Stop timer thread */
void player_stop_timer( void );

/* Timer thread function */
void *player_timer_func( void *arg );

/* Process add file dialog */
void player_add_dialog( void );

/* Process save play list dialog */
void player_save_dialog( void );

/* Process remove song(s) dialog */
void player_rem_dialog( void );

/* Process sort play list dialog */
void player_sort_dialog( void );

/* Process song info dialog */
void player_info_dialog( void );

/* Process search play list dialog */
void player_search_dialog( void );

/* Show help screen */
void player_help( void );

/* Display message handler for help screen */
void player_help_display( wnd_t *wnd, dword data );

/* Handle key message handler for help screen */
void player_help_handle_key( wnd_t *wnd, dword data );

/* Start next track */
void player_next_track( void );

#endif

/* End of 'player.h' file */
