#include <cmath>
#include <iostream>

double windChill(double v, double t);
void error(std::string msg);

int main(void) {

    for (double i = 5.0; i <= 60.0; i += 5.0) {
        for (double j = 40.0; j >= -45.0; j -= 5.0) {
            std::printf("%3.1f ", windChill(i, j));
        }
        std::cout << std::endl;
    }

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
