#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    int x0 = 0, x1 = 1;
    int res = 0;
    for (int i = 2; i <= n; ++i) {
        res = x0 + x1;
        x0 = x1;
        x1 = res;
    }
    return res;
}

double binet(int n) {
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;
    
    double fib = (pow(phi, n) - pow(psi, n)) / sqrt(5);
    return fib;
}

double log_base(double x, double base) {
    return log(x) / log(base);
}

int main() {
    int n = 10;

    // Factorial
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    // Fibonacci
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;

    // Nth Fibonacci using Binet's formula
    cout << "Nth Fibonacci number using Binet's formula for n=" << n << " is: " << binet(n) << "\n\n";


    // Logarithm
    /*
        Important Properties
            1. log_k(ab) = log_k(a) + log_k(b)
            2. log_k(x^n) = n*log_k(x)
            3. log_k(a/b) = log_k(a) - log_k(b)
            4. log_u(x) = log_k(x) / log_k(u)

        log(x) is the natural logarithm for c++ (ln(x))
        log10(x) is the logarithm with base 10
    */
    double x = 10.0;

    // Natural logarithm (base e)
    double res1 = log(x);
    cout << "log(" << x << ") = " << res1 << endl;

    double res2 = log10(x);
    cout << "log10(" << x << ") = " << res2 << endl;
    
    double base = 2.0;
    // Logarithm with arbitrary base
    double res3 = log_base(x, base);
    cout << "log_" << base << "(" << x << ") = " << res3 << endl;

    return 0;
}
