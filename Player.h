#pragma once
#include "GameObject.h"

class Bullet;//前方宣言

class Player :
    public GameObject
{
    int x;
    int y;
    void PrintPlayer();//プレイヤーの位置を表示
    Bullet* bullet;
public:
    Player(GameObject* parent, std::string name);
    ~Player();

    //初期化
    void Initialize() override;
    //更新
    void Update() override;
    //描画
    void Draw() override;
    //開放
    void Release() override;
}; 

