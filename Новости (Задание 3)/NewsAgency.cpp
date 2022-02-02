#include "NewsAgency.h"

NewsAgency::NewsAgency()
{
	Employee();
	_currentPeaceOfNews = "";
}

void NewsAgency::SetPeaceOfNews(string newPeaceOfNews)
{
	_currentPeaceOfNews = newPeaceOfNews;
}

string NewsAgency::GetPeaceOfNews()
{
	return _currentPeaceOfNews;
}