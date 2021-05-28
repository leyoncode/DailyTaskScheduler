#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H

#include <string>

using namespace std;

enum class DaysOfWeek {SUN, MON, TUE, WED, THU, FRI, SAT};

class SimpleDate
{
    public:
        SimpleDate();
        SimpleDate(DaysOfWeek dayOfWeek);
        SimpleDate(unsigned int dayOfMonth, unsigned int month, unsigned int year);
        virtual ~SimpleDate();

        void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //use this to change date
        void SetDay(DaysOfWeek dayOfWeek); //directly set day using enum
        void SetDay(unsigned int dayOfMonth, unsigned int month, unsigned int year);  //this will calculate day from date
        string GetDate(); //returns date formatted as dd-mm-yyyy
        unsigned int GetDayOfMonth();
        unsigned int GetMonth();
        unsigned int GetYear();
        DaysOfWeek GetDay();

        bool operator>(SimpleDate compDate); //overloading greater than operator. wil return true if rhs is greater than lhs
        bool operator<(SimpleDate compDate); ////overloading less than operator. wil return true if rhs is less than lhs

    protected:

    private:
        unsigned int dayOfMonth;
        unsigned int month;
        unsigned int year;
        DaysOfWeek day;
};

#endif // SIMPLEDATE_H
