#include "nextdate.h"
#include <bits/stdc++.h>
using namespace std;

void PrintTo(const Date& date,ostream* os)
{
    *os << "year :" << date.year << " month: " << date.month
        << " day: " << date.day << endl;
}

/*
 *  1812<= year <= 2012
 *  1 <= day <= 31
 *  1 <= month <= 12
 *  return next date
 *  if error , return Date(-1,-1,-1)
 */
Date NextDate(Date now)
{
    int& year = now.year;
    int& month = now.month;
    int& day = now.day;

    if (not(1812 <= year and year <= 2012)) {
        return Date(-1, -1, -1);
    }
    if (not(1 <= month and month <= 12)) {
        return Date(-1, -1, -1);
    }
    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10) {
        if (not(1 <= day and day <= 31)) {
            return Date(-1, -1, -1);
        }
        if (day < 31) {
            day++;
        } else {
            month++;
            day = 1;
        }
    } else if (month == 4 or month == 6 or month == 9 or month == 11) {
        if (not(1 <= day and day <= 30)) {
            return Date(-1, -1, -1);
        }
        if (day < 30) {
            day++;
        } else {
            month++;
            day = 1;
        }
    } else if (month == 12) {
        if (not(1 <= day and day <= 31)) {
            return Date(-1, -1, -1);
        }
        if (day < 31) {
            day++;
        } else {
            month = 1;
            day = 1;
            year++;
        }
    } else if (month == 2) {
        if (not IsLeapYear(year)) {
            if (not(1 <= day and day <= 28)) {
                return Date(-1, -1, -1);
            }
            if (day < 28) {
                day++;
            } else {
                day = 1;
                month++;
            }
        } else {
            if (not(1 <= day and day <= 29)) {
                return Date(-1, -1, -1);
            }
            if (day < 29) {
                day++;
            } else {
                day = 1;
                month++;
            }
        }
    }
    return now;
};

bool IsLeapYear(int year)
{
    if ((year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)) {
        return true;
    }
    return false;
};
int main()
{

}
