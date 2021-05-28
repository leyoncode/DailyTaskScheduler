#include "SimpleDate.h"

SimpleDate::SimpleDate()
{
    this->dayOfMonth = 0;
    this->month = 0;
    this->year = 0;
    this->day = DaysOfWeek::SUN;
}

SimpleDate::SimpleDate(DaysOfWeek dayOfWeek)
{
    this->dayOfMonth = 0;
    this->month = 0;
    this->year = 0;
    this->day = dayOfWeek;
}

SimpleDate::SimpleDate(unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    this->dayOfMonth = dayOfMonth;
    this->month = month;
    this->year = year;
    SetDay(dayOfMonth, month, year);
}

SimpleDate::~SimpleDate()
{
    //dtor
}

void SimpleDate::SetDate(unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    //todo: check day and month
    this->dayOfMonth = dayOfMonth;
    this->month = month;
    this->year = year;
}

void SimpleDate::SetDay(DaysOfWeek dayOfWeek)
{
    this->day = dayOfWeek;
}

void SimpleDate::SetDay(unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    //Sakamoto's method of finding day from date
    const int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    int day = ( year + year / 4 - year / 100 + year / 400 + t[month - 1] + dayOfMonth) % 7;

    this->day = (DaysOfWeek)day;
}

string SimpleDate::GetDate()
{
    string fullDate = "";

    fullDate += to_string(this->dayOfMonth);
    fullDate += "-";
    fullDate += to_string(this->month);
    fullDate += "-";
    fullDate += to_string(this->year);

    return fullDate;
}

unsigned int SimpleDate::GetDayOfMonth()
{
    return this->dayOfMonth;
}

unsigned int SimpleDate::GetMonth()
{
    return this->month;
}

unsigned int SimpleDate::GetYear()
{
    return this->year;
}

DaysOfWeek SimpleDate::GetDay()
{
    return this->day;
}

bool SimpleDate::operator>(SimpleDate compDate)
{
    if (this->year > compDate.GetYear())
    {
        return true;
    }
    else if (this->month > compDate.GetMonth())
    {
        return true;
    }
    else if (this->dayOfMonth > compDate.GetDayOfMonth())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SimpleDate::operator<(SimpleDate compDate)
{
    if (this->year < compDate.GetYear())
    {
        return true;
    }
    else if (this->month < compDate.GetMonth())
    {
        return true;
    }
    else if (this->dayOfMonth < compDate.GetDayOfMonth())
    {
        return true;
    }
    else
    {
        return false;
    }
}
