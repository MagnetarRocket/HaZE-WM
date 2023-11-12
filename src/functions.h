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
#ifndef _FUNCTION_
#define _FUNCTION_

typedef struct builtin_func
{
	char *label;
	void (*action)();
} builtin_func;

extern void ShadeWindow( HAZEWMWindow * );
extern void UnShadeWindow( HAZEWMWindow * );
extern void HideWindow( HAZEWMWindow * );
extern void NopFunction( char * );
extern void AboutThisMachine( char * );
extern void RefreshScreen( char * );
extern void ChangeDesk( char * );
extern void SelectWindow( char * );
extern void ExecSystems( char * );
extern void RestartSystem( char * );
extern void ExitSystem( char * );
extern void ExecuteFunction( char * );
#endif
