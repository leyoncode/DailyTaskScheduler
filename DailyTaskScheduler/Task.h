#pragma once

#include <string>
#include "SimpleDate.h"
#include "SimpleTime.h"

using namespace std;

enum class Repeat { RepeatNever, RepeatDaily, RepeatWeekly, RepeatMonthly, RepeatYearly };

/*
* Task - Specification & How to use
* =================================================================================
* RepeatNever   - Set fixed date to repeat once only.
* RepeatDaily   - No need to set date.
* RepeatWeekly  - Set fixed DaysOfWeek (defined in SimpleDate) to repeat on that day every week.
* RepeatMonthly - Set fixed dayOfMonth and repeat on that dayOfMonth every month.
* RepeatYearly  - Set fixed dayOfMonth and month and repeat on that dayOfMonth and month every year.
*
* *Time is optional, day/date and repeat option is mandatory to be filled.
* **WARNING trying to call functions beyond how this class is specified will result in false values and errors
*/

class Task
{
public:
	//Different constructors to match different Repeat conditions
	Task(string taskName, unsigned int dayOfMonth, unsigned int month, unsigned int year); //RepeatNever
	Task(string taskName); //RepeatDaily
	Task(string taskName, DaysOfWeek dayOfWeek); //RepeatWeekly
	Task(string taskName, unsigned int dayOfMonth); //RepeatMonthly
	Task(string taskName, unsigned int dayOfMonth, unsigned int month); //RepeatYearly
	virtual ~Task();

	void SetName(string taskName);
	void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //set next repeat date
	void SetStartHour(unsigned int hour, unsigned int minute); //set next repeat start hour
	void SetEndHour(unsigned int hour, unsigned int minute);   //set next repeat end hour
	void SetRepeat(Repeat repeat); //if set to repeat TaskList will extend the date to repeat it instead of deleting it.
	Repeat GetRepeat(); //see how often this task is set to repeat
	bool IsRepeatingTask(); //this is used by TaskList to see if this task is needed regularly.
	string GetName();
	SimpleDate GetDate();
	SimpleTime GetStartHour();
	SimpleTime GetEndHour();

protected:

private:
	string taskName; //mandatory
	SimpleDate date; //mandatory
	SimpleTime startHour; //optional
	SimpleTime endHour;   //optional
	Repeat repeat = Repeat::RepeatNever; //mandatory. set in constructor
};
