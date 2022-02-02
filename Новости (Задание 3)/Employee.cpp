#include "Employee.h"

Employee::Employee(Human person, string position)
{
	_person.SetName(person.GetName());
	_person.SetGender(person.GetGender());
	_position = position;
}

Employee::Employee()
{
	_person.SetName("");
	_person.SetGender("");
	_position = "";
}

void Employee::SetPosition(string newPosition)
{
	_position = newPosition;
}

string Employee::GetPosition()
{
	return _position;
}