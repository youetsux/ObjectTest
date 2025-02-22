#pragma once
#include "GameObject.h"
class Bullet :
    public GameObject
{
    bool isAlive;
    int x;
    void PrintBullet();
public:
    Bullet(GameObject *parent, std::string name);
    ~Bullet();
    //初期化
    void Initialize() override;
    //更新
    void Update() override;
    //描画
    void Draw() override;
    //開放
    void Release() override;

};

