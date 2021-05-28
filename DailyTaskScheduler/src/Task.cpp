#include "Task.h"

Task::Task(string taskName)
{
    this->taskName = taskName;
}

Task::Task(string taskName, Repeat repeat, DaysOfWeek scheduledDay)
{
    this->taskName = taskName;
    this->repeat = repeat;
    this->date.SetDay(scheduledDay);
}

Task::Task(string taskName, unsigned int dayOfMonth, unsigned int month, unsigned int year, Repeat repeat)
{
    this->taskName = taskName;
    this->repeat = repeat;
    this->date.SetDate(dayOfMonth, month, year);
}

Task::~Task()
{
    //dtor
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
