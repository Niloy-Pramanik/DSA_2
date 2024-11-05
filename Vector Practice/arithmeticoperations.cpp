#include<iostream>
using namespace std;

int main(){
    int a,b;
    int choice;
    
    cout<<"Enter the value of a & b: ";
   
    cin>>a>>b;
    cout<<"Enter the choice: ";
    cin>>choice;

    if(choice == 1){
        cout<<"Addition is: ";
        cout<<a+b;

    }else if(choice == 2){
        cout<<"Subtraction is: ";
        cout<<a-b;
    }else if(choice == 3){
        cout<<"Multiplication is: ";
        cout<<a*b;
    }else if(choice == 4){
        cout<<"Division is: ";
        cout<<a/b;

    }else{
        cout<<"Invalid operation!";
    }
    cout<<endl;
    return 0;

}