// #include<iostream>
// using namespace std;

// void print(int n){
//     //base case
//     if(n==0){
//         return ;
//     }

//     cout<< n <<endl;
//     //recursive relation
//     print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;

//     print(n);
// }

#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"  Source " <<src <<" destination " <<dest <<endl;
    //base case
    if(src == dest){
        cout<<"Reached destination"<<endl;
        return;
    }
    //processing - 1 step aheaddd
    src++;

    //recursive call
    reachHome(src,dest);

}

int main(){
    int dest = 10;
    int src = 1;

    cout<<endl;

    reachHome(src,dest);
    return 0;

}