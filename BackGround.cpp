#include "backGround.h"

//=============================================================================
// �R���\�[��
//=============================================================================
BackGround::BackGround() : Entity()
{}

//=============================================================================
// ������
//=============================================================================
void BackGround::initialize()
{
	// �V�e�B�w�i�e�N�X�`��
	if (!bgCityTexture.initialize(graphics,BR_CITY_IMAGE))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city background texture"));
	// �V�e�B�C���[�W
	if (!bgcity.initialize(graphics,0,0,0,&bgCityTexture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city"));

	bgcity.setScale(0.5f);//�w�i�X�P�[���ݒ�
	bgcity.setY(-200);//�w�iY���W�ݒ�
}

//=============================================================================
// �A�b�v�f�[�g
//=============================================================================
void BackGround::update()
{

}
//=============================================================================
// �`��
//=============================================================================
void BackGround::render()
{
	//graphics->spriteBegin();//�X�v���C�g�̕`����J�n

	//bgcitytex.draw();

	//graphics->spriteEnd();//�X�v���C�g�̕`����I���

	bgcity.draw();

}

//=============================================================================
// �����[�X
//=============================================================================
void BackGround::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();
	bgCityTexture.onLostDevice();
	return;
}

//=============================================================================
// ���Z�b�g
//=============================================================================
void BackGround::resetAll()
{
	bgCityTexture.onResetDevice();
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
