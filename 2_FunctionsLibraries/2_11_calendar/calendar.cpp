#include "calendar.h"
#include <iostream>

int main(void) {
    int y;
    std::cout << "Enter a year: ";
    std::cin >> y;

    Month m = JANUARY;
    for (int i = JANUARY; i <= DECEMBER; ++i) {
        std::cout << monthToString(Month(i)) << " has "
                  << daysInMonth(Month(i), y) << " days." << std::endl;
    }
}
