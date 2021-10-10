#pragma once

#include <string>

using namespace std;

class SimpleTime
{
    public:
        SimpleTime();
        SimpleTime(unsigned int hour, unsigned int minute);
        virtual ~SimpleTime();

        void SetTime(unsigned int hour, unsigned int minute); //use this to change time
        string GetTime(); //returns time formatted as hh:mm
        string GetTime12(); //returns time formatted as hh:mm am/pm
        unsigned int GetHour();
        unsigned int GetMinute();

        bool operator>(SimpleTime compTime); //overloading greater than operator. wil return true if rhs is greater than lhs
        bool operator<(SimpleTime compTime); ////overloading less than operator. wil return true if rhs is less than lhs

    protected:

    private:
        unsigned int hour; //uses 24hour
        unsigned int minute;
};

