#ifndef TASK_H
#define TASK_H

#include <string>
#include "SimpleDate.h"
#include "SimpleTime.h"

using namespace std;

class Task
{
    public:
        Task(string taskName);
        Task(string taskName, DaysOfWeek scheduledDay); //use this constructor for regular task
        Task(string taskName, unsigned int dayOfMonth, unsigned int month, unsigned int year); //use this constructor for one time task
        virtual ~Task();
        void SetName(string taskName);
        void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year);
        void SetStartHour(unsigned int hour, unsigned int minute);
        void SetEndHour(unsigned int hour, unsigned int minute);
        void SetRegular(bool regularity); //if set to true TaskList will extend the date to repeat it instead of deleting it.
        bool IsRegularTask(); //this is used by TaskList to see if this task is needed regularly.

    protected:

    private:
        string taskName;
        SimpleDate date;
        SimpleTime startHour; //optional
        SimpleTime endHour;   //optional
        bool isRegularTask = false;
};

#endif // TASK_H
