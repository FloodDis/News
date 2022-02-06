#include "NewsProgram.h"

NewsProgram::NewsProgram(string news)
{
	_news.push(news);
	_newsCount++;
}

NewsProgram::NewsProgram()
{

}

void NewsProgram::SetNewsProgram(string news)
{
	_news.push(news);
	_newsCount++;
}

string NewsProgram::GetNewsProgram()
{
	string answer = _news.front();
	_news.pop();
	_newsCount--;
	return answer;
}

int NewsProgram::GetNewsCount()
{
	return _newsCount;
}