#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H

#include <string>

using namespace std;

class SimpleDate
{
    public:
        SimpleDate();
        SimpleDate(unsigned int dayOfMonth, unsigned int month, unsigned int year);
        virtual ~SimpleDate();

        void SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year); //use this to change date
        string GetDate();
        unsigned int GetDayOfMonth();
        unsigned int GetMonth();
        unsigned int GetYear();

        bool operator>(SimpleDate compDate); //overloading greater than. wil return true if rhs is greater than lhs
        bool operator<(SimpleDate compDate); ////overloading less than. wil return true if rhs is less than lhs

    protected:

    private:
        unsigned int dayOfMonth;
        unsigned int month;
        unsigned int year;
};

#endif // SIMPLEDATE_H
