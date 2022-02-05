#pragma once
#include <vector>
#include <queue>
#include <string>
using namespace std;

class NewsProgram
{
private:
	queue <string> _news;
public:
	NewsProgram(string news);
	void SetNewsProgram(string news);
	string GetNewsProgram();
};