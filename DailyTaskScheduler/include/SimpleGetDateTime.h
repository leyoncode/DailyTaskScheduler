#ifndef GETDATETIME_H
#define GETDATETIME_H

#include <time.h>

using namespace std;

//wrapper class to simplify handling with date and time.
//this function is supposed to be used only to get date and time values.
//could've used a struct here, but didn't do that to keep things simple.
class SimpleGetDateTime
{
    public:
        SimpleGetDateTime();
        virtual ~SimpleGetDateTime();

        static unsigned int GetDayOfMonth();
        static unsigned int GetMonth();
        static unsigned int GetYear();
        static unsigned int GetHour();
        static unsigned int GetMinute();

    protected:

    private:
};

#endif // GETDATETIME_H
