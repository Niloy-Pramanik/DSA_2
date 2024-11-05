// #include<iostream>
// using namespace std;

// int minimumDays(int S,int N,int M){
//     int sunday =S/7;

//     int buyingDays = S -sunday;
//     int totalFood = S*M;
//     int ans =0;

//     if(totalFood %N ==0){
//         ans = totalFood/ N;
//     }
//     else{
//         ans = totalFood/ N+1;
//     }

//     if(ans <= buyingDays)
//     return ans;
//     else{
//         return -1;
//     }

// }

#include<iostream>
using namespace std;

int minimumDays(int S, int N, int M) {
    // Calculate the number of Sundays
    int sundays = S / 7;

    // Calculate the total days available for buying food (excluding Sundays)
    int buyingDays = S - sundays;

    // Calculate the total amount of food required for survival
    int totalFood = S * M;

    // Calculate the minimum days required to buy the necessary food
    int ans = 0;

    // If total food can be exactly divided by the amount bought per day
    if (totalFood % N == 0) {
        ans = totalFood / N;
    } else {
        ans = totalFood / N + 1;  // Add an extra day if there's a remainder
    }

    // If the number of buying days is sufficient to buy the required food
    if (ans <= buyingDays) {
        return ans;
    } else {
        return -1;  // Not possible to survive if required food can't be bought
    }
}

int main() {
    // Test case example
    int S = 10;  // Total days to survive
    int N = 16;  // Food units that can be bought per day
    int M = 2;   // Food units needed per day

    int result = minimumDays(S, N, M);

    if (result == -1) {
        cout << "It is not possible to survive." << endl;
    } else {
        cout << "Minimum days required to buy food: " << result << endl;
    }

    return 0;
}

