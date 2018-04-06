#ifndef _GAME_MAIN_H           
#define _GAME_MAIN_H           
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <sstream>
#include "game.h"
#include "textureManager.h"
#include "backGround.h"
#include "image.h"
#include "textDX.h"
#include "carMain.h"


namespace gamemainNS{

	//�e�w�i�̃T�C�Y��
	//stage1
	const float	BG_IMG_Y	 = -100;
	const float BG_IMG_SCALE = 0.5;
}
//=============================================================================
// �Q�[�����C��
//=============================================================================
class GameMainScene : public Game
{
private:
	// �Q�[���A�C�e��
	// �摜
	TextureManager	menuTexture;		// ���j���[�e�N�X�`��
	Image			menu;               // ���j���[�C���[�W
	TextureManager	bgCityTexture;		// �w�i�e�N�X�`��
	//�N���X
	BackGround		background;			//�w�i
	CarMain			carmain;			//�ԃ��C��

	// �t�H���g
	TextDX  *dxFont;            // �t�H���g
	std::string  message;
	float messageY;

public:
	GameMainScene();
	virtual ~GameMainScene();
	void initialize(HWND hwnd);
	void update();      
	void ai();          
	void collisions();  
	void render();      
	void releaseAll();
	void resetAll();
};

#endif//_GAME_MAIN_H
