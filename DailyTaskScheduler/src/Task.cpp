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

void Task::SetDate(int day, int month, int year)
{
}
