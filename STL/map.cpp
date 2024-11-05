//Map

#include <bits/stdc++.h>
using namespace std;
 int main() {
    
    // Initializing map
    map<int,int> mp;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    
    // // Incrementing the values by one
    // for(int i=0; i<mp.size();i++){
    //     mp[i]++;
    // }
    
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}