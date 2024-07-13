#include <bits/stdc++.h>
#include <algorithm>  

// Intuitive Method
// Worst-Case Time Complexity : O(n^3)

int main() {
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};

    int n = sizeof(arr)/sizeof(int);
    int best = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }

    std::cout << "Maximum Subarray Sum : " << best;
}