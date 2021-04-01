#ifndef TASKSLIST_H
#define TASKSLIST_H

#include <vector>
#include "Task.h"

class TasksList
{
    public:
        TasksList();
        virtual ~TasksList();

    protected:

    private:
        vector<Task> tasksList;
};

#endif // TASKSLIST_H
