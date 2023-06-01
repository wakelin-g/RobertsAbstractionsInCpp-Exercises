#ifndef _calendar_h
#define _calendar_h

#include <iostream>
#include <string>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

bool isLeapYear(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int daysInMonth(Month m, int y) {
    switch (m) {
    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        return 30;
    case JANUARY:
    case MARCH:
    case MAY:
    case JULY:
    case AUGUST:
    case OCTOBER:
    case DECEMBER:
        return 31;
    case FEBRUARY:
        return (isLeapYear(y)) ? 29 : 28;
    default:
        return 1;
    }
}

std::string monthToString(Month m) {
    switch (m) {
    case JANUARY:
        return "JANUARY";
    case FEBRUARY:
        return "FEBRUARY";
    case MARCH:
        return "MARCH";
    case APRIL:
        return "APRIL";
    case MAY:
        return "MAY";
    case JUNE:
        return "JUNE";
    case JULY:
        return "JULY";
    case AUGUST:
        return "AUGUST";
    case SEPTEMBER:
        return "SEPTEMBER";
    case OCTOBER:
        return "OCTOBER";
    case NOVEMBER:
        return "NOVEMBER";
    case DECEMBER:
        return "DECEMBER";
    default:
        return "Invalid month entered";
    }
}

#endif
