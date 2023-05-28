#include <iostream>

#define METERS_PER_INCH 0.0254
#define INCHES_PER_FOOT 12

void getUserInput(double &m);
void getInchesAndFeet(double m, double &i, int &f);
void displayConversions(double m, double i, int f);

int main(void) {
    // declare meters variable
    double meters;
    double inches;
    int feet;

    getUserInput(meters);
    getInchesAndFeet(meters, inches, feet);
    displayConversions(meters, inches, feet);
}

void getUserInput(double &m) {
    std::cout << "This program takes a height in meters as input and converts "
                 "it to feet and inches."
              << std::endl;
    std::cout << "Please enter a height in meters: ";
    std::cin >> m;
}

void getInchesAndFeet(double m, double &i, int &f) {
    i = m / METERS_PER_INCH;
    f = i / INCHES_PER_FOOT;
    i -= (f * 12.0);
}

void displayConversions(double m, double i, int f) {
    std::cout << m << " meters is equivalent to " << f << " feet and " << i
              << " inches. Wow!" << std::endl;
}
