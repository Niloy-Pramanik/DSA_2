#include <iostream>
using namespace std;


void printNumbers(int n) {
    //Base case
    if (n <= 0) {
        return; 
    }
    printNumbers(n - 1); // Recursive call with n-1
    cout << n << " "; // Print the current number
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        cout << "Numbers from 1 to " << n << ": ";
        printNumbers(n);
        cout << endl;
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    return 0;
}


