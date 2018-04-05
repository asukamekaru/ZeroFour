// 動く背景のスクリプト
// 横スクロール、速度で計算する
// 

#include "backGround.h"

using namespace backgroundNS;

//=============================================================================
// コンソール
//=============================================================================
BackGround::BackGround() : Entity()
{}

//=============================================================================
// 初期化
//=============================================================================
bool BackGround::initialize(Game *gamePtr, int width, int height, int ncols,
						TextureManager *textureM)
{
	return(Entity::initialize(gamePtr, width, height, ncols, textureM));
}
//=============================================================================
// アップデート
// frameTime と 現在の車の速度を入れる
//=============================================================================
void BackGround::update(float frameTime,float speed)
{
	Entity::update(frameTime);

	//加算
	spriteData.x -= speed;

}

//=============================================================================
// リリース
//=============================================================================
void BackGround::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();

	return;
}

//=============================================================================
// リセット
//=============================================================================
void BackGround::resetAll()
{
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
