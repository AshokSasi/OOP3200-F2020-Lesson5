/*
 *Name: Ashok Sasithararn
 *Student ID: 100745484
 *Date: October 7 2020
 * File: main.cpp
 */
#include <iomanip>
#include <iostream>
#include <vector>


#include "GameObject.h"

static void BuildGameObjects( std::vector<GameObject*>& game_objects, const int number=2)
{

	for(auto i = 0;i < number; i++)
	{
		int id;
		std::cout << "Enter the gameObject ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject's Position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the gameObject's ID" << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's Position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* gameObject= new GameObject(id, point);
		game_objects.push_back(gameObject);
	}
	
	
}

static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first gameObject and second gameObject is: "
		<< Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first gameObject to the second gameObject is: "
		<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First game object details: " << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second game object details: " << std::endl;
	std::cout << object2->ToString() << std::endl;
}

int main()
{
	std::vector<GameObject*> gameObjects;
	int numOfGameObj;
	std::cout << "How many game objects do you need?: ";
	std::cin >> numOfGameObj;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	
	BuildGameObjects(gameObjects,numOfGameObj);

	int index1;
	std::cout << "What is the First object index: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	
	int index2;
	std::cout << "What is the Second object index: ";
	std::cin >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
}

