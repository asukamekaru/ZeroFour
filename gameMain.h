#ifndef _CREATETHIS_H           
#define _CREATETHIS_H           
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <sstream>
#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "textDX.h"
#include "BackGround.h"

//=============================================================================
// This class is the core of the game
//=============================================================================
class GameMainScene : public Game
{
private:
	BackGround background;//背景クラス

    // game items
    TextureManager menuTexture; // textures
    Image   menu;               // menu image
    TextDX  *dxFont;            // フォント
    std::string  message;
    float messageY;

public:
    // Constructor
    GameMainScene();
    // Destructor
    virtual ~GameMainScene();
    // Initialize the game
    void initialize(HWND hwnd);
    void update();      // must override pure virtual from Game
    void ai();          // "
    void collisions();  // "
    void render();      // "
    void releaseAll();
    void resetAll();
};

#endif
