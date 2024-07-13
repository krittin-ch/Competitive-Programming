#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    // Define the universal set {1, 2, ..., 10}
    set<int> universe;
    for (int i = 1; i <= 10; ++i) {
        universe.insert(i);
    }

    set<int> s1 = {1, 2, 3, 4};
    set<int> s2 = {3, 4, 5, 6};

    // Intersection
    set<int> intersection;
    // std::set_intersection
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersection, intersection.begin()));

    cout << "Intersection: ";
    for (auto it = intersection.begin(); it != intersection.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Union
    set<int> uni;
    // std::set_union
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(uni, uni.begin()));

    cout << "Union: ";
    for (auto it = uni.begin(); it != uni.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Complement of s1 in universe
    set<int> complement_s1;
    // std::set_difference
    set_difference(universe.begin(), universe.end(), s1.begin(), s1.end(), inserter(complement_s1, complement_s1.begin()));

    cout << "Complement of s1: ";
    for (auto it = complement_s1.begin(); it != complement_s1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Difference (s1 - s2)
    set<int> difference;
    // std::set_difference
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(difference, difference.begin()));

    cout << "Difference (s1 - s2): ";
    for (auto it = difference.begin(); it != difference.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
