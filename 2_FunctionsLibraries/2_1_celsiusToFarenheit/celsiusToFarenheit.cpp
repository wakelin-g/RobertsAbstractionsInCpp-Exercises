#include <iostream>

double c_to_f(double c);

int main(void) {
    double celsius;
    std::cout << "This program takes a temperature in celsius as input and "
                 "returns the corresponding temperature in farenheit."
              << std::endl;
    std::cout << "Please enter your temperature: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees celsius is equal to " << c_to_f(celsius)
              << " degrees farenheit." << std::endl;
    return 0;
}

double c_to_f(double c) { return ((9 * c / 5) + 32); }
