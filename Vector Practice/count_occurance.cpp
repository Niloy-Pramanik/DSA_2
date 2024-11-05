#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(6);

    // Input 6 elements into the vector
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << "Enter X: ";
    int x;
    cin >> x;

    // Initialize occurrence counter
    int occurrence = 0;

    // Count occurrences of x in the vector
    for (int ele : v) {
        if (ele == x) {
            occurrence++;
        }
    }

    // Output the number of occurrences
    cout << occurrence << endl;

    return 0;
}
