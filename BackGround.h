#ifndef _GAMEMAIN_H
#define _GAMEMAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "ZeroFour.h"

namespace bakgroundNS//BackGroundNameSpace
{
    const int   IMAGE_SIZE = 32;        // each texture size
    const int   TEXTURE_COLS = 8;       // texture columns
    const int   BAR_FRAME = 44;         // the frame number of the bar
}

class BackGround: public Image
{
private:
	TextureManager	bg_city_Texture; //îwåi(ÉVÉeÉB)
	Image			bgcitytex;
public:
    BackGround();

    virtual ~BackGround();

    bool initialize(Graphics *graphics, TextureManager *textureM, int left, int top,
                    float scale, COLOR_ARGB color);
    void update();     
    void ai();          
    void collisions();  
    void render();      
    void releaseAll();
    void resetAll();
};

#endif
