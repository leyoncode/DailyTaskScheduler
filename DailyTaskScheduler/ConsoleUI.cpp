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
	cout << "#> " << endl;

	while (true)
	{
		int selection;
		//get input for menu item selection
		cin >> selection;
		//check if valid input and go to entry
		if (selection > 0 && selection <= 6)
		{
			switch (selection)
			{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
			}
		}
		else
		{
			cout << "Invalid Input!" << endl;
		}
	}
}

void ConsoleUI::ShowTasksForToday()
{
}

void ConsoleUI::LoadTaskList()
{
}