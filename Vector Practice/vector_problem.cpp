#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"How many numbers?"<<endl;
    int n;
    cin>>n;

    vector<string> v;
     cout<<"Enter the String: ";
    for(int i=0;i<n;i++){
       
        string s;
        
        cin>>s;
        s[0] = toupper(s[0]);
        v.push_back(s);
    
       
    }
     cout<<"Capitalized result: ";
    for(string i:v){
        cout<<i<<" ";
        
    }

    cout<<endl;
    return 0;

}