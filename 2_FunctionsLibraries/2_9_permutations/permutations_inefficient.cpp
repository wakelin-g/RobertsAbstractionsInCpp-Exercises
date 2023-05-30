#include <iostream>

int permutation(int n, int k);

int main(void) {
    int n = 100;
    int k = 3;

    std::cout << permutation(n, k) << std::endl;

    return 0;
}

int permutation(int n, int k) {
    int num = 1;
    int denom = 1;

    for (int i = n; i >= 2; --i) {
        num *= i;
    }

    for (int i = n - k; i >= 2; --i) {
        denom *= i;
    }
    return num / denom;
}
