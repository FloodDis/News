#pragma once
#include "Employee.h"

class Channel
{
private:
	Employee _editor;
	string _currentNews;
public:
	Channel(Employee person, string currentNews);
	string SetCurrentNews(string newCurrentNews);
	void GiveOutNews();
};