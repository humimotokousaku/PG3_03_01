#include "GameManager.h"
#include "GamePlayScene.h"
#include "TitleScene.h"
#include "ClearScene.h"
#include "Utility.h"
#include <Novice.h>

GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<GamePlayScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	currentSceneNo_ = TITLE;
}

int GameManager::Run() {
	const char kWindowTitle[] = "LE2B_16_フミモト_コウサク";

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);

	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();

		// シーンチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		// シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		///
		/// 更新処理
		/// 
		sceneArr_[currentSceneNo_]->Update();

		///
		/// 描画処理
		/// 
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}