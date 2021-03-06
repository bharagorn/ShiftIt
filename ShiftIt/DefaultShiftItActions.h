/*
 ShiftIt: Resize windows with Hotkeys
 Copyright (C) 2010  Filip Krikava
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */

#import <Foundation/Foundation.h>

#define GET_FOCUSED_WINDOW(focusedWindowm, windowManager, error, localError) \
[(windowManager) focusedWindow:&(focusedWindow) error:&(localError)]; \
HANDLE_WM_ERROR((error), (localError)); \
if (!(focusedWindow)) { \
return ; \
} \

@class WindowManager;

void ShiftIt_Left(WindowManager *windowManager, NSError **error);
void ShiftIt_Right(WindowManager *windowManager, NSError **error);
//NSRect ShiftIt_Top(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_Bottom(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_TopLeft(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_TopRight(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_BottomLeft(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_BottomRight(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_FullScreen(NSSize screenSize, NSRect windowRect);
//NSRect ShiftIt_Center(NSSize screenSize, NSRect windowRect);
