#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Gender
{
	male,
	female
};

class Human
{
private:
	string _name;
	Gender _gender;
public:
	Human(string name, Gender gender);
	Human();
	string GetName();
	string GetGender();
	void SetName(string newName);
	void SetGender(string newGender);
};