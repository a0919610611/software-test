#ifndef NEXTDATE
#define NEXTDATE
#include <iostream>

struct Date {
    int year;
    int month;
    int day;
    Date(int _year = 0, int _month = 0, int _day = 0)
    {
        year = _year;
        month = _month;
        day = _day;
    }
    bool operator==(const Date& b) const
    {
        return year == b.year and month == b.month and day == b.day;
    }
};
void PrintTo(const Date& date, ::std::ostream* os);

Date NextDate(Date now);
bool IsLeapYear(int year);

#endif
