// #include<iostream>
// using namespace std;

// void jumping_stairs(nStairs){
//     // base case
//     if(nStairs <0){
//         return 0;
//     }
//     if(nStairs==0){
//         return 1;
//     }
//     //recursive relations
//     int ans = jumping_stairs(n-1)+jumping_stairs(n-2);
//     return ans;
// }
// int main(){
//     int nStairs;
//     cout<<"Enter the Number: "<<endl;
//     cin>>nStairs;

//     int result =jumping_stairs(nStairs);
//     cout<<result<<endl;

//     return 0;


// }
#include <iostream>
using namespace std;

class ClimbStairs {
public:
    static int countDistinctWayToClimbStair(long nStairs) {
        if (nStairs == 0) // base case: if we reach here we have successfully reached the bottom
            return 1;

        if (nStairs < 0) // if we reached here, a negative value has arrived
            return 0;

        // Recurrence Relation
        int ans = countDistinctWayToClimbStair(nStairs - 1) + countDistinctWayToClimbStair(nStairs - 2);

        return ans;
    }
};

int main() {
    long nStairs;
    cout << "Enter the number of stairs: ";
    cin >> nStairs;

    int result = ClimbStairs::countDistinctWayToClimbStair(nStairs);
    cout << "Number of distinct ways to climb the stairs: " << result << endl;

    return 0;
}
 