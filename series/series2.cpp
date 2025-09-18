#include <iostream>
#include <limits>

double seriesSum(double x, int terms) {
    if (terms <= 0) return 0.0;
    double sum = x;              
    double term = x;
    for (int k = 0; k < terms - 1; ++k) {

        double denom = (2.0 * k + 2.0) * (2.0 * k + 3.0);
        term = -term * x * x / denom;
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int N;
    std::cout << "Compute series: x - x^3/3! + x^5/5! - ... up to N terms\n";
    std::cout << "Enter x: ";
    if (!(std::cin >> x)) {
        std::cerr << "Invalid x\n";
        return 1;
    }
    std::cout << "Enter number of terms N: ";
    if (!(std::cin >> N) || N < 0) {
        std::cerr << "Invalid N\n";
        return 1;
    }

    double result = seriesSum(x, N);
    std::cout.setf(std::ios::fixed);
    std::cout.precision(12);
    std::cout << "Sum = " << result << "\n";


    return 0;
}