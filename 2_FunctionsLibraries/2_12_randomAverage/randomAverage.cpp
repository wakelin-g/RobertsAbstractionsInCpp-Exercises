#include <cstdlib>
#include <iostream>

int main(void) {
    int n;
    std::cout << "Enter number of samples: ";
    std::cin >> n;

    double avg = 0;
    double current;
    for (int i = 1; i <= n; ++i) {
        current = rand() / (double(RAND_MAX) + 1);
        avg += current;
    }

    avg /= n;
    std::cout << "Across " << n << " trials the average was " << avg << "."
              << std::endl;
    return 0;
}
