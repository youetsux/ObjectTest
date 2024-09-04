#pragma once
#include <string>
#include <list>


class GameObject
{
private:
	GameObject* pParent_;
	std::string	objectName_;

public:
	GameObject();
	GameObject(GameObject* parent, const std::string& name);
	~GameObject();

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Release() = 0;

	std::string GetName() { return objectName_; }
};

extern std::list<GameObject*> gObjList;//Ç«Ç¡Ç©Ç≈êÈåæÇ≥ÇÍÇƒÇÈÇÊ

template <class T> 
T* Instantiate(GameObject* pParent, std::string name)
{
	T* pTmp = new T(pParent, name);
	if (pTmp != nullptr)
	{
		gObjList.push_back(pTmp);
	}
	return pTmp;
}