#include <iostream>
#include <cmath>

using namespace std;

double log_base(double x, double base) {
    double a,b,ans;
    a = log10(x);
    b = log10(base);
    ans = a/b;
    return ans;
}

int main() {
    double x = 8.0;
    double base = 2.0;
    double y = log_base(x, base);
    std::cout << "The logarithm to the base " << base << " of " << x << " is " << y << std::endl;
    return 0;
}