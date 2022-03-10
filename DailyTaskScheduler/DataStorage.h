#pragma once

#include "TasksList.h"

class DataStorage
{
public:
	DataStorage();
	virtual ~DataStorage();
	TasksList GetTaskList();
	void SaveTaskList();
private:
	TasksList tasksList;
};
