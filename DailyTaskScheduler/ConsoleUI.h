#pragma once

#include <iostream>
#include <string>
#include "Task.h"
#include "TasksList.h"

#include <iostream>
#include "DataStorage.h"
#include "TasksList.h"
#include "Task.h"

using namespace std;

class ConsoleUI
{
public:
	ConsoleUI();
	virtual ~ConsoleUI();
	void StartApp();
	void ResetConsoleView();
private:
	DataStorage dataStorage; //load and save data from disk. holds TasksList
	TasksList* tasksList; //pointer to tasksList inside dataStorage for easy access. dereference use like (*tasksList)

	void ShowHeader();          //shows header texts.
	void ShowMenu();            //shows menu used to navigate the app.
	void HandleMenuSelection(); //handle console input for menu.
	void InvalidInputResetConsoleView(); //reset console after showing invalid error message.
	void ShowNewTaskCreator();  //show options to create new task.
	void ShowTask(Task task);   //used to display one task
	void ShowTasksForToday();   //show tasks for today.
	void ShowAllTasks();        //show all tasks that have not been finished.
	void ShowSettings();        //show settings for the app.
	void SettingsDeleteTask();  //select and delete task. 0 for all, x for specific task
	void ShowHelp();            //show how to use the app.
	void ExitApp();             //exit the app.
	//private helper functions
	int GetIntInput();       //get positive integer value from cin.
	string GetStringInput(int maxLength = 0); //get string from cin of set max length. 0 meaning no limit.
	void PauseUI(); //shows press enter to continue
};
