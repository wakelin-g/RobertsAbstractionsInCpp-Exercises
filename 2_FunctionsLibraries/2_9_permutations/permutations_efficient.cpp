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

    for (int i = n; i > n - k; --i) {
        num *= i;
    }
    return num;
}
