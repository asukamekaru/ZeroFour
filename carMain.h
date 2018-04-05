#ifndef _CAR_MAIN_H
#define _CAR_MAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "entity.h"
#include "constants.h"

namespace carmainNS//CarMainNameSpace
{

}

class CarMain : public Entity
{
private:
	// �ԃA�C�e��
	// �摜
	TextureManager car1Texture; // ��1�e�N�X�`��
	Image   car1;               // ��1�C���[�W

public:
	CarMain();
	virtual ~CarMain();
	virtual void initialize();
	void update();
	void render();
	void releaseAll();
	void resetAll();
};

#endif //_CAR_MAIN_H