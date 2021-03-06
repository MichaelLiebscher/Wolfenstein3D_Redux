
/*

	Copyright (C) 2004 Michael Liebscher

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
 *	opengl_binding.h:   Interface to OpenGL library.
 *	
 *	Author:	Michael Liebscher	<wolf3d.redux@gmail.com>	    
 *	Date:	2004   
 *
 */

#ifndef __OPENGL_BINDING_H__
#define __OPENGL_BINDING_H__



#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>

#endif /* _WIN32 */


void GL_ConfigExtensions( const char *glext );


#endif /* __OPENGL_BINDING_H__ */

