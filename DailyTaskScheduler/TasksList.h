#pragma once

#include <vector>
#include <string>

#include "Task.h"
#include "SimpleGetDateTime.h"

using namespace std;

class TasksList
{
    public:
        TasksList();
        virtual ~TasksList();

        void InsertTask(Task newTask);
        void DeleteOldTasks();
        void DeleteTask(Task deleteTask);

    protected:

    private:
        vector<Task> tasksList;
        vector<int> a;
};

