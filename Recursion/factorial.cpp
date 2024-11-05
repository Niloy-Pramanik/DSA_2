#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
        return 1;
    
    // int small = factorial(n-1);
    // int big = n*small;

    return n* factorial(n-1);
    
}


int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    

    int ans = factorial(n);
    cout<<"Result is:"<<ans<<endl;

    return 0;
}