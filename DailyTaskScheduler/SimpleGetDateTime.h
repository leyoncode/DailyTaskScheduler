#pragma once
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <time.h>
#include "SimpleDate.h"
#include "SimpleTime.h"

using namespace std;

//wrapper class to simplify handling with date and time, and get current date/time
//this function is supposed to be used only to get date and time values.
//could've used a struct here, but didn't do that to keep things simple.
class SimpleGetDateTime
{
public:
	SimpleGetDateTime();
	virtual ~SimpleGetDateTime();

	static unsigned int GetDayOfMonth();
	static unsigned int GetMonth();
	static unsigned int GetYear();
	static unsigned int GetHour();
	static unsigned int GetMinute();

	static SimpleDate GetSimpleDate();
	static SimpleTime GetSimpleTime();
	//static SimpleDate GetDateAfter(unsigned int days, unsigned int months, unsigned int years); //give date after x days, y months, z years

protected:

private:
};
