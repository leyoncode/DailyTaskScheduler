#include "DataStorage.h"

DataStorage::DataStorage()
{
}

DataStorage::~DataStorage()
{
}

void DataStorage::LoadData()
{
	//load TaskList from disk if available and save in tasksList
}

TasksList DataStorage::GetTaskList()
{
	return this->tasksList;
}

TasksList* DataStorage::GetTaskListPtr()
{
	return &(this->tasksList);
}

void DataStorage::SaveTaskList(TasksList tasksList)
{
	//save to file
}