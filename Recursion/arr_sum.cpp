#include<iostream>
using namespace std;

int isSum(int arr[],int size,int index){

    //base case
    if(index == size){
        return 0;
    }
    return arr[index] + isSum(arr,size,index +1);
}
int main(){
    int arr[5] = {3,2,5,1,6};
    int size = 5;

    int ans = isSum(arr,size,0);
    cout<<"The sum of the array is: "<<ans<<endl;
    return 0;
}