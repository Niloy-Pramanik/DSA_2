// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> candyStore(int candies[],int N,int K){

//     sort(candies,candies+N);

//     int mini =0;
//     int buy =0;
//     int free= N-1;

//     while(buy == free){
//         mini= mini+ candies[buy];
//         buy++;
//         free = free-K;
//     }

//     int maxi =0;
//     int buy = N-1;
//     free=0;

//     while(free <= buy){
//         maxi= maxi+ candies[buy];
//         buy--;
//         free= free+K;
//     }
//     vector<int> ans;
//     ans.push_back(mini);
//     ans.push_back(maxi);
//     return ans;

// }

// int main(){
//     int candies[]={3,2,1,4};
//     int N= ARRAY_SIZES(candies);
//     int K=2;

//     vector<int> result = candyStore(candies,N,K);
//     cout << "Minimum cost: "<< result[0] <<endl;
//     cout << "Minimum cost: "<< result[1] <<endl;

//      return 0 ;
// }

#include<iostream>
#include<vector>
#include<algorithm>  // For sorting
using namespace std;

// Function to calculate the minimum and maximum cost to buy candies
vector<int> candyStore(int candies[], int N, int K) {

    // Sort the candies array in ascending order
    sort(candies, candies + N);

    int mini = 0;  // To store the minimum cost
    int buy = 0;   // Start buying candies from the beginning
    int free = N - 1;  // Skip free candies from the end

    // Calculate the minimum cost
    while (buy <= free) {
        mini = mini + candies[buy];  // Add the current candy's price to mini
        buy++;  // Move to the next candy
        free = free - K;  // Skip 'K' free candies
    }

    int maxi = 0;  // To store the maximum cost
    buy = N - 1;   // Start buying candies from the end
    free = 0;      // Skip free candies from the beginning

    // Calculate the maximum cost
    while (buy>= free) {
        maxi = maxi + candies[buy];  // Add the current candy's price to maxi
        buy--;  // Move to the previous candy
        free = free + K;  // Skip 'K' free candies
    }

    // Store the results in the vector
    vector<int> ans;
    ans.push_back(mini);
    ans.push_back(maxi);

    return ans;  // Return the result
}

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main() {
    int candies[] = {3, 2, 1, 4};
    int N = ARRAY_SIZE(candies);  // Calculate the size of the array
    int K = 2;  // Number of free candies for every candy bought

    vector<int> result = candyStore(candies, N, K);

    // Output the results
    cout << "Minimum cost: " << result[0] << endl;
    cout << "Maximum cost: " << result[1] << endl;

    return 0;
}
