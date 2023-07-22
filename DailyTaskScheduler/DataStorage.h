#pragma once

#include "TasksList.h"

class DataStorage
{
public:
	DataStorage();
	virtual ~DataStorage();
	void LoadData(); //load data into taskslist
	TasksList GetTaskList(); //get all tasks
	TasksList* GetTaskListPtr(); //get tasksList pointer
	void SaveTaskList(TasksList tasksList); //save data to disk
private:
	TasksList tasksList; //keep data in ram for faster access
};
