#include<iostream>
using namespace std;

int fibonacci_number(int n){
    //Base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci_number(n-1) + fibonacci_number(n-2);
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int results = fibonacci_number(n);
    cout<<results<<endl;
    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

// Recursive function to find the minimum element in the array
int findMin(int arr[], int n, int index = 0) {
    if (index == n - 1) {
        return arr[index];
    }
    int minVal = findMin(arr, n, index + 1);
    return (arr[index] < minVal) ? arr[index] : minVal;
}

// Recursive function to find the maximum element in the array
int findMax(int arr[], int n, int index = 0) {
    if (index == n - 1) {
        return arr[index];
    }
    int maxVal = findMax(arr, n, index + 1);
    return (arr[index] > maxVal) ? arr[index] : maxVal;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement = findMin(arr, n);
    int maxElement = findMax(arr, n);

    cout << "Minimum element in the array is: " << minElement << endl;
    cout << "Maximum element in the array is: " << maxElement << endl;

    return 0;
}
