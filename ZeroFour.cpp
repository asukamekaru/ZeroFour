#include "ZeroFour.h"

//=============================================================================
// コンソール
//=============================================================================
ZeroFour::ZeroFour()
{}

//=============================================================================
// デストラクタ
//=============================================================================
ZeroFour::~ZeroFour()
{
	releaseAll();
}

//=============================================================================
// 初期化
//=============================================================================
void ZeroFour::initialize(HWND hwnd)
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
void ZeroFour::update()
{}

//=============================================================================
// 人工知能
//=============================================================================
void ZeroFour::ai()
{}

//=============================================================================
// 当たり判定
//=============================================================================
void ZeroFour::collisions()
{}

//=============================================================================
// 描画
//=============================================================================
void ZeroFour::render()
{
	graphics->spriteBegin();//スプライトの描画を開始

	bgcitytex.draw();
	car1tex.draw();

	graphics->spriteEnd();//スプライトの描画を終わる

}

//=============================================================================
// リリース
//=============================================================================
void ZeroFour::releaseAll()
{
	bg_city_Texture.onLostDevice();
	car_1_Texture.onLostDevice();
	Game::releaseAll();
	return;
}

//=============================================================================
// リセット
//=============================================================================
void ZeroFour::resetAll()
{
	bg_city_Texture.onResetDevice();
	car_1_Texture.onResetDevice();
	Game::resetAll();
	return;
}
