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
}

string NewsProgram::GetNewsProgram()
{
	_news.front();
	_news.pop();
}