#include "Employee.h"

Employee::Employee(string name, string gender, string position)
{
	SetName(name);
	SetGender(gender);
	SetPosition(position);
}

Employee::Employee()
{
	SetName("");
	SetGender("");
	SetPosition("");
}

void Employee::SetPosition(string newPosition)
{
	_position = newPosition;
}

string Employee::GetPosition()
{
	return _position;
}