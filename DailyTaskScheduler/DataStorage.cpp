#include "DataStorage.h"

DataStorage::DataStorage()
{
}

DataStorage::~DataStorage()
{
}

TasksList DataStorage::GetTaskList()
{
	return this->tasksList;
}

void DataStorage::SaveTaskList()
{
	//save to file
}

