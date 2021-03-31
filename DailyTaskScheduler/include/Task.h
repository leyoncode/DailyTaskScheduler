#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task
{
    public:
        Task(string name);
        virtual ~Task();
        void SetDate(int day, int month, int year);
        void SetStartHour(int hour, int minute);
        void SetEndHour(int hour, int minute);

    protected:

    private:
        string name;
        string date;
        string startHour;
        string endHour;

};

#endif // TASK_H
