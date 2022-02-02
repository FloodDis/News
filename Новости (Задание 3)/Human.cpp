#include "Human.h"

Human::Human(string name, string gender)
{
	_name = name;
	_gender = gender;
}

Human::Human()
{
	_name = "";
	_gender = "";
}

string Human::GetName()
{
	return _name;
}

string Human::GetGender()
{
	return _gender;
}

void Human::SetName(string newName)
{
	_name = newName;
}

void Human::SetGender(string newGender)
{
	_gender = newGender;
}