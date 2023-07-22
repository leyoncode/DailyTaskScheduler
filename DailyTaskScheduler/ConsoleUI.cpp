#include "ConsoleUI.h"

ConsoleUI::ConsoleUI()
{
	//ctor init
	dataStorage.LoadData();
	tasksList = dataStorage.GetTaskListPtr();
}

ConsoleUI::~ConsoleUI()
{
	//dtor
	tasksList = nullptr;
	delete tasksList;
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
		int selection = GetIntInput();

		//check if valid input and go to entry
		if (selection > 0 && selection <= 6)
		{
			//switch-case numbers must match those written in ShowMenu() function
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
			InvalidInputResetConsoleView();
		}
	}
}

void ConsoleUI::InvalidInputResetConsoleView()
{
	cout << "Invalid Input!" << endl;
	PauseUI();
	ResetConsoleView()
}

void ConsoleUI::ResetConsoleView()
{
	system("cls"); //Windows OS only
	StartApp();
}

void ConsoleUI::ExitApp()
{
	cout << "Exiting App..." << endl;
	exit(0);
}

void ConsoleUI::ShowTasksForToday()
{
	cout << "Today's Tasks" << endl << endl;

	//get todays tasks
	vector<Task> todaysTasks = dataStorage.GetTaskList().GetTasksForToday();

	//loop over them and print them
	for (Task task : todaysTasks)
	{
		ShowTask(task);
	}
}

void ConsoleUI::ShowSettings()
{
	cout << "Settings" << endl;
}

void ConsoleUI::SettingsDeleteTask()
{
	//loop and show all tasks indexed (i+1).
	//if user select index 0, delete all tasks
	//if user select other valid index, then delete that specific task
}

void ConsoleUI::ShowHelp()
{
	cout << "Help" << endl;
	PauseUI();
	return ResetConsoleView();
}

void ConsoleUI::ShowNewTaskCreator()
{
	cout << "Create new Task" << endl;

	cout << "How often do you want the task to repeat? " << endl;
	cout << "1) Never Repeat" << endl;
	cout << "2) Repeat Daily" << endl;
	cout << "3) Repeat Weekly" << endl;
	cout << "4) Repeat Monthly" << endl;
	cout << "5) Repeat Yearly" << endl;
	cout << "0) Cancel new task creation" << endl;

	int userInput = GetIntInput();

	//create Task objects based on documentation in Task.h
	if (userInput == 1)
	{
		string taskName = GetStringInput();
		unsigned int dayOfMonth = GetIntInput();
		unsigned int month = GetIntInput();
		unsigned int year = GetIntInput();

		Task newTask(taskName, dayOfMonth, month, year);

		tasksList->InsertTask(newTask); //add task to storage
	}
	else if (userInput == 2)
	{
		string taskName = GetStringInput();

		Task newTask(taskName);

		tasksList->InsertTask(newTask); //add task to storage
	}
	else if (userInput == 3)
	{
		string taskName = GetStringInput();

		cout << "Which days in the week to repeat the task?" << endl;
		cout << "1) SUN" << endl;
		cout << "2) MON" << endl;
		cout << "3) TUE" << endl;
		cout << "4) WED" << endl;
		cout << "5) THU" << endl;
		cout << "6) FRI" << endl;
		cout << "7) SAT" << endl;

		int userDayInput = GetIntInput();

		if (userDayInput == 1)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::SUN;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 2)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::MON;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 3)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::TUE;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 4)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::WED;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 5)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::THU;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 6)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::FRI;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else if (userDayInput == 7)
		{
			DaysOfWeek dayOfWeek = DaysOfWeek::SAT;

			Task newTask(taskName, dayOfWeek);
			tasksList->InsertTask(newTask); //add task to storage
		}
		else
		{
			InvalidInputResetConsoleView();
		}
	}
	else if (userInput == 4)
	{
	}
	else if (userInput == 5)
	{
	}
	else
	{
		InvalidInputResetConsoleView();
	}
}

void ConsoleUI::ShowAllTasks()
{
	cout << "All Tasks" << endl;

	//get all tasks
	vector<Task> todaysTasks = dataStorage.GetTaskList().GetAllTasks();

	//loop over them and print them
	for (Task task : todaysTasks) {
		ShowTask(task);
	}
}

void ConsoleUI::ShowTask(Task task)
{
	cout << "Task" << endl;
	cout << task.GetName() << endl;
	cout << "Date: " << task.GetDate().GetDate() << endl;
	cout << "Start time: " << task.GetStartHour().GetTime12() << endl;
	cout << "Start time: " << task.GetEndHour().GetTime12() << endl;
}

//////////////////////////////////////////////////////////////////////////////

int ConsoleUI::GetIntInput()
{
	int userInput = 0;

	try {
		userInput = stoi(GetStringInput()); //using string avoids unnecessary errors with mal input
	}
	catch (const std::exception& e) {
		//cout << "invalid input" << endl;
	}

	return userInput;
}

string ConsoleUI::GetStringInput(int maxLength)
{
	string userInput = "";

	cin.clear(); //clears previous errors

	getline(cin, userInput); //get input from user

	return userInput;
}

void ConsoleUI::PauseUI()
{
	cout << "Press any enter to continue...";
	GetStringInput();
}