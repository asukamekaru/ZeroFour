#ifndef _GAMEMAIN_H
#define _GAMEMAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "entity.h"
#include "constants.h"

namespace backgroundNS//BackGroundNameSpace
{
	const int   IMAGE_SIZE = 32;        // each texture size
	const int   TEXTURE_COLS = 8;       // texture columns
}

class BackGround: public Entity
{
private:


public:
	BackGround();
	bool initialize(Image &img,int setX,int setY,float scale);
	void update();     
	void render();
	void releaseAll();
	void resetAll();
};

#endif
