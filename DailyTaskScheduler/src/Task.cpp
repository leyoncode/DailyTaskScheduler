#include "Task.h"

Task::Task(string taskName)
{
    this->taskName = taskName;
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

void Task::SetRegular(bool regularity)
{
    this->isRegularTask = regularity;
}

bool Task::IsRegularTask()
{
    return this->isRegularTask;
}
