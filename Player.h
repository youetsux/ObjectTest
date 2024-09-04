#pragma once
#include "GameObject.h"

class Bullet;//�O���錾

class Player :
    public GameObject
{
    int x;
    int y;
    void PrintPlayer();//�v���C���[�̈ʒu��\��
    Bullet* bullet;
public:
    Player(GameObject* parent, std::string name);
    ~Player();

    //������
    void Initialize() override;
    //�X�V
    void Update() override;
    //�`��
    void Draw() override;
    //�J��
    void Release() override;
}; 

