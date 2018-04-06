// 動く背景のスクリプト
// 横スクロール、速度で計算する
// 

#include "carBody.h"

using namespace carbodyNS;

//=============================================================================
// コンソール
//=============================================================================
CarBody::CarBody() : Image()
{}

//=============================================================================
// 初期化
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
// アップデート
// frameTime と 現在の車の速度を入れる
//=============================================================================
void CarBody::update(float frameTime,float speed)
{
	Image::update(frameTime);

	//加算
	spriteData.x -= speed;

}

//=============================================================================
// リリース
//=============================================================================
void CarBody::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();

	return;
}

//=============================================================================
// リセット
//=============================================================================
void CarBody::resetAll()
{
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
