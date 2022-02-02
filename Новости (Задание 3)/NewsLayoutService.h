#pragma once
#include "Employee.h"

class NewsLayoutService
{
private:
	Employee _layoutDesigner;
	NewsProgram _newsList;
public:
	NewsLayoutService();
	void SetNewsProgram(int newsCount);
	string GiveOutNewsProgram();
};