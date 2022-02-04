#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string _name;
	enum _gender 
	{
		male,
		female
	};
public:
	Human(string name, string gender);
	Human();
	string GetName();
	string GetGender();
	void SetName(string newName);
	void SetGender(string newGender);
};