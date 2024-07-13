#include <bits/stdc++.h>

using namespace std;

// Method III - Optimized Sum (1 for loop)
// Worst-Case Time Complexity : O(n)

int main() {
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};

    int n = sizeof(arr)/sizeof(int);

    int best = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        // "sum" will be reseted when the previous "sum" is smaller than the current.
        // which mean when "sum" is negative value and the current index is greater then "sum"
        // e.g., sum = -3, arr[i] = -2.
        sum = max(arr[i], arr[i] + sum);    
        best = max(best, sum);
    }
    
    cout << "Maximum Subarray Sum : " << best;

    return 0;
}