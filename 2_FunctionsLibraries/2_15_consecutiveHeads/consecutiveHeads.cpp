#include <cstdlib>
#include <iostream>

int main(void) {
    int streak = 0;
    int counter = 0;

    while (streak < 3) {
        if (std::rand() / (double(RAND_MAX) + 1) < 0.50) {
            std::cout << "heads" << std::endl;
            ++streak;
            ++counter;
        } else {
            std::cout << "tails" << std::endl;
            streak = 0;
            ++counter;
        }
    }

    std::cout << "It took " << counter << " attempts to get 3 heads in a row."
              << std::endl;
    return 0;
}
