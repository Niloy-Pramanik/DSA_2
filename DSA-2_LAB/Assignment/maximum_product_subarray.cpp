// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int maxOfThree(int a,int b,int c) {
//     return max(max(a, b),c);
// }

// int minOfThree(int a, int b, int c) {
//     return min(min(a, b), c);
// }

// int findMaxProductSubarray(vector<int>& arr, int& startIndex, int& endIndex) {
//     int n = arr.size();  
//     if (n == 0) return 0;  
//     int currentMaxProduct = arr[0];
//     int currentMinProduct = arr[0];
//     int maxProduct = arr[0];

    
//     int tempStartIndex= 0;
//     startIndex= 0;
//     endIndex= 0;
    
//     for (int i= 1;i< n;i++) {
        
//         if (arr[i]< 0) {
//             swap(currentMaxProduct, currentMinProduct);
//         }

     
//         currentMaxProduct= max(arr[i], currentMaxProduct * arr[i]);
//         currentMinProduct= min(arr[i], currentMinProduct * arr[i]);

//         if (currentMaxProduct > maxProduct) {
//             maxProduct= currentMaxProduct;
//             endIndex= i;            
//             startIndex= tempStartIndex;  
//         }
//         if (currentMaxProduct== arr[i]) {
//             tempStartIndex= i;
//         }
//     }
// }

//     return maxProduct; 

// int main() {
//     int arraySize;
//     cout << "Enter the size of the array: ";
//     cin >> arraySize;

//     vector<int> arr(arraySize);
//     cout << "Enter the array: ";
//     for (int i = 0; i<arraySize; i++) {
//         cin >>arr[i];
//     }

//     int startIndex, endIndex;


//     int maxProduct = findMaxProductSubarray(arr, startIndex, endIndex);

//     // Output the result
//     cout << "Maximum product: " << maxProduct << endl;
//     cout << "Start index: " << startIndex << endl;
//     cout << "End index: " << endIndex << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxOfThree(int a, int b, int c) {
    return max(max(a, b), c);
}

int minOfThree(int a, int b, int c) {
    return min(min(a, b), c);
}

int findMaxProductSubarray(vector<int>& arr, int& startIndex, int& endIndex) {
    int n = arr.size();
    if (n == 0) return 0; // Return 0 if the array is empty

    int currentMaxProduct = arr[0];
    int currentMinProduct = arr[0];
    int maxProduct = arr[0];
    
    int tempStartIndex = 0;
    startIndex = 0;
    endIndex = 0;
    
    for (int i = 1; i < n; i++) {
        // If the current element is negative, swap the current max and min products
        if (arr[i] < 0) {
            swap(currentMaxProduct, currentMinProduct);
        }

        // Update the current max and min products
        currentMaxProduct = max(arr[i], currentMaxProduct * arr[i]);
        currentMinProduct = min(arr[i], currentMinProduct * arr[i]);

        // Update the max product found so far and track indices
        if (currentMaxProduct > maxProduct) {
            maxProduct = currentMaxProduct;
            endIndex = i;
            startIndex = tempStartIndex; // Update start index for the subarray
        }
        
        // If the current max product is just the current element, update tempStartIndex
        if (currentMaxProduct == arr[i]) {
            tempStartIndex = i;
        }
    }

    return maxProduct;
}

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    vector<int> arr(arraySize);
    cout << "Enter the array: ";
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    int startIndex, endIndex;
    int maxProduct = findMaxProductSubarray(arr, startIndex, endIndex);

    // Output the result
    cout << "Maximum product: " << maxProduct << endl;
    cout << "Start index: " << startIndex << endl;
    cout << "End index: " << endIndex << endl;

    return 0;
}

