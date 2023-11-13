#pragma once
#include "Player.h"
#include "Enemy.h"
#include <memory>

class Collision
{
public:
	/// 
	/// Default Method
	/// 
	// 初期化
	void Init(Player* player, Enemy* enemy);

	void CheckOnCollision();

private:
	Player* player_;

	Enemy* enemy_;
};