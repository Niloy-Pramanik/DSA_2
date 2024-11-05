// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
    
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<int> v = {1, 1, 2, 2, 2, 3, 4};
//     set<int> st;

//     for(int i=0;i<v.size();i++){
//         st.insert(v[i]);
//     }
//     int i=0;
//     for(int it:st){
//         v[i] = it;
//         i++;
//     }
//     for(int it:v){
//         cout<<it<<endl;
//     }
//     cout<<"Total unique int: "<<st.size;
//     return 0;
    
// }

#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    vector<int> v={1,1,1,3,3,3,1,1};

    map<int,int> mp;
    for(int it: v){
        mp[it]++;
    }
    int n = v.size()/2;
    for(auto it: mp){
        if(it.second>n){
            cout<<it.first<<endl;
            break;
        }
    }
    return 0;

}