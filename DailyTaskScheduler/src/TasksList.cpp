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
        if ( tmp.GetRepeat() == Repeat::RepeatNever)
        {
            SimpleDate tmpDate = tmp.GetDate();
            //if (tmpDate.GetYear )
        }
    }
}
