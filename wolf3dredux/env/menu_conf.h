/*

	Copyright (C) 1997-2001 Id Software, Inc.

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

/*
 *	menu_conf.h:   Menu control interface.
 *	
 *	Author:  Id Software, Inc.
 *	Date:    1997-2001
 *
 */


#ifndef __MENU_CONF_H__
#define __MENU_CONF_H__

#include "keys.h"

#include "font_manager.h"


#define MAXMENUITEMS	64

#define MTYPE_SLIDER		0
#define MTYPE_LIST			1
#define MTYPE_ACTION		2
#define MTYPE_SPINCONTROL	3
#define MTYPE_SEPARATOR  	4
#define MTYPE_FIELD			5


// Menu Font Flags
#define MENUFONT_LEFT_JUSTIFY		1
#define MENUFONT_GRAYED			    2
#define MENUFONT_NUMBERSONLY		4

typedef struct _tag_menuframework
{
	int x, y;
	int	cursor;

	int	nitems;
	int nslots;
	void *items[ 64 ];

	const char *statusbar;

	void (*cursordraw)( struct _tag_menuframework *m );
	
} menuframework_s;


typedef struct
{
	int type;
	const char *name;
	int x, y;
	menuframework_s *parent;
	int cursor_offset;
	int	localdata[4];
	unsigned flags;
	FONTSELECT fs;
	colour3_t *fontBaseColour;
	colour3_t *fontHighColour;

	const char *statusbar;

	void (*callback)( void *self );
	void (*statusbarfunc)( void *self );
	void (*ownerdraw)( void *self );
	void (*cursordraw)( void *self );
	
} menucommon_s;

typedef struct
{
	menucommon_s generic;

	char		buffer[ 80 ];
	int			cursor;
	int			length;
	int			visible_length;
	int			visible_offset;

} menufield_s;

typedef struct 
{
	menucommon_s generic;

	float minvalue;
	float maxvalue;
	float curvalue;

	float range;
	
} menuslider_s;

typedef struct
{
	menucommon_s generic;

	int curvalue;

	const char **itemnames;
	
} menulist_s;

typedef struct
{
	menucommon_s generic;

} menuaction_s;

typedef struct
{
	menucommon_s generic;
	
} menuseparator_s;

_boolean Field_Key( menufield_s *field, int key );

void	Menu_AddItem( menuframework_s *menu, void *item );
void	Menu_AdjustCursor( menuframework_s *menu, int dir );
void	Menu_Center( menuframework_s *menu );
void	Menu_Draw( menuframework_s *menu );
void	*Menu_ItemAtCursor( menuframework_s *m );
_boolean Menu_SelectItem( menuframework_s *s );
void	Menu_SetStatusBar( menuframework_s *s, const char *string );
void	Menu_SlideItem( menuframework_s *s, int dir );
int	Menu_TallySlots( menuframework_s *menu );

void	 Menu_DrawString( FONTSELECT, int, int, const char *, colour3_t c );
void	 Menu_DrawStringR2L( FONTSELECT, int, int, const char *, colour3_t c );
void	 Menu_DrawStringR2LDark( FONTSELECT, int, int, const char * );



#endif /* __MENU_CONF_H__ */
