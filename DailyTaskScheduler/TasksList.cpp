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
    //add tasks with unique name only to make it easier to delete later manually if not needed
    string newTaskName = newTask.GetName();
    for (Task taskItem : this->tasksList)
    {
        string taskName = taskItem.GetName();
        //verify for unique name
        if (taskName.compare(newTaskName) == 0) //strings equal when 0
        {
            throw exception("Task with that name already exists!");
            return; //cancel operation
        }
    }

    this->tasksList.push_back(newTask); //store newTask in taskList
}

void TasksList::DeleteOldTasks()
{
    for (int i = 0; i < this->tasksList.size(); i++)
    {
        Task tmpItem = this->tasksList[i];
        SimpleDate tmpDate = tmpItem.GetDate();

        //check if the date for the Task is older than today
        if (tmpDate < SimpleGetDateTime::GetSimpleDate())
        {
            if (tmpItem.GetRepeat() == Repeat::RepeatNever)
            {
                //delete this old task that was just inspected
                tasksList.erase(tasksList.begin() + i);
            }
        }
    }
}

void TasksList::DeleteTask(Task deleteTask)
{
    int i = 0;
    for (Task taskItem : this->tasksList)
    {
        string taskName = taskItem.GetName();
        if (taskName.compare(deleteTask.GetName()) == 0) //strings equal when 0
        {
            tasksList.erase(tasksList.begin() + i);
        }

        i++;
    }
}
