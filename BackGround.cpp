#include "backGround.h"

//=============================================================================
// コンソール
//=============================================================================
BackGround::BackGround() : Entity()
{}

//=============================================================================
// 初期化
//=============================================================================
void BackGround::initialize()
{
	// シティ背景テクスチャ
	if (!bgCityTexture.initialize(graphics,BR_CITY_IMAGE))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city background texture"));
	// シティイメージ
	if (!bgcity.initialize(graphics,0,0,0,&bgCityTexture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city"));

	bgcity.setScale(0.5f);//背景スケール設定
	bgcity.setY(-200);//背景Y座標設定
}

//=============================================================================
// アップデート
//=============================================================================
void BackGround::update()
{

}
//=============================================================================
// 描画
//=============================================================================
void BackGround::render()
{
	//graphics->spriteBegin();//スプライトの描画を開始

	//bgcitytex.draw();

	//graphics->spriteEnd();//スプライトの描画を終わる

	bgcity.draw();

}

//=============================================================================
// リリース
//=============================================================================
void BackGround::releaseAll()
{
	//bg_city_Texture.onLostDevice();
	//Game::releaseAll();
	bgCityTexture.onLostDevice();
	return;
}

//=============================================================================
// リセット
//=============================================================================
void BackGround::resetAll()
{
	bgCityTexture.onResetDevice();
	//bg_city_Texture.onResetDevice();
	//Game::resetAll();
	return;
}
