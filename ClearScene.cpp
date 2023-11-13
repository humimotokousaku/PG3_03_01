#include "ClearScene.h"
#include <Novice.h>

void ClearScene::Init() {

}

void ClearScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	// 文字を表示
	Novice::ScreenPrintf(0, 10, "GameClear");
	Novice::ScreenPrintf(0, 30, "Press SPACE");
}