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
	TextureManager bgCityTexture; // 背景テクスチャ
	Image   bgcity;               // 背景イメージ

public:
	BackGround();
	void initialize();
	void update();     
	void render();
	void releaseAll();
	void resetAll();
};

#endif
