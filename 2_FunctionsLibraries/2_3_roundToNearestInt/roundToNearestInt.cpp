#include <iostream>

int roundToNearestInt(double x);

int main(void) {
    double val = 0.0;
    int closest = 0;

    std::cout << "This program displays a function that rounds floating point "
                 "numbers to the nearest integer."
              << std::endl;
    std::cout << "It will continue to accept your input, displaying the "
                 "nearest integer, until you enter the sentinel key (-999)"
              << std::endl;

    while (true) {
        std::cin >> val;
        if (val == -999) {
            break;
        } else {
            closest = roundToNearestInt(val);
            std::cout << "Nearest integer is: " << closest << std::endl;
        }
    }
    return 0;
}

int roundToNearestInt(double x) {
    if (x >= 0) {
        return x + 0.5;
    } else {
        return x - 0.5;
    }
}
