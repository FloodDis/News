#include "NewsLayoutService.h"

void NewsLayoutService::SetNewsProgram()
{
	int newsCount = _newsList.GetNewsCount();
	string* buffer=new string[newsCount];
	int* bufferSize = new int[newsCount];
	for (int i = 0; i < newsCount; i++)
	{
		buffer[i] = _newsList.GetNewsProgram();
	}
	for (int i = 0; i < newsCount; i++)
	{
		int j = 0;
		while (buffer[i][j] != '\0')
		{
			j++;
		}
		bufferSize[i] = j;
	}
	for (int i = 1; i < newsCount; i++)
	{
		for (int j = i; j > 0 && bufferSize[j - 1] > bufferSize[j]; j--)
		{
			swap(bufferSize[j - 1], bufferSize[j]);
			swap(buffer[j - 1], buffer[j]);
		}
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

NewsProgram NewsLayoutService::GiveOutNewsProgram()
{
	return _newsList
}