#pragma once
#include "Employee.h"

class NewsAgency
{
private:
	Employee _seniorManager;
	string _currentArticle;
public:
	NewsAgency();
	string GetArticle();
	void SetArticle(string newPeaceOfNews);
};