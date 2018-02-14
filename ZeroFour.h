#ifndef _ZEROFOUR_H
#define _ZEROFOUR_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "BackGround.h"

namespace zerofourNS
{

}

class ZeroFour: public Game
{
private:
	BackGround m_background;

	TextureManager	car_1_Texture; //��1�̃e�N�X�`��
	Image			car1tex;
	TextureManager	bg_city_Texture; //�w�i(�V�e�B)
	Image			bgcitytex;


public:
	ZeroFour();

	virtual ~ZeroFour();

	void initialize(HWND hwnd);
	void update();     
	void ai();          
	void collisions();  
	void render();      
	void releaseAll();
	void resetAll();
};

#endif//#ifndef _ZEROFOUR_H
