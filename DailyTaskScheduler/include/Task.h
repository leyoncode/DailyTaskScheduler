#ifndef TASK_H
#define TASK_H

#include <string>
#include "SimpleDate.h"
#include "SimpleTime.h"

using namespace std;

enum class Repeat {RepeatNever, RepeatDaily, RepeatWeekly, RepeatMonthly, RepeatYearly};

class Task
{
    public:
        Task(string taskName); //use this constructor for repeating task daily
        Task(string taskName, Repeat repeat, DaysOfWeek scheduledDay); //use this constructor for repeating task weekly
        Task(string taskName, unsigned int dayOfMonth, unsigned int month, unsigned int year, Repeat repeat = Repeat::RepeatNever); //use this constructor for one time task or the ones that repeat monthly or yearly
        virtual ~Task();

        void SetName(string taskName);
        void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //set next repeat date
        void SetStartHour(unsigned int hour, unsigned int minute); //set next repeat start hour
        void SetEndHour(unsigned int hour, unsigned int minute);   //set next repeat end hour
        void SetRepeat(Repeat repeat); //if set to true TaskList will extend the date to repeat it instead of deleting it.
        Repeat GetRepeat(); //see how often this task is set to repeat
        bool IsRepeatingTask(); //this is used by TaskList to see if this task is needed regularly.
        SimpleDate GetDate();
        SimpleTime GetStartHour();
        SimpleTime GetEndHour();

    protected:

    private:
        string taskName;
        SimpleDate date;
        SimpleTime startHour; //optional
        SimpleTime endHour;   //optional
        Repeat repeat = Repeat::RepeatNever;
};

#endif // TASK_H
