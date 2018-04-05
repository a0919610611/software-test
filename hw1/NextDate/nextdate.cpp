#include "nextdate.h"
#include <bits/stdc++.h>
using namespace std;

/*
 *  1812<= year <= 2012
 *  1 <= day <= 31
 *  1 <= month <= 12
 */
Date NextDate(Date now)
{
    int& year = now.year;
    int& month = now.month;
    int& day = now.day;

    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10) {
        if (day < 31) {
            day++;
        } else {
            month++;
            day = 1;
        }
    }else if(month==4 or month==6 or month==9 or month==11){
        if(day<30){
            day++;
        }else {
            month++;
            day=1;
        }
    }
    return now;
};

bool isLeapYear(int year)
{
    if ((year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)) {
        return true;
    }
    return false;
};
