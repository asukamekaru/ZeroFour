// �����w�i�̃X�N���v�g
// ���X�N���[���A���x�Ōv�Z����
// 

#include "backGround.h"

using namespace backgroundNS;

//=============================================================================
// �R���\�[��
//=============================================================================
BackGround::BackGround() : Entity()
{}

//=============================================================================
// ������
//=============================================================================
bool BackGround::initialize(Game *gamePtr, int width, int height, int ncols,
						TextureManager *textureM)
{
	return(Entity::initialize(gamePtr, width, height, ncols, textureM));
}
//=============================================================================
// �A�b�v�f�[�g
// frameTime �� ���݂̎Ԃ̑��x������
//=============================================================================
void BackGround::update(float frameTime,float speed)
{
	Entity::update(frameTime);

	//���Z
	spriteData.x -= speed;

}

//=============================================================================
// �����[�X
//=============================================================================
void BackGround::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();

	return;
}

//=============================================================================
// ���Z�b�g
//=============================================================================
void BackGround::resetAll()
{
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
