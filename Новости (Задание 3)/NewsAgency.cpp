#include "NewsAgency.h"

NewsAgency::NewsAgency()
{
	Employee();
	_currentArticle = "";
}

void NewsAgency::SetArticle(string newPeaceOfNews)
{
	_currentArticle = newPeaceOfNews;
}

string NewsAgency::GetArticle()
{
	return _currentArticle;
}