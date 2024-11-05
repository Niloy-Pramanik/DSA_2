#include <iostream>
#include <vector>

using namespace std;

int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
    vector<int> left(arr.begin()+ left,arr.begin() + mid + 1);
    vector<int> right(arr.begin()+ mid + 1,arr.begin()+right + 1);

    int i =0,j = 0,k =left,inversions = 0;
    
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++]= left[i++];
        } else {
            arr[k++] = right[j++];
            inversions += (left.size() - i); 
        }
    }

    while (i < left.size()) {
        arr[k++]= left[i++];
    }

    while (j< right.size()) {
        arr[k++]= right[j++];
    }

    return inversions;
}

int mergeSortAndCount(vector<int> &arr, int left, int right) {
    int inversions = 0;

    if (left < right) {
        int mid =left + (right - left) / 2;

        inversions += mergeSortAndCount(arr, left, mid); 
        inversions += mergeSortAndCount(arr, mid + 1, right); 
        inversions += mergeAndCount(arr, left, mid, right); 
    }

    return inversions;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int>arr(n);
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result= mergeSortAndCount(arr, 0, n - 1);

    cout << "Result: " << result << endl;

    return 0;
}
