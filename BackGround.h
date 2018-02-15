#ifndef _GAMEMAIN_H
#define _GAMEMAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "gameMain.h"
#include "entity.h"
#include "constants.h"

namespace bakgroundNS//BackGroundNameSpace
{

}

class BackGround: public Entity
{
private:
	TextureManager bgCityTexture; // �w�i�e�N�X�`��
	Image   bgcity;               // �w�i�C���[�W

public:
	BackGround();
	void initialize();
	void update();     
	void render();
	void releaseAll();
	void resetAll();
};

#endif
