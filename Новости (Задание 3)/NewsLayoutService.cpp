#include "NewsLayoutService.h"

void NewsLayoutService::SetNewsProgram(int newsCount)
{
	string buffer;
	for (int i = 0; i < newsCount; i++)
	{

	}
}

NewsLayoutService::NewsLayoutService()
{
	Employee();
	NewsProgram();
}

NewsLayoutService::NewsLayoutService(string name, Gender gender, string position, string news)
{
	Employee(name, gender, position);
	NewsProgram(news);
}