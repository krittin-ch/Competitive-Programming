#include <bits/stdc++.h>

using namespace std;

// Shorting Code
typedef long long ll;  // Define ll as an alias for long long
typedef vector<int> vi; // Define vi as an alias for vector<int>
typedef pair<int, int> pi; // Define pi as an alias for pair<int, int>

// Macros 
// Macros in C++ are preprocessor directives used to define constants
// or small code snippets that are substituted into your code before compilation.
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
// #define SQ(a) a*a

int main() {
    /*
        "int" is 32-bit : a value range from -2^31 to 2^31 - 1 or -2*10^9 to 2*10^9
        "long long" is 64-bit : a value range from -2^63 to 2^63 - 1 or -9*10^18 to 9*10^18
    */
    
    ll x = 123456789123456789LL; // adding "LL" after the number
    // cout << x << "\n";

    int a = 123456789;
    long long b = a*a;
    // beacuse the varaible a is of type "int", the result b will contain the wrong result.
    // cout << b << "\n";  // -1757895751

    // Modular Arithmaric
    /*
        Important properties
        1. (a+b) mod m = (a mod m + b mod m) mod m
        2. (a-b) mod m = (a mod m - b mod m) mod m
        3. (a*b) mod m = (a mod m * b mod m) mod m
    */

    long long y = -1;
    int n = 4;
    int m = 5;

    for (int i = 2; i <= n; i++) {
        y = (y*i)%m;
    }

    if (y < 0) {
        y += m;
    }
    // cout << y%m << "\n"; 

    // Floating Point Numbers
    double k = 0.3*3 + 0.1;
    // printf("%.9f\n", k);

    // it is risky to compare floating point numbers with the "==" operation
    double eps = 1e-9;
    // if (abs(k - 1) < eps) {
    //     cout << "The number equals to 1";
    // }
    
    vector<pair<int, int>> v;
    
    int x1 = 10, y1 = 20;
    int x2 = 30, y2 = 40;
    // v.push_back(make_pair(x1, y1));
    // v.push_back(make_pair(x2, y2));
    // int i = 0;
    // int d = v[i].first + v[i].second;

    v.PB(MP(x1, y1));
    v.PB(MP(x2, y2));
    int i = 0;
    int d = v[i].F + v[i].S;

    // cout << "Sum of v[" << i << "].first and v[" << i << "].second is: " << d << endl;
    
    // REP(i, 1, n) {
    //     cout << i << " ";
    // }

    /*
        #define SQ(a) a*a
            SQ(3+3) = 3 + 3*3 + 3 = 3 + 9 + 3 = 15
        
        #define SQ(a) (a)*(a)
            SQ(3+3) = (3+3)*(3+3) = 6*6 = 36
    */
    // cout << SQ(3+3) << "\n";
    
    return 0;

}