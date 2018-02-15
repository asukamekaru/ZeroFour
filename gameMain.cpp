//
//2018/02/15
//銘苅朝香
//

#include "gameMain.h"

//=============================================================================
// コンストラクタ
//=============================================================================
GameMainScene::GameMainScene()
{
	//dxFont = new TextDX();  // DirectX font
	//messageY = 0;
}

//=============================================================================
// デストラクタ
//=============================================================================
GameMainScene::~GameMainScene()
{
	releaseAll();           // call onLostDevice() for every graphics item
	//safeDelete(dxFont);
}

//=============================================================================
// 初期化
//=============================================================================
void GameMainScene::initialize(HWND hwnd)
{
	Game::initialize(hwnd); // スローゲームエラー

	// メニューテクスチャ
	if (!menuTexture.initialize(graphics,MENU_IMAGE))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing menu texture"));
	// メニューイメージ
	if (!menu.initialize(graphics,0,0,0,&menuTexture))
		throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing menu"));

	//// シティ背景テクスチャ
	//if (!bgCityTexture.initialize(graphics,BR_CITY_IMAGE))
	//	throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city background texture"));
	//// シティイメージ
	//if (!bgcity.initialize(graphics,0,0,0,&bgCityTexture))
	//	throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing city"));



	bg.initialize();


	/* 文字記入方法*/
	//if(dxFont->initialize(graphics, 18, true, false, "Arial") == false)
	//    throw(GameError(gameErrorNS::FATAL_ERROR, "Error initializing DirectX font"));
	//
	//menu.setDegrees(300);
	//menu.setScale(0.002861f);
	//
	//message = "\n\n\nUtilizes Object Oriented C++ and DirectX\n\n";
	//message += "Sprites with Transparency\n\n";
	//message += "Xbox 360 Controller Input\n\n";
	//message += "Collision Detection Supported:\n";
	//message += "     - Circular (Distance)\n";
	//message += "     - Axis-aligned bounding box\n";
	//message += "     - Rotated bounding box\n";
	//message += "     - Rotated bounding box and circle\n\n";
	//message += "XACT Audio\n\n";
	//message += "Sprite and DirectX Text\n\n";
	//message += "Tile Based Graphics\n\n";
	//message += "TCP/IP and UDP/IP Network Support\n\n";
	//messageY = GAME_HEIGHT;

	return;
}

//=============================================================================
// 更新
//=============================================================================
void GameMainScene::update()
{
	/* スクロール*/
	//if(menu.getDegrees() > 0)
	//{
	//    menu.setDegrees(menu.getDegrees() - frameTime * 120);
	//    menu.setScale(menu.getScale() + frameTime * 0.4f);
	//}
	//else if(messageY > -500)
	//{
	//    menu.setDegrees(0);
	//    menu.setY(menu.getY() - frameTime * 50);
	//    messageY -= frameTime * 50;
	//}
	//else    // start over
	//{
	//    menu.setDegrees(300);
	//    menu.setScale(0.002861f);
	//    menu.setY(0);
	//    messageY = GAME_HEIGHT;
	//}
	bg.update();
}

//=============================================================================
// 人工知能
//=============================================================================
void GameMainScene::ai()
{}

//=============================================================================
// 当たり判定
//=============================================================================
void GameMainScene::collisions()
{}

//=============================================================================
// 描画
//=============================================================================
void GameMainScene::render()
{
	graphics->spriteBegin();                // begin drawing sprites

	menu.draw();

	bg.render();
	//dxFont->setFontColor(graphicsNS::ORANGE);
	//dxFont->print(message,20,(int)messageY);

	graphics->spriteEnd();                  // end drawing sprites
}

//=============================================================================
// リリース
//=============================================================================
void GameMainScene::releaseAll()
{
	//dxFont->onLostDevice();
	menuTexture.onLostDevice();
	//bgCityTexture.onLostDevice();
	bg.releaseAll();
	Game::releaseAll();
	return;
}

//=============================================================================
// リセット
//=============================================================================
void GameMainScene::resetAll()
{
	menuTexture.onResetDevice();
	//bgCityTexture.onResetDevice();
	//dxFont->onResetDevice();
	bg.resetAll();
	Game::resetAll();
	return;
}
