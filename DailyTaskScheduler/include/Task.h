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
        virtual ~Task();
        void SetName(string taskName);
        void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year);
        void SetStartHour(unsigned int hour, unsigned int minute);
        void SetEndHour(unsigned int hour, unsigned int minute);
        bool IsRegularTask(); //this is used by TaskList to see if this task is needed regularly.
                              //TaskList will delete non regular tasks after date passed

    protected:

    private:
        string taskName;
        SimpleDate date;
        SimpleTime startHour;
        SimpleTime endHour;
        bool isRegularTask = false;
};

#endif // TASK_H
