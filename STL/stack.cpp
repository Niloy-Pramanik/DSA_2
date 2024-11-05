// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     // Initialize a stack
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
    
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }

//Vector

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     // Initialize a vector
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     // Initialize a with same value
//     //vector<int> v(number_of_elements, the_value);
    
//     for(int i: v){
//         cout<<i<<endl;
//     }
    
//     // Pop the last two elements
//     v.pop_back();
//     v.pop_back();
    
//     //Now insert 50 at index 2
//     //vectorName.insert(index, element);

//     //v.begin() returns an iterator
//     v.insert(v.begin() + 1, 50);
    
//     cout<<"After insertion"<<endl;
//     for(int i: v){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//Sorting using vector
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     // Initialize a vector
//     vector<int> v;
//     v.push_back(40);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(10);
    
//     //sorting in ascending order
//     sort(v.begin(), v.end());
    
//     //sorting in descending order
//     sort(v.begin(), v.end(),greater<int>());
    
//     for(int i:v){
//         cout<<i<<endl;
//     }
//     return 0;
// }


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

//1,1,2,2,2,3,4 given a vector ,find the non duplicatng element and sort it ascending order in c++