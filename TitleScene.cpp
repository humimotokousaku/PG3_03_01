#include "TitleScene.h"

void TitleScene::Init() {

}

void TitleScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {
	// 文字を表示
	Novice::ScreenPrintf(0, 10, "TitleScene");
	Novice::ScreenPrintf(0, 30, "Press SPACE");
}