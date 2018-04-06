#ifndef _GAME_MAIN_H           
#define _GAME_MAIN_H           
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <sstream>
#include "game.h"
#include "textureManager.h"
#include "backGround.h"
#include "image.h"
#include "textDX.h"
#include "carMain.h"


namespace gamemainNS{

	//各背景のサイズ等
	//stage1
	const float	BG_IMG_Y	 = -100;
	const float BG_IMG_SCALE = 0.5;
}
//=============================================================================
// ゲームメイン
//=============================================================================
class GameMainScene : public Game
{
private:
	// ゲームアイテム
	// 画像
	TextureManager	menuTexture;		// メニューテクスチャ
	Image			menu;               // メニューイメージ
	TextureManager	bgCityTexture;		// 背景テクスチャ
	//クラス
	BackGround		background;			//背景
	CarMain			carmain;			//車メイン

	// フォント
	TextDX  *dxFont;            // フォント
	std::string  message;
	float messageY;

public:
	GameMainScene();
	virtual ~GameMainScene();
	void initialize(HWND hwnd);
	void update();      
	void ai();          
	void collisions();  
	void render();      
	void releaseAll();
	void resetAll();
};

#endif//_GAME_MAIN_H
