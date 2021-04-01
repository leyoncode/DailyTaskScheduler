#include "SimpleTime.h"

SimpleTime::SimpleTime()
{
    this->hour = 0;
    this->minute = 0;
}

SimpleTime::SimpleTime(unsigned int hour, unsigned int minute)
{
    this->hour = hour;
    this->minute = minute;
}

SimpleTime::~SimpleTime()
{
    //dtor
}

void SimpleTime::SetTime(unsigned int hour, unsigned int minute)
{
    this->hour = hour;
    this->minute = minute;
}

string SimpleTime::GetTime()
{
    string time = "";
    time += this->to_string(hour);
    time += ":";
    time += this->to_string(minute);

    return time;
}

string SimpleTime::GetTime12()
{
    string time = "";
    time += this->to_string(hour-12);
    time += ":";
    time += this->to_string(minute-12);

    if (this->hour >= 12)
    {
        time += " pm";
    }
    else
    {
        time += " am";
    }

    return time;
}

unsigned int SimpleTime::GetHour()
{
    return this->hour;
}

unsigned int SimpleTime::GetMinute()
{
    return this->minute;
}

bool SimpleTime::operator>(SimpleTime compTime)
{
    if (this->hour > compTime.GetHour())
    {
        return true;
    }
    else if (this->minute > compTime.GetMinute)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SimpleTime::operator<(SimpleTime compTime)
{
    if (this->hour < compTime.GetHour())
    {
        return true;
    }
    else if (this->minute < compTime.GetMinute)
    {
        return true;
    }
    else
    {
        return false;
    }
}
