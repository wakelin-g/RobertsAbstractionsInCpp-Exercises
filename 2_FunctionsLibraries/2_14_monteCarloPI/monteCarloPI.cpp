#include <cmath>
#include <iostream>
using namespace std;

const unsigned N_TRIALS = 100000000;

bool dartLandedInCircle();
double estimatePI(unsigned nTrials);

int main(void) {
    cout << "After " << N_TRIALS << " trials, PI estimation equals "
         << estimatePI(N_TRIALS) << endl;
}

double estimatePI(unsigned nTrials) {
    int landedInCircle = 0;

    for (int throws = 0; throws < N_TRIALS; throws++) {
        if (dartLandedInCircle())
            landedInCircle++;
    }

    return (landedInCircle / double(nTrials)) * 4.0;
}

bool dartLandedInCircle() {
    double x = ((rand() / (double(RAND_MAX) + 1)) * 2) - 1;
    double y = ((rand() / (double(RAND_MAX) + 1)) * 2) - 1;

    return (x * x + y * y < 1);
}
