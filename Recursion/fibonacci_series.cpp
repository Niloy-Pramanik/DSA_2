#include<iostream>
using namespace std;

int fibonacci_number(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int ans = fibonacci_number(n - 1) + fibonacci_number(n - 2);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int result = fibonacci_number(n);
    cout << "nth number is: " << result << endl;
    return 0;
}
