#ifndef _GAMEMAIN_H
#define _GAMEMAIN_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "ZeroFour.h"

class GameMain: public Game
{
private:
	TextureManager	car_1_Texture; //��1�̃e�N�X�`��
	Image			car1tex;
	TextureManager	bg_city_Texture; //�w�i(�V�e�B)
	Image			bgcitytex;
public:
    GameMain();

    virtual ~GameMain();

    void initialize(HWND hwnd);
    void update();     
    void ai();          
    void collisions();  
    void render();      
    void releaseAll();
    void resetAll();
};

#endif
