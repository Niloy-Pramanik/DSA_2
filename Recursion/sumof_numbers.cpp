#include<iostream>
using namespace std;
int sumNumbers(int n){
    //Base case
    if(n<=0){
        return 0;

    }
    return n+ sumNumbers(n-1);
}

int main(){
    int n;
    cout<<"Enter the numbers: "<<endl;
    cin>>n;
    if(n>0){
        int sum = sumNumbers(n);
        cout<<"The sum of numbers 1 to Nth is: "<<sum<<endl;
    }else{
        cout<<"Please enter valid integer value: "<<endl;
    }
    return 0;
}

// int rec2(int n){
//     if(n==1){
//         return 1;
//     }else{
//         return n+ rec2(n-1);
//     }
// }
// int main(){
//     //rec1(1,6)
//     cout<<rec2(3);
//     return 0;
// }