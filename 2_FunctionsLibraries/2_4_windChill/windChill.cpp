#include <iostream>

double windChill(double v, double t);

int main(void) {
    double velocity, temperature;
    std::cout << "This program takes wind velocity v and temperature t, "
                 "returning the wind chill."
              << std::endl;
    std::cout << "Please enter wind velocity: ";
    std::cin >> velocity;
    std::cout << "Please enter temperature: ";
    std::cin >> temperature;

    windChill(velocity, temperature);

    return 0;
}

double windChill(double v, double t) { if () }

void error(std::string msg) {
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}
