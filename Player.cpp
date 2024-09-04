#include "Player.h"
#include <iostream>
#include "Bullet.h"

using namespace std;

Player::Player(GameObject* parent, std::string name)
	:GameObject(parent, name), bullet(nullptr)
{
}

Player::~Player()
{
}

void Player::PrintPlayer()
{//�v���C���[��̕\���i����Draw�ŌĂ΂��j
	cout << GetName() <<  " : x, y = " << x << " , " << y << endl;
}

void Player::Initialize()
{
	x = 1;
	y = 1;
	bullet = new Bullet(this, "BULLET");
	bullet->Initialize();
}

void Player::Update()
{
	if (x < 10)
		x = x + 1;
	else
		y = y + 1;
	bullet->Update();
}

void Player::Draw()
{
	PrintPlayer();
	bullet->Draw();
}

void Player::Release()
{
	cout << "���" << endl;
	if (bullet != nullptr)
		delete bullet;
}
