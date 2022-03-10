#pragma once

#include <string>

using namespace std;

enum class DaysOfWeek { SUN, MON, TUE, WED, THU, FRI, SAT };

class SimpleDate
{
public:
	SimpleDate();
	SimpleDate(DaysOfWeek dayOfWeek); //just set the dayOfWeek enum value and use arbitrary date values
	SimpleDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //this will automatically set the DaysOfWeek day value
	virtual ~SimpleDate();

	void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //use this to change date. this will also automatically set the DaysOfWeek day value
	void SetDay(DaysOfWeek dayOfWeek); //directly set day using enum. don't use if day was set from date or day will be inconsistent with date
	void SetDay(unsigned int dayOfMonth, unsigned int month, unsigned int year);  //this will calculate day from date
	string GetDate(); //returns date formatted as dd-mm-yyyy
	unsigned int GetDayOfMonth();
	unsigned int GetMonth();
	unsigned int GetYear();
	DaysOfWeek GetDay();

	bool operator>(SimpleDate compDate); //overloading greater than operator. wil return true if rhs is greater than lhs
	bool operator<(SimpleDate compDate); //overloading less than operator. wil return true if rhs is less than lhs
	bool operator==(SimpleDate compDate); //overloading equality than operator. wil return true if rhs is equal to lhs

protected:

private:
	unsigned int dayOfMonth;
	unsigned int month;
	unsigned int year;
	DaysOfWeek day;
	void ValidateDayMonth(unsigned int dayOfMonth, unsigned int month); //throws exception if invalid
};
