#include "Channel.h"

Channel::Channel(Employee person, string currentNews)
{
	_editor = person;
	_currentNews = currentNews;
}

string Channel::SetCurrentNews(string newCurrentNews)
{
	_currentNews = newCurrentNews;
}

void Channel::GiveOutNews()
{
	cout << _currentNews;
}