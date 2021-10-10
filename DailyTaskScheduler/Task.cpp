#include "Task.h"

Task::Task(string taskName, unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    this->taskName = taskName;
    this->repeat = repeat;
    this->date.SetDate(dayOfMonth, month, year);
    this->repeat = Repeat::RepeatNever;
}

Task::Task(string taskName)
{
    this->taskName = taskName;
    this->repeat = Repeat::RepeatDaily;
}

Task::Task(string taskName, DaysOfWeek dayOfWeek)
{
    this->taskName = taskName;
    this->repeat = Repeat::RepeatWeekly;
}

Task::Task(string taskName, unsigned int dayOfMonth)
{
    this->date.SetDate(dayOfMonth, 0, 0);
    this->repeat = Repeat::RepeatMonthly;
}

Task::Task(string taskName, unsigned int dayOfMonth, unsigned int month)
{
    this->date.SetDate(dayOfMonth, month, 0);
    this->repeat = Repeat::RepeatYearly;
}

Task::~Task()
{
    //dtor
}

string Task::GetName()
{
    return this->taskName;
}

void Task::SetName(string taskName)
{
    this->taskName = taskName;
}

void Task::SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    this->date.SetDate(dayOfMonth, month, year);
}

void Task::SetStartHour(unsigned int hour, unsigned int minute)
{
    this->startHour.SetTime(hour, minute);
}

void Task::SetEndHour(unsigned int hour, unsigned int minute)
{
    this->endHour.SetTime(hour, minute);
}

void Task::SetRepeat(Repeat repeat)
{
    this->repeat = repeat;
}

Repeat Task::GetRepeat()
{
    return this->repeat;
}

bool Task::IsRepeatingTask()
{
    if (repeat == Repeat::RepeatNever)
    {
        return false;
    }
    else
    {
        return true;
    }
}

SimpleDate Task::GetDate()
{
    return this->date;
}

SimpleTime Task::GetStartHour()
{
    return this->startHour;
}

SimpleTime Task::GetEndHour()
{
    return this->endHour;
}
