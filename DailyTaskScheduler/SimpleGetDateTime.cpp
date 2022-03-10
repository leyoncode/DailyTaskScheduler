#include "SimpleGetDateTime.h"

SimpleGetDateTime::SimpleGetDateTime()
{
	//ctor
}

SimpleGetDateTime::~SimpleGetDateTime()
{
	//dtor
}

unsigned int SimpleGetDateTime::GetDayOfMonth()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	return localTime->tm_mday;
}

unsigned int SimpleGetDateTime::GetMonth()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	return localTime->tm_mon + 1;
}

unsigned int SimpleGetDateTime::GetYear()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	return localTime->tm_year + 1900;
}

unsigned int SimpleGetDateTime::GetHour()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	return localTime->tm_hour;
}

unsigned int SimpleGetDateTime::GetMinute()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	return localTime->tm_min;
}

SimpleDate SimpleGetDateTime::GetSimpleDate()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	SimpleDate newCurrentDate(
		localTime->tm_mday,
		localTime->tm_mon + 1,
		localTime->tm_year + 1900
	);

	return newCurrentDate;
}

SimpleTime SimpleGetDateTime::GetSimpleTime()
{
	time_t now = time(0);
	tm* localTime = localtime(&now);

	SimpleTime newCurrentTime(localTime->tm_hour, localTime->tm_min);

	return newCurrentTime;
}