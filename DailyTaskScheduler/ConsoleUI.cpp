#include "ConsoleUI.h"

ConsoleUI::ConsoleUI()
{
	//ctor
}

ConsoleUI::~ConsoleUI()
{
	//dtor
}

void ConsoleUI::StartApp()
{
	ShowHeader();
	ShowMenu();
	return HandleMenuSelection();
}

void ConsoleUI::ShowHeader()
{
	cout << "Daily Task Scheduler" << endl;
	cout << "====================" << endl;
}

void ConsoleUI::ShowMenu()
{
	cout << "Menu" << endl;
	cout << "====================" << endl;
	cout << "1) View Tasks For Today" << endl;
	cout << "2) Add New Task" << endl;
	cout << "3) View All Tasks" << endl;
	cout << "4) Settings" << endl;
	cout << "5) Help" << endl;
	cout << "6) Exit" << endl;
}

void ConsoleUI::HandleMenuSelection()
{
	while (true)
	{
		cout << "#> ";

		//get input for menu item selection
		int selection = getPositiveIntInput();
		
		//check if valid input and go to entry
		if (selection > 0 && selection <= 6)
		{
			switch (selection)
			{
				case 1:
					ShowTasksForToday();
					break;
				case 2:
					ShowNewTaskCreator();
					break;
				case 3:
					ShowAllTasks();
					break;
				case 4:
					ShowSettings();
					break;
				case 5:
					ShowHelp();
					break;
				case 6:
					ExitApp();
					break;
			}
		}
		else
		{
			cout << "Invalid Input!" << endl;
		}
	}
}

void ConsoleUI::ResetConsoleView()
{
	system("cls");
	StartApp();
}

void ConsoleUI::ExitApp()
{
	cout << "Exiting App..." << endl;
}

void ConsoleUI::LoadTaskList()
{
	//load tasks from storage
}

void ConsoleUI::ShowTasksForToday()
{
	cout << "Today's Tasks" << endl;
}

void ConsoleUI::ShowSettings()
{
	cout << "Settings" << endl;
}

void ConsoleUI::ShowHelp()
{
	cout << "Help" << endl;
	pauseUI();
	return ResetConsoleView();
}

void ConsoleUI::ShowNewTaskCreator()
{
	cout << "Create new Task" << endl;
}

void ConsoleUI::ShowAllTasks()
{
	cout << "All Tasks" << endl;
}

void ConsoleUI::ShowTask(Task task)
{
	cout << "Task" << endl;
}

//////////////////////////////////////////////////////////////////////////////

int ConsoleUI::getPositiveIntInput()
{
	int userInput = 0;

	cin >> userInput; //get input from user

	cin.clear();//clears previous errors
	cin.get();  //removes \n character from buffer

	return userInput;
}

string ConsoleUI::getStringInput(int maxLength)
{
	string userInput = "";

	getline(cin, userInput); //get input from user

	//clear any previous buffer
	cin.clear(); //clears previous errors
	//cin.get(); //removes \n character from buffer

	return userInput;
}

void ConsoleUI::pauseUI()
{
	cout << "Press any enter to continue...";
	getStringInput();
}