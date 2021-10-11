#pragma once

#include <iostream>
#include <string>
#include "Task.h"
#include "TasksList.h"

using namespace std;

class ConsoleUI
{
	public:
		ConsoleUI();
		virtual ~ConsoleUI();
		void StartApp();
	private:
		TasksList taskList;
		void LoadTaskList();

		void ShowHeader();
		void ShowMenu();
		void HandleMenuSelection();
		void ShowNewTaskCreator();
		void ShowTask(Task task);
		void ShowTasksForToday();
		void ShowAllTasks();
		void ShowSettings();
		void ShowHelp();
		void ExitApp();
};
