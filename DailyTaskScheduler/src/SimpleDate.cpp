#include "SimpleDate.h"

SimpleDate::SimpleDate()
{
    this->dayOfMonth = 0;
    this->month = 0;
    this->year = 0;
}

SimpleDate::SimpleDate(unsigned int dayOfMonth, unsigned int month, unsigned int year)
{
    this->dayOfMonth = dayOfMonth;
    this->month = month;
    this->year = year;
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

string SimpleDate::GetDate()
{
    string fullDate = "";

    fullDate += to_string(dayOfMonth);
    fullDate += "-";
    fullDate += to_string(month);
    fullDate += "-";
    fullDate += to_string(year);

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
