#include <iostream>
#include <limits>

long double seriesSum(long double x, int N) {
    if (N < 0) return 0.0L;
    long double term = 1.0L;   // x^0 / 0!
    long double sum  = term;
    for (int k = 1; k <= N; ++k) {
        term *= x / k;        
        sum  += term;
    }
    return sum;
}

int main() {
    long double x;
    int N;
    std::cout << "Enter x and N: ";
    if (!(std::cin >> x >> N)) {
        std::cerr << "Invalid input\n";
        return 1;
    }
    std::cout.setf(std::ios::fixed);
    std::cout.precision(15);
    std::cout << "Sum = " << seriesSum(x, N) << "\n";
    return 0;
}