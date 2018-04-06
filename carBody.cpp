// �����w�i�̃X�N���v�g
// ���X�N���[���A���x�Ōv�Z����
// 

#include "carBody.h"

using namespace carbodyNS;

//=============================================================================
// �R���\�[��
//=============================================================================
CarBody::CarBody() : Image()
{}

//=============================================================================
// ������
//=============================================================================
bool CarBody::initialize(Graphics *graphics, TextureManager *textureM, int left, int top, float scale, COLOR_ARGB color)
{
    try {
        Image::initialize(graphics, carbodyNS::IMAGE_SIZE, carbodyNS::IMAGE_SIZE, 
                          carbodyNS::TEXTURE_COLS, textureM);
        setCurrentFrame(carbodyNS::BAR_FRAME);
        spriteData.x = (float)left;
        spriteData.y = (float)top;
        spriteData.scale = scale;
        colorFilter = color;
    }
    catch(...)
    {
        return false;
    }
    //return okay
    return true;
}
//=============================================================================
// �A�b�v�f�[�g
// frameTime �� ���݂̎Ԃ̑��x������
//=============================================================================
void CarBody::update(float frameTime,float speed)
{
	Image::update(frameTime);

	//���Z
	spriteData.x -= speed;

}

//=============================================================================
// �����[�X
//=============================================================================
void CarBody::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();

	return;
}

//=============================================================================
// ���Z�b�g
//=============================================================================
void CarBody::resetAll()
{
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
