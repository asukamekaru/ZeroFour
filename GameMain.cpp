#include "ZeroFour.h"
#include "GameMain.h"

//=============================================================================
// コンソール
//=============================================================================
GameMain::GameMain()
{}

//=============================================================================
// デストラクタ
//=============================================================================
GameMain::~GameMain()
{
	releaseAll();
}

//=============================================================================
// 初期化
//=============================================================================
void GameMain::initialize(HWND hwnd)
{
	Game::initialize(hwnd);//ゲームエラーをスロー

	//車1のテクスチャ
	if (!car_1_Texture.initialize(graphics,CAR_1_IMG))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula texture"));
	if (!car1tex.initialize(graphics,0,0,0,&car_1_Texture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing nebula"));
	//車1のテクスチャ
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
// アップデート
//=============================================================================
void GameMain::update()
{}

//=============================================================================
// 人工知能
//=============================================================================
void GameMain::ai()
{}

//=============================================================================
// 当たり判定
//=============================================================================
void GameMain::collisions()
{}

//=============================================================================
// 描画
//=============================================================================
void GameMain::render()
{
	graphics->spriteBegin();//スプライトの描画を開始

	bgcitytex.draw();
	car1tex.draw();

	graphics->spriteEnd();//スプライトの描画を終わる

}

//=============================================================================
// リリース
//=============================================================================
void GameMain::releaseAll()
{
	bg_city_Texture.onLostDevice();
	car_1_Texture.onLostDevice();
	Game::releaseAll();
	return;
}

//=============================================================================
// リセット
//=============================================================================
void GameMain::resetAll()
{
	bg_city_Texture.onResetDevice();
	car_1_Texture.onResetDevice();
	Game::resetAll();
	return;
}
