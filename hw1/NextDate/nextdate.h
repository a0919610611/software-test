#ifndef NEXTDATE
#define NEXTDATE

struct Date {
    int year, month, day;
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

Date NextDate(Date now);

#endif
