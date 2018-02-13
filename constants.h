#ifndef _CONSTANTS_H          
#define _CONSTANTS_H          
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#define SAFE_DELETE(ptr)       { if (ptr) { delete (ptr); (ptr)=NULL; } }
#define SAFE_RELEASE(ptr)      { if(ptr) { (ptr)->Release(); (ptr)=NULL; } }
#define SAFE_DELETE_ARRAY(ptr) { if(ptr) { delete [](ptr); (ptr)=NULL; } }
#define TRANSCOLOR  SETCOLOR_ARGB(0,255,0,255) 


const char CLASS_NAME[] = "Spacewar";	//�N���X��
const char GAME_TITLE[] = "ZeroFour";	//�Q�[���^�C�g��
const bool FULLSCREEN = false;          //�t���X�N���[�����[�h
const UINT GAME_WIDTH =  1920;			//��
const UINT GAME_HEIGHT = 1080;           //����
 
const char BG_CITY_IMG[] = "images\\background_city_skyline.jpg"; //�w�i�̉摜(�X�J�C���C��)
const char CAR_1_IMG[] = "images\\car_1.png"; //�Ԃ̉摜(�X�J�C���C��)

const double PI = 3.14159265;						//�~����
const float FRAME_RATE  = 200.0f;           
const float MIN_FRAME_RATE = 10.0f;           
const float MIN_FRAME_TIME = 1.0f/FRAME_RATE;  
const float MAX_FRAME_TIME = 1.0f/MIN_FRAME_RATE; 

const UCHAR ESC_KEY      = VK_ESCAPE; 
const UCHAR ALT_KEY      = VK_MENU;   
const UCHAR ENTER_KEY    = VK_RETURN;  



#endif
