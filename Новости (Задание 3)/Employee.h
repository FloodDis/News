#pragma once
#include "Human.h"

class Employee
{
private:
	Human _person;
	string _position;
public:
	Employee(Human person, string position);
	Employee();
	string GetPosition();
	void SetPosition(string newPosition);
};