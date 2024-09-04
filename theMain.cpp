#include <iostream>
#include "Player.h"
#include "Bullet.h"
#include <list>
using namespace std;

list<GameObject*> gObjList;
int main()
{
	//Player* player1 = new Player(nullptr, "PLAYER1");
	//gObjList.push_back(player1);
	//Player* player2 = new Player(nullptr, "PLAYER2");
	//gObjList.push_back(player2);
	//Bullet* bl3 = new Bullet(player2, "P2BULLET");
	//gObjList.push_back(bl3);

	Instantiate<Player>(nullptr, "PLAYER1");
	Player* player2 = Instantiate<Player>(nullptr, "PLAYER2");
	Instantiate<Bullet>(player2, "P2BULLET");

	for (auto& itr : gObjList)//オブジェクト全部を走査
	//for(int i=0; i<gObjList.size(); i++)
		itr->Initialize();

	int fps = 0;
	while (true)
	{
		cout << fps << "フレーム目" << endl;

		for (auto& itr : gObjList)
			itr->Update();
		
		for (auto& itr : gObjList)
			itr->Draw();
		
		fps++;
		getchar();
	}
}