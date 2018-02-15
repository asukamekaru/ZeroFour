//							//
//			定数			//
//							//
#pragma once
#ifndef _CONSTANTS_H            // Prevent multiple definitions if this 
#define _CONSTANTS_H            // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

//=============================================================================
//                  定数
//=============================================================================

// ウィンドウ
const char CLASS_NAME[] = "createThisClass";
const char GAME_TITLE[] = "ZeroFour";
const bool FULLSCREEN = false;              // フルスクリーンモード
const UINT GAME_WIDTH =  1280;              // 幅
const UINT GAME_HEIGHT = 720;               // 高さ
 
// ゲーム
const bool VSYNC = false;                   // true locks display to vertical sync rate
const double PI = 3.14159265;
const float FRAME_RATE = 240.0f;                // the target frame rate (frames/sec)
const float MIN_FRAME_RATE = 10.0f;             // the minimum frame rate
const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;   // minimum desired time for 1 frame
const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; // maximum time used in calculations

// 使う画像
const char MENU_IMAGE[] =     "pictures\\menu.png";      // menu texture
const char BR_CITY_IMAGE[] =     "pictures\\background_city_skyline.jpg";// background city texture

// オーディオファイル

const char WAVE_BANK[]  = "";

const char SOUND_BANK[] = "";

const UCHAR CONSOLE_KEY  = '`';         
const UCHAR ESC_KEY      = VK_ESCAPE;   // Escキー
const UCHAR ALT_KEY      = VK_MENU;     // Altキー
const UCHAR ENTER_KEY    = VK_RETURN;   // Enterキー

template <typename T>
inline void safeRelease(T& ptr)
{
    if (ptr)
    { 
        ptr->Release(); 
        ptr = NULL;
    }
}
#define SAFE_RELEASE safeRelease            // for backward compatiblility

// Safely delete pointer referenced item
template <typename T>
inline void safeDelete(T& ptr)
{
    if (ptr)
    { 
        delete ptr; 
        ptr = NULL;
    }
}
#define SAFE_DELETE safeDelete              // for backward compatiblility

// Safely delete pointer referenced array
template <typename T>
inline void safeDeleteArray(T& ptr)
{
    if (ptr)
    { 
        delete[] ptr; 
        ptr = NULL;
    }
}
#define SAFE_DELETE_ARRAY safeDeleteArray   // for backward compatiblility

// Safely call onLostDevice
template <typename T>
inline void safeOnLostDevice(T& ptr)
{
    if (ptr)
        ptr->onLostDevice(); 
}
#define SAFE_ON_LOST_DEVICE safeOnLostDevice    // for backward compatiblility

// Safely call onResetDevice
template <typename T>
inline void safeOnResetDevice(T& ptr)
{
    if (ptr)
        ptr->onResetDevice(); 
}
#define SAFE_ON_RESET_DEVICE safeOnResetDevice  // for backward compatiblility

#endif
