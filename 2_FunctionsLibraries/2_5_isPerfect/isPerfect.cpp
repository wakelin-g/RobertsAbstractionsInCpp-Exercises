#include <iostream>

bool isPerfect(int n);

int main(void) {
    for (int i = 1; i < 10000; ++i) {
        if (isPerfect(i)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

bool isPerfect(int n) {
    int sum = n;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum -= i;
        }
    }
    return (sum == 0) ? true : false;
}
