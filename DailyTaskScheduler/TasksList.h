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

	vector<Task> GetTasksForToday();
	vector<Task> GetAllTasks();

	void SetTaskList(vector<Task> taskList);

protected:

private:
	vector<Task> tasksList;
};
