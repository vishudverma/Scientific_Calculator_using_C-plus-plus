#include <iostream>
#include <cmath>

using namespace std;

double log_base(double x, double base) {
    return log10(x);
}

int main() {
    double x = 1000.0;
    double base = 10.0;
    double y = log_base(x, base);
    std::cout << "The logarithm to the base " << base << " of " << x << " is " << y << std::endl;
    return 0;
}