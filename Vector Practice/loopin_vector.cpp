#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // For loop to input elements
    for (int i = 0; i < 5; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // For loop to print elements
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // For each loop to print elements
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    // While loop to print elements
    int idx = 0;
    while (idx < v.size()) {
        cout << v[idx++] << " ";
    }
    cout << endl;

    return 0;
}
