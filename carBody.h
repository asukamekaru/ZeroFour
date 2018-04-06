#ifndef _CAR_BODY_H
#define _CAR_BODY_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "entity.h"
#include "constants.h"

namespace carbodyNS//CarBodyNameSpace
{
    const int   IMAGE_SIZE = 32;        // each texture size
    const int   TEXTURE_COLS = 8;       // texture columns
    const int   BAR_FRAME = 44;         // the frame number of the bar
}

class CarBody: public Image
{
private:


public:
	CarBody();
	bool initialize(Graphics *graphics, TextureManager *textureM, int left, int top, float scale, COLOR_ARGB color);
	void update(float frameTime,float speed); 
	void releaseAll();
	void resetAll();
};

#endif //_CAR_BODY_H
