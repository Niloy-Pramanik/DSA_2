// #include<bits/stdc++.h>

// using namespace std;

// int Binary_Search(int arr[],int low,int high,int mid,int key){

// while(low<=high){
//     int mid = (low+high)/2;

//     if(arr[mid] == key){
//         return mid;
//     }

//     if(arr[mid]<key){
//         low = mid+1;
//     }

//     if(arr[mid]>key){
//         high = mid-1;
//     }
   
// }
//  return -1;

// }
// int main(){

//     int n,key;
//     cout<<"Enter the key: ";
//     cin>>key;
//     int arr[n];
//     cout<<"Enter the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int result = Binary_Search(arr,0,n-1,key);
//     if(result !=-1){
//         cout<<"key found at index: "<<result<<endl;
//     }else{
//         cout<<"key not found"<<endl;
//     }
    

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int Binary_Search(int arr[], int low, int high, int key) {
//     while(low <= high) {
//         int mid = (low + high) / 2;

//         if(arr[mid] == key) {
//             return mid;
//         }

//         if(arr[mid] < key) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n, key;
    
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     int arr[n];

//     cout << "Enter the array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the key: ";
//     cin >> key;

//     int result = Binary_Search(arr, 0, n - 1, key);
    
//     if(result != -1) {
//         cout << "Key found at index: " << result << endl;
//     } else {
//         cout << "Key not found" << endl;
//     }

//     return 0;
//}

#include<bits/stdc++.h>

using namespace std;

int Binary_Search(int arr[],int mid,int low,int high,int key){
    if(low<=high){
        int mid= (low+high)/2;
    }

        if(arr[mid]==key){
            return mid;

        }
        if(arr[mid]<key){
            return Binary_Search(arr,mid+1,high,key);
        }else{
            return Binary_Search(arr,low,mid-1,key);
        }
    


}

int main(){
    int n,key;
    cout<<"Enter the numbers of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key: ";
    cin>>key;

    int result= Binary_Search(arr,0,n-1,key);
    if(result != -1){
        cout<<"Key found at index: <<result";

    }else{
        cout<<"Key is not found";
    }

    return 0;
}
