/****************************************************************************
 * This module is based on Mlvwm. It has been modified by Jes for the 		*
 * haze window manager								 (argonaut_@yahoo.com)	*
 ****************************************************************************/
 
/****************************************************************************
 * This module is all original code 
 * by TakaC Hasegawa (tak@bioele.nuee.nagoya-u.ac.jp 
 * Copyright 1996, TakaC Hasegawa
 *     You may use this code for any purpose, as long as the original
 *     copyright remains in the source code and all documentation
 ****************************************************************************/
#ifndef _ADD_WINDOW_
#define _ADD_WINDOW_

extern void FetchWmProtocols( HAZEWMWindow * );
extern styles *lookupstyles( char *, XClassHint * );
extern void create_resizebox( HAZEWMWindow * );
extern void create_scrollbar( HAZEWMWindow * );
extern void create_titlebar( HAZEWMWindow * );
extern HAZEWMWindow *AddWindow( Window );
extern void GetWindowSizeHints( HAZEWMWindow * );

extern char NoName[];
#endif
