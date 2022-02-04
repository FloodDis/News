#pragma once
#include "Human.h"

class Employee : public Human
{
private:
	string _position;
public:
	Employee(string name, string gender, string position);
	Employee();
	string GetPosition();
	void SetPosition(string newPosition);
};