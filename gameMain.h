#ifndef _CREATETHIS_H           
#define _CREATETHIS_H           
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <sstream>
#include "game.h"
#include "textureManager.h"
#include "backGround.h"
#include "image.h"
#include "textDX.h"

//=============================================================================
// This class is the core of the game
//=============================================================================
class GameMainScene : public Game
{
private:
	

	// �Q�[���A�C�e��
	// �摜
	TextureManager menuTexture; // ���j���[�e�N�X�`��
	//TextureManager bgCityTexture; // �w�i�e�N�X�`��
	Image   menu;               // ���j���[�C���[�W
	//Image   bgcity;               // �w�i�C���[�W

	//�N���X
	BackGround bg;

	// �t�H���g
	TextDX  *dxFont;            // �t�H���g
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
