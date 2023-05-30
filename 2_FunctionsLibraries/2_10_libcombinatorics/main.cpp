#include "combinatorics.h"
#include <iostream>

int main(void) {
    int n = 7;
    int k = 3;

    std::cout << "If order doesn't matter, there are: " << combinations(n, k)
              << " ways to pick " << k << " elements from " << n << " elements."
              << std::endl;
    std::cout << "If order matters, these are: " << permutations(n, k)
              << " ways to pick " << k << " elements from " << n << " elements."
              << std::endl;
    return 0;
}
