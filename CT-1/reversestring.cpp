#include<bits/stdc++.h>

using namespace std;

void printReverse(string& st,int index){
    if(index <0){
        return;
    }

    cout<< st[index];

    printReverse(st, index-1);
}

int main(){
    string str;

    cout<<"Enter a string: ";
    cin>>str;

    cout<<"Output: ";
    printReverse(str,str.size()-1);
    cout<<endl;

    return 0;
}