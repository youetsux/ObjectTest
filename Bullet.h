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
    //‰Šú‰»
    void Initialize() override;
    //XV
    void Update() override;
    //•`‰æ
    void Draw() override;
    //ŠJ•ú
    void Release() override;

};

