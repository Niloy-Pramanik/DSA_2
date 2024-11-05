#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num{1,2,3,4,5};
   

    cout<<"Initial vector: ";
     //Access Element
     cout << "Element at Index 0: " << num.at(0) << endl;
     cout << "Element at Index 2: " << num.at(2) << endl;
     cout << "Element at Index 4: " << num.at(4);

    for(int&i :num){
        cout<<i<<" ";
    }
    //add integer
    num.push_back(6);
    num.push_back(7);

    cout<<"\nUpdated vector: ";
    for(int&i :num){
        cout<<i<<" ";
    }

    

    return 0;
}
