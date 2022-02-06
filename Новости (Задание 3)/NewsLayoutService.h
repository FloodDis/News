#pragma once
#include "Employee.h"
#include "NewsProgram.h"

class NewsLayoutService
{
private:
	Employee _layoutDesigner;
	NewsProgram _newsList;
public:
	NewsLayoutService();
	NewsLayoutService(string name, Gender gender, string position, string news);
	void SetNewsProgram();
	string GetNewsFromNewsProgram();
};