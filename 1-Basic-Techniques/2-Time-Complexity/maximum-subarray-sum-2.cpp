#include <bits/stdc++.h>

using namespace std;

// Method II - Remove 1 Loop
// Worst-Case Time Complexity : O(n^2)

int main() {
    int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};

    int n = sizeof(arr)/sizeof(int);

    int best = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            best = max(best, sum);
        }
    }

    cout << "Maximum Subarray Sum : " << best;

    return 0;
}