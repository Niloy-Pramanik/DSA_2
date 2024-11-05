#include<iostream>
#include<vector>
using namespace std;

int main(){

    // int array[]={1,2,1,2,1,2};

    // int anssum=0;

    // for(int i=0;i<6;i++){
    //     if(i%2==0){
    //         anssum += array[i];

    //     }else{
    //         anssum-=array[i];
    //     }

    // }
    // cout<<"Result is: "<<anssum<<endl;
    // return 0;
 
    vector<int> v(6);
    
    // Input 6 elements into the vector
    cout << "Enter 6 elements: ";
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    int evenSum = 0;
    int oddSum = 0;

    // Calculate the sums of even and odd indices
    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) {
            evenSum += v[i];
        } else {
            oddSum += v[i];
        }
    }

    // Calculate the difference
    int difference = evenSum - oddSum;

    // Output the result
    cout << "Difference between sum of elements at even indices and odd indices: " << difference << endl;

    return 0;
}


