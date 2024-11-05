#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& st,int s,int e){

    //Base case
    if(s>=e){
        return true;
    }

    if(st[s] != st[e]){
        return false;
    }
    //move towards the middle of the string

    return isPalindrome(st,s+1,e-1);
}

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;
    
    

    if(isPalindrome(str,0,str.size()-1)){
        cout<<"Output: YES"<<endl;
    }else{
        cout<<"Output: NO"<<endl;
    }
    return 0;
}