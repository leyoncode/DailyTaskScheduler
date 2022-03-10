#pragma once

#include <iostream>
#include <string>
#include "Task.h"
#include "TasksList.h"

#include <iostream>

using namespace std;

class ConsoleUI
{
public:
	ConsoleUI();
	virtual ~ConsoleUI();
	void StartApp();
	void ResetConsoleView();
private:
	TasksList taskList;
	void LoadTaskList();

	void ShowHeader();          //shows header texts.
	void ShowMenu();            //shows menu used to navigate the app.
	void HandleMenuSelection(); //handle console input for menu.
	void ShowNewTaskCreator();  //show options to create new task.
	void ShowTask(Task task);   //used to display one task
	void ShowTasksForToday();   //show tasks for today.
	void ShowAllTasks();        //show all tasks that have not been finished.
	void ShowSettings();        //show settings for the app.
	void ShowHelp();            //show how to use the app.
	void ExitApp();             //exit the app.
	//private helper functions
	int getPositiveIntInput();       //get positive integer value from cin.
	string getStringInput(int maxLength = 0); //get string from cin of set max length. 0 meaning no limit.
	void pauseUI(); //shows press enter to continue
};
