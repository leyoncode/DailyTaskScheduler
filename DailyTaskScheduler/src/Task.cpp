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
    //string newDate = day + "-" + month + "-" + year;
    //this->date = newDate;
    this->date.clear(); //clear date so that the date can be re-entered

}
