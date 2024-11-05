#include<bits/stdc++.h>
using namespace std;

pair<int, int> RMaxMin(vector<int>& A, int i, int j) {
    if (i == j) { 
        return {A[i], A[i]};
    }
    
    if (i + 1 == j) { 
        return {max(A[i], A[j]), min(A[i], A[j])};
    }

    int mid = (i + j) / 2;

    pair<int, int> left = RMaxMin(A, i, mid);
    pair<int, int> right = RMaxMin(A, mid + 1, j);
    
    int fmax = max(left.first, right.first);
    int fmin = min(left.second, right.second);

    return {fmax, fmin};
}

int main() {
    vector<int> A = {3, 5, 1, 8, 7, 2, 9, 4}; 
    int n = A.size();
    
    pair<int, int> result = RMaxMin(A, 0, n - 1);
    cout << "Maximum element: " << result.first << std::endl;
    cout << "Minimum element: " << result.second << std::endl;
    
    return 0;
}