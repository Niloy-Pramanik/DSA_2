#include <iostream>
#include <vector>

using namespace std;

// Function to find the index of the minimum element in the rotated sorted array
int findRotationCount(const vector<int> &arr) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        if (arr[left] <= arr[right]) {
            return left;  
        }

        int mid = left + (right - left) / 2;
        int prev = (mid - 1 + arr.size()) % arr.size(); 
        int next = (mid + 1) % arr.size();              

        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
            return mid;  
        }

        if (arr[mid] >= arr[left]) {
            left = mid + 1;  
        } else {
            right = mid - 1;  
        }
    }

    return -1;  
}

int main() {
  
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int rotations = findRotationCount(arr);
    cout << "Result: rotated " << rotations << " times" << endl;

    return 0;
}
