#include "Bullet.h"
#include <iostream>

Bullet::Bullet(GameObject* parent, std::string name)
	:GameObject(parent,name)
{
}

Bullet::~Bullet()
{
}

void Bullet::PrintBullet()
{
	using namespace std;
	if (isAlive)
		cout << GetName() <<  " : x = " << x << endl;
	else
		cout << "死に弾" << endl;
}


void Bullet::Initialize()
{
	isAlive = true;//はじめ弾は生きている
	x = 0;
}

void Bullet::Update()
{
	if(isAlive)
		x = x + 1;
	if (x > 10)
		isAlive = false;
}

void Bullet::Draw()
{
	PrintBullet();
}

void Bullet::Release()
{
}
