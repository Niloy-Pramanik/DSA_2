// Set

#include <bits/stdc++.h>
using namespace std;
 int main() {
    
    // Initialize a set (It returns elements in a ascending order)
    //set<int> s= {2,5,1,1,4,6,7};
    // To do it in descending order
    set<int, greater<int>> s= {2,5,1,1,4,6,7};
    s.insert(10);
    s.insert(5);
    for(int i: s){
        cout<<i<<endl;
    }
    
    s.erase(s.begin());
    s.erase(5);
    
    cout<<"After deleting the first element and 5"<<endl;
    for(int i: s){
        cout<<i<<endl;
    }
    return 0;
}