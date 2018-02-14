#include "gameMain.h"
#include "BackGround.h"

//=============================================================================
// �R���\�[��
//=============================================================================
BackGround::BackGround()
{}

//=============================================================================
// �f�X�g���N�^
//=============================================================================
BackGround::~BackGround()
{
	BackGround();
}

//=============================================================================
// ������
//=============================================================================
void BackGround::initialize()
{
	 // menu texture
    if (!bg_city_Texture.initialize(graphics,BACKGROUND_CITY_IMAGE))
        throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing menu texture"));
    // menu image
    if (!bgcitytex.initialize(graphics,0,0,0,&bg_city_Texture))
        throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing menu"));

}

//=============================================================================
// �A�b�v�f�[�g
//=============================================================================
void BackGround::update()
{}

//=============================================================================
// �`��
//=============================================================================
void BackGround::render()
{
	//graphics->spriteBegin();//�X�v���C�g�̕`����J�n

	bgcitytex.draw();

	//graphics->spriteEnd();//�X�v���C�g�̕`����I���

}

//=============================================================================
// �����[�X
//=============================================================================
void BackGround::releaseAll()
{
	bg_city_Texture.onLostDevice();
	//Game::releaseAll();
	return;
}

//=============================================================================
// ���Z�b�g
//=============================================================================
void BackGround::resetAll()
{
	bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
