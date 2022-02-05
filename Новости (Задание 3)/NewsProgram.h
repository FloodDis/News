#pragma once
#include <vector>
#include <queue>
#include <string>
using namespace std;

class NewsProgram
{
private:
	queue <string> _news;
	int _newsCount = 0;
public:
	NewsProgram(string news);
	NewsProgram();
	void SetNewsProgram(string news);
	string GetNewsProgram();
};