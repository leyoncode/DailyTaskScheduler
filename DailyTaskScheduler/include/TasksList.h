#ifndef TASKSLIST_H
#define TASKSLIST_H

#include <vector>

#include "Task.h"

class TasksList
{
    public:
        TasksList();
        virtual ~TasksList();

        void ReviseTasks(); //this will delete old tasks that are no longer needed and renew tasks that are needed regularly
        void InsertTask();

    protected:

    private:
        vector<Task> tasksList;
};

#endif // TASKSLIST_H
