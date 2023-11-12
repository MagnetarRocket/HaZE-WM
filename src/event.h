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
#ifndef _EVENT_
#define _EVENT_

extern void InstallWindowColormaps (HAZEWMWindow * );
extern Bool GrabEvent( int );
extern void UnGrabEvent( void );
extern void RestoreWithdrawnLocation( HAZEWMWindow *, Bool );
extern int GetContext( HAZEWMWindow *, XEvent *, Window * );
extern void Destroy( HAZEWMWindow * );
extern void HandleDestroy( XEvent * );
extern void handle_configure_request( XConfigureRequestEvent );
extern void MoveWindow( HAZEWMWindow *, XEvent *, Bool );
extern void DisplayPush( Window );
extern void CloseWindow( HAZEWMWindow *, XEvent * );
extern void DrawResizeFrame( int, int, int, int );
extern void ResizeWindow( HAZEWMWindow *, XEvent *, Bool );
extern void MinMaxWindow( HAZEWMWindow *, XEvent * );
extern void HandleMapRequest( Window );
extern void handle_button_press( XEvent * );
extern void handle_expose( XEvent * );
extern void HandleEnterNotify( XEvent * );
extern void HandleLeaveNotify( XEvent * );
extern void HandleShapeNotify ( XEvent * );
extern void HandleEvents( XEvent );
extern void send_clientmessage (Window, Atom, Time);
extern void WaitEvents( void );
extern HAZEWMWindow *NextActiveWin( HAZEWMWindow * );
extern void SetMapStateProp( HAZEWMWindow *, int );
extern void GetWindowSizeHints( HAZEWMWindow * );
#endif
