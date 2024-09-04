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
    //������
    void Initialize() override;
    //�X�V
    void Update() override;
    //�`��
    void Draw() override;
    //�J��
    void Release() override;

};

