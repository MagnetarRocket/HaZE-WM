/****************************************************************************
 * This module is based on Mlvwm. It has been modified by Jes for the 		*
 * haze window manager								 (argonaut_@yahoo.com)	*
 ****************************************************************************/
 
/****************************************************************************/
/* This module is all original code                                         */
/* by TakaC Hasegawa (tak@bioele.nuee.nagoya-u.ac.jp                        */
/* Copyright 1996, TakaC Hasegawa                                           */
/*     You may use this code for any purpose, as long as the original       */
/*     copyright remains in the source code and all documentation           */
/****************************************************************************/
#ifndef _BORDERS_
#define _BORDERS_

#define SHADOW_BOTTOM   1
#define SHADOW_LEFT     2
#define SHADOW_RIGHT    4
#define SHADOW_TOP      8
#define SHADOW_ALL      (SHADOW_BOTTOM|SHADOW_LEFT|SHADOW_RIGHT|SHADOW_TOP)

#define NORMAL_BORDERWIDTH	4	

extern void SetShape( HAZEWMWindow *, int );
extern void SetUpFrame( HAZEWMWindow *, int, int, int, int, Bool );
extern void SetTitleBar( HAZEWMWindow *, Bool );
extern void DrawArrow( Window, int, GC );
extern void DrawSbarAnk( HAZEWMWindow *, int, Bool );
extern void DrawSbarArrow( HAZEWMWindow *, int, Bool );
extern void DrawSbarBar( HAZEWMWindow *, int, Bool );
extern void DrawResizeBox( HAZEWMWindow *, Bool );
extern void DrawAllDecorations( HAZEWMWindow *, Bool );
extern void DrawFrameShadow( HAZEWMWindow *, Bool );
extern void SetFocus( HAZEWMWindow * );
extern void DrawShadowBox( int, int, int, int, Window, int, GC, GC, char );
extern void DrawMinMax( HAZEWMWindow *, Bool );
extern void DrawCloseBox( HAZEWMWindow *, Bool );
extern void DrawShadeR( HAZEWMWindow *, Bool );
#endif
