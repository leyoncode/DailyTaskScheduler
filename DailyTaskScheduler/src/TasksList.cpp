#include "TasksList.h"

TasksList::TasksList()
{
    //ctor
}

TasksList::~TasksList()
{
    //dtor
}

void TasksList::InsertTask(Task newTask)
{
    this->tasksList.push_back(newTask);
}

void TasksList::ReviseTasks()
{
    for (int i = 0; i < this->tasksList.size(); i++)
    {
        Task tmp = this->tasksList[i];
        SimpleDate tmpDate = tmp.GetDate();

        if (tmpDate < SimpleGetDateTime::GetSimpleDate())
        {
            //check if the date for the Task is older than today
            if ( tmp.GetRepeat() == Repeat::RepeatNever)
            {
                tasksList.erase( tasksList.begin() + i ); //delete this Task that was just inspected
            }
            else if (tmp.GetRepeat() == Repeat::RepeatDaily)
            {
                  //set next date
            }
            else if (tmp.GetRepeat() == Repeat::RepeatWeekly)
            {
                  //set next date
            }
            else if (tmp.GetRepeat() == Repeat::RepeatMonthly)
            {
                  //set next date
            }
            else if (tmp.GetRepeat() == Repeat::RepeatYearly)
            {
                  //set next date
            }
        }
    }
}
