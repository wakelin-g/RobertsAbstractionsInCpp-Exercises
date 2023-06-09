#include <cmath>
#include <iostream>

double windChill(double v, double t);
void error(std::string msg);

int main(void) {
    double velocity, temperature;
    std::cout << "This program takes wind velocity v and temperature t, "
                 "returning the wind chill."
              << std::endl;
    std::cout << "Please enter wind velocity: ";
    std::cin >> velocity;
    std::cout << "Please enter temperature: ";
    std::cin >> temperature;

    std::cout << "The wind chill is: " << windChill(velocity, temperature)
              << " degrees farenheit." << std::endl;

    return 0;
}

double windChill(double v, double t) {
    if (t > 40)
        error("Wind chill is undefined for temperatures greater than 40 "
              "degrees farenheit.");
    return (v == 0) ? t
                    : ((35.74) + (0.6215 * t) - (35.75 * pow(v, 0.16)) +
                       (0.4275 * t * std::pow(v, 0.16)));
}

void error(std::string msg) {
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}
