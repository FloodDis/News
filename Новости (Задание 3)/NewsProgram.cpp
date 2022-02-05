#include "NewsProgram.h"

NewsProgram::NewsProgram(string news)
{
	_news.push(news);
}

void NewsProgram::SetNewsProgram(string news)
{
	_news.push_back(news);
}