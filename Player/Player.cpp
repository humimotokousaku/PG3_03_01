#include "Player.h"
#include "Utility.h"
#include <Novice.h>

Player::Player() {
	
}

void Player::Init() {
	// 初期値の設定
	// 座標
	pos_ = { kWindowWidth / 2, kWindowHeight / 2 };
	// 速度
	const float kSpeed = 4.0f;
	vel_ = { kSpeed, kSpeed };
	// 半径
	radius_ = 16;
}

void Player::Update() {

}

void Player::Draw() {
	// 自機
	Novice::DrawEllipse(pos_.x, pos_.y, radius_, radius_, 0.0f, BLUE, kFillModeSolid);
}

void Player::MoveRight() {
	pos_.x += vel_.x;
}

void Player::LeftMove() {
	pos_.x -= vel_.x;
}