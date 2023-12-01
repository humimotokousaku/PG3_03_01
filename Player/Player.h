#pragma once
#include "Vector2.h"
#include <memory>

class Player
{
public:
	///
	/// Default Method
	/// 

	// コンストラクタ
	Player();
	// デストラクタ
	~Player() = default;

	// 初期化
	void Init();
	// 更新処理
	void Update();
	// 描画
	void Draw();

	/// 
	/// User Method
	/// 
	/// キーごとのコマンド
	// 右に移動
	void MoveRight();
	// 左に移動
	void LeftMove();

	/// Getter
	Vector2 GetTranslation() { return pos_; }
	float GetRadius() { return radius_; }

private:
	Vector2 pos_;	// 座標
	Vector2 vel_;	// 速度
	float radius_;	// 半径
};

