#ifndef _CAR_MAIN_H
#define _CAR_MAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "entity.h"
#include "constants.h"
#include "carBody.h"

namespace carmainNS//CarMainNameSpace
{
	const int CARIMAGE_Y = 30;
}

class CarMain : public Game
{
private:
	// �ԃA�C�e��
	// �摜
	TextureManager car1Texture; // �ԃe�N�X�`��
	CarBody carbody;			// �ԃC���[�W

public:
	CarMain();
	virtual ~CarMain();
	void initialize(HWND hwnd);
	void update();      
	void ai();          
	void collisions();  
	void render();      
	void releaseAll();
	void resetAll();
};

#endif //_CAR_MAIN_H