#pragma once
#include "Employee.h"

class NewsAgency
{
private:
	Employee _seniorManager;
	string _currentPeaceOfNews;
public:
	NewsAgency();
	string GetPeaceOfNews();
	void SetPeaceOfNews(string newPeaceOfNews);
};