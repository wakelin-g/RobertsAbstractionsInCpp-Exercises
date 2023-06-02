// literally cannot get this to work correctly.....

#include <iostream>
#include <math.h>

double randomReal(double low, double high);

int main(void) {
    int n = 1000000;
    double x, y;
    double num = 0.0, denom = 0.0;

    for (int i = 0; i < n; ++i) {
        // x = ((rand() / (double(RAND_MAX) + 1)) * 2) - 1;
        // y = ((rand() / (double(RAND_MAX) + 1)) * 2) - 1;

        x = randomReal(-1, 1);
        y = randomReal(-1, 1);

        if (((x * x) + (y * y)) < 1) {
            num++;
        } else {
            denom++;
        }
    }

    double estim = (num / denom);
    std::printf("%f\n", estim);
    return 0;
}

double randomReal(double low, double high) {
    double d = rand() / (double(RAND_MAX) + 1);
    double s = d * (high - low);
    return low + s;
}
