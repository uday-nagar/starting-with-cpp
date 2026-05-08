#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    // Vector Example
    vector<int> vec = {10, 20, 30, 40, 50};
    vec.push_back(60); // Add an element
    cout << "Vector elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Sort the vector
    sort(vec.begin(), vec.end());
    cout << "Sorted Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Map Example
    map<string, int> mp;
    mp["Alice"] = 25;
    mp["Bob"] = 30;
    mp["Charlie"] = 35;

    cout << "Map elements:" << endl;
    for (auto &pair : mp) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Set Example
    set<int> st = {10, 20, 30, 40};
    st.insert(50); // Add an element
    st.insert(20); // Duplicate elements are ignored

    cout << "Set elements: ";
    for (int val : st) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}