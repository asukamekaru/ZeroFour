#ifndef _ZEROFOUR_H
#define _ZEROFOUR_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"

class ZeroFour: public Game
{
private:
	TextureManager	car_1_Texture; //車1のテクスチャ
	Image			car1tex;
	TextureManager	bg_city_Texture; //背景(シティ)
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
