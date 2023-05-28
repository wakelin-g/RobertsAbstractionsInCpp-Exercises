#include <iostream>

void findEaster(int year, std::string &month, int &day);

int main(void) {
    int year;
    std::string month;
    int day;

    std::cout << "Please enter a year between 1700 and 1899" << std::endl;
    std::cin >> year;

    findEaster(year, month, day);
    std::cout << "In " << year << ", Easter will fall on " << month << " "
              << day << std::endl;
}

void findEaster(int year, std::string &month, int &day) {
    int a, b, c, d, e;
    a = (year % 19);
    b = (year % 4);
    c = (year % 7);
    d = ((19 * a + 23) % 30);
    e = (year - 1800 >= 0) ? ((2 * b + 4 * c + 6 * d + 4) % 7)
                           : ((2 * b + 4 * c + 6 * d + 3) % 7);

    if (d + e > 9) {
        month = "April";
        day = d + e - 9;
    } else {
        month = "March";
        day = 22 + d + e;
    }
}
