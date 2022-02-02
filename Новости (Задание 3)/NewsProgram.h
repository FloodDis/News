#pragma once
#include <vector>
#include <string>
using namespace std;
class NewsProgram
{
private:
	vector <string> _news;
public:
	NewsProgram(string news);
	void SetNewsProgram(string news);
	string GetNewsProgram();
};