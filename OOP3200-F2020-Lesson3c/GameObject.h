#pragma once
#ifndef  __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"
class GameObject
{
public:
	GameObject();
	GameObject(int id,float x, float y);
	GameObject(int id,const Vector2D& position);

	//Rule of three
	~GameObject(); //Destructor

	GameObject(const GameObject& other_object);//copy constructor

	GameObject &operator=(const GameObject& other_object); //Assignment Operator

	//Accessor
	Vector2D GetPosition() const;
	int GetID() const;
	//Mutator
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	//Utility functions
	std::string ToString() const;
private:
	int m_id;
	Vector2D m_position;
	
};


#endif

