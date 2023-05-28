#include <cmath>
#include <iostream>
#define APPROX 1E-2

double sqrt(int x);

int main(void) {
    std::cout << sqrt(25);
    return 0;
}

double sqrt(int x) {
    double g = x / 2.0;

    while (std::abs(g * g - x) > 0.01) {
        double avg = ((x / g) + g) / 2;
        std::cout << avg << std::endl;
        g = avg;
    }
    return g;
}
