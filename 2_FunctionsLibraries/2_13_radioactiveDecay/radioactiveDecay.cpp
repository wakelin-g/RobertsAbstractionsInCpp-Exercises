#include <cstdlib>
#include <iostream>

int main(void) {
    int n_atoms = 10000;
    int year = 1;

    std::cout << "There are " << n_atoms << " atoms initially." << std::endl;
    while (n_atoms != 0) {
        for (int i = 1; i <= n_atoms; ++i) {
            if ((rand() / (double(RAND_MAX) + 1.0)) < 0.5)
                --n_atoms;
        }
        std::cout << "There are " << n_atoms << " atoms at the end of year "
                  << year << std::endl;
        ++year;
    }
    return 0;
}
