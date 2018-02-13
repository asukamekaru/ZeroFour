#include "ZeroFour.h"
#include "GameMain.h"

//=============================================================================
// �R���\�[��
//=============================================================================
GameMain::GameMain()
{}

//=============================================================================
// �f�X�g���N�^
//=============================================================================
GameMain::~GameMain()
{
	releaseAll();
}

//=============================================================================
// ������
//=============================================================================
void GameMain::initialize(HWND hwnd)
{
	Game::initialize(hwnd);//�Q�[���G���[���X���[

	//��1�̃e�N�X�`��
	if (!car_1_Texture.initialize(graphics,CAR_1_IMG))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula texture"));
	if (!car1tex.initialize(graphics,0,0,0,&car_1_Texture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula"));
	//��1�̃e�N�X�`��
	if (!bg_city_Texture.initialize(graphics,BG_CITY_IMG))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula texture"));
	if (!bgcitytex.initialize(graphics,0,0,0,&bg_city_Texture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula"));

	bgcitytex.setX(0);
    bgcitytex.setY(0);
	bgcitytex.setScale(0.65f);
	return;
}

//=============================================================================
// �A�b�v�f�[�g
//=============================================================================
void GameMain::update()
{}

//=============================================================================
// �l�H�m�\
//=============================================================================
void GameMain::ai()
{}

//=============================================================================
// �����蔻��
//=============================================================================
void GameMain::collisions()
{}

//=============================================================================
// �`��
//=============================================================================
void GameMain::render()
{
	graphics->spriteBegin();//�X�v���C�g�̕`����J�n

	bgcitytex.draw();
	car1tex.draw();

	graphics->spriteEnd();//�X�v���C�g�̕`����I���

}

//=============================================================================
// �����[�X
//=============================================================================
void GameMain::releaseAll()
{
	bg_city_Texture.onLostDevice();
	car_1_Texture.onLostDevice();
	Game::releaseAll();
	return;
}

//=============================================================================
// ���Z�b�g
//=============================================================================
void GameMain::resetAll()
{
	bg_city_Texture.onResetDevice();
	car_1_Texture.onResetDevice();
	Game::resetAll();
	return;
}
