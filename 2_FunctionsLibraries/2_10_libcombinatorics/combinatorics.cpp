#include <iostream>

int permutations(int n, int k) {
    int num = 1;

    for (int i = n; i > n - k; --i) {
        num *= i;
    }
    return num;
}

int combinations(int n, int k) {
    int num = 1;
    int denom = 1;

    for (int i = n; i > n - k; --i) {
        num *= i;
    }

    for (int i = k; k > 1; --k) {
        denom *= i;
    }
    return num / denom;
}
