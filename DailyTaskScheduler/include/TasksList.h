#ifndef TASKSLIST_H
#define TASKSLIST_H

#include <vector>

#include "Task.h"
#include "SimpleGetDateTime.h"

using namespace std;

class TasksList
{
    public:
        TasksList();
        virtual ~TasksList();

        void InsertTask(Task newTask);
        void ReviseTasks(); //this will delete old tasks that are no longer needed and renew tasks that are needed regularly

    protected:

    private:
        vector<Task> tasksList;
        vector<int> a;
};

#endif // TASKSLIST_H
