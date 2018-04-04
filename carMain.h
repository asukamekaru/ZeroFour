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
	// 車アイテム
	// 画像
	TextureManager car1Texture; // 車1テクスチャ
	Image   car1;               // 車1イメージ

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