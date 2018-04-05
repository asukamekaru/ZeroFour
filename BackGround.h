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
	virtual bool initialize(Game *gamePtr, int width, int height, int ncols, TextureManager *textureM);
	void update(float frameTime,float speed); 
	void releaseAll();
	void resetAll();
};

#endif
