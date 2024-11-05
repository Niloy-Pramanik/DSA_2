// #include<iostream>
// using namespace std;

// void sayDigit(int n,string arr[]){
//     //base case
//     if(n== 0){
//         return 1;

//     }
//     //Processing
//     int digit =n%10;
//     n = n/10;
//     cout<<arr[n]<<" ";

//     //Recursive call
//     sayDigit(n),arr;
// }

// int main(){
//     string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

//     int n;
//     cin>>n;
//     cout<<endl;


//     sayDigit(n,arr);
//     cout<<endl;
// }

#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    // base case
    if (n == 0) {
        return;
    }
    // Processing
    int digit = n % 10;
    n = n / 10;

    // Recursive call
    sayDigit(n, arr);

    // Print the digit after the recursive call to maintain order
    cout << arr[digit] << " ";
}

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Digits in the number: ";

    // Edge case: if the number is 0
    if (n == 0) {
        cout << arr[0] << " ";
    } else {
        sayDigit(n, arr);
    }

    cout << endl;
    return 0;
}
