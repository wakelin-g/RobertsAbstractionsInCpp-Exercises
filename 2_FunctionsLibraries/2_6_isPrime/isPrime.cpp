#include <iostream>

bool isPrime(int n);

int main(void) {
    for (int i = 1; i <= 100; ++i) {
        if (isPrime(i)) {
            std::cout << i << " is prime." << std::endl;
        }
    }
    return 0;
}

bool isPrime(int n) {
    if (n == 1)
        return false;

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
