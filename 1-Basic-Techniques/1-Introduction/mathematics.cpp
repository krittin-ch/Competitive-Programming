#include <bits/stdc++.h>

using namespace std;

/*
    Sum Formulas

    Faulhaber's Formula : Sigma_(x=1 to n) of x^k
        
        if k = 1: Sigma_(x=1 to n) of x^1 = n(n+1)/2
        if k = 2: Sigma_(x=1 to n) of x^2 = n(n+1)(2n+1)/6
    
    Arithmatic Progression : Sigma_(k=0 to n-1) of (a+kd)

        a + (a+d) + (a+2d) + ... + (a+(n-1)d) = n(a + (a + (n-1)d))/2 = n(a + b))/2
        
        b is the last number
    
    Geometric Progression : Sigma_(k=0 to n-1) of a*d^k

        a + a*d + a*d^2 + ... + a*d^n-1 = (a*d^n - a)/(d - 1) = (b - a)/(d - 1)

        b is the last number

    Harmonic Sum : Sigma_(x=1 to n) of  1/x

        1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 <= 1 + 1/2 + 1/2 + 1/4 + 1/4 + 1/4 <= log2(6) + 1

        Therefore, the upper bound is log2(n) + 1
*/

// Function to calculate Faulhaber's sum for k = 1
int faulhaberSumK1(int n) {
    return n * (n + 1) / 2;
}

// Function to calculate Faulhaber's sum for k = 2
int faulhaberSumK2(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

// Function to calculate arithmetic progression sum
int arithmeticProgressionSum(int a, int d, int n) {
    return n * (a + (a + (n - 1) * d)) / 2;
}

// Function to calculate geometric progression sum
int geometricProgressionSum(int a, int d, int n) {
    return (a * (pow(d, n) - 1)) / (d - 1);
}

// Function to calculate harmonic sum
double harmonicSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n = 5;

    // Faulhaber's Formula
    cout << "Faulhaber's Formula (k = 1) - Sum: " << faulhaberSumK1(n) << endl;
    cout << "Faulhaber's Formula (k = 2) - Sum: " << faulhaberSumK2(n) << endl;

    // Arithmetic Progression
    int a = 1, d = 3;
    cout << "Arithmetic Progression - Sum: " << arithmeticProgressionSum(a, d, n) << endl;

    // Geometric Progression
    a = 2, d = 3;
    cout << "Geometric Progression - Sum: " << geometricProgressionSum(a, d, n) << endl;

    // Harmonic Sum
    cout << "Harmonic Sum: " << harmonicSum(n) << endl;

    return 0;
}