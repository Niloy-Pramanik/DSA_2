// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Supply {
//     double weight;      
//     double usefulness;  

//     double usefulnessPerWeight() const {
//         return usefulness / weight;
//     }
// };

// bool compareUsefulness(const Supply &a, const Supply &b) {
//     return a.usefulnessPerWeight()> b.usefulnessPerWeight();
// }

// int main() {
//     int numSupplies;
//     cout<<"Enter number of supplies: ";
//     cin>>numSupplies;

//     vector<double> weights(numSupplies), usefulness(numSupplies);

    
//     cout << "Enter weights: ";
//     for (int i = 0; i < numSupplies; i++) {
//         cin >> weights[i];
//     }

//     cout << "Enter usefulness: ";
//     for (int i = 0; i < numSupplies; i++) {
//         cin >> usefulness[i];
//     }

//     int numHelicopters;
//     cout << "Enter number of helicopters: ";
//     cin >> numHelicopters;
//     vector<double> helicopterCap(numHelicopters);
//     cout << "Enter helicopter CaphelicopterCap: ";
//     for (int i= 0;i < numHelicopters; i++) {
//         cin >> helicopterCap[i];
//     }

//     vector<Supply> supplies(numSupplies);
//     for (int i = 0; i < numSupplies; i++) {
//         supplies[i] = {weights[i], usefulness[i]};
//     }
//     sort(supplies.begin(), supplies.end(), compareUsefulness);

//     sort(helicopterCap.begin(), helicopterCap.end());

//     double totalUsefulness = 0.0;
//     int helicoptersUsed = 0;

//     for (double helicopterCapacity : helicopterCap) {
//         if (supplies.empty()) break;

//         double remainingCapacity = helicopterCapacity;

       
//         for (auto it = supplies.begin(); it != supplies.end();) {
//             if (remainingCapacity == 0) break;  
          
//             if (it->weight <= remainingCapacity) {
//                 totalUsefulness += it->usefulness;
//                 remainingCapacity -= it->weight;
//                 it = supplies.erase(it);  
//             } else {
                
//                 totalUsefulness += it->usefulnessPerWeight() * remainingCapacity;
//                 it->weight -= remainingCapacity;
//                 remainingCapacity = 0;  
//             }
//         }

//         helicoptersUsed++; 
//     }

//     cout << "Maximum usefulness: " << totalUsefulness << endl;
//     cout << "Helicopters used: " << helicoptersUsed << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    double weight;
    double usefulness;

    double ratio()const {
        return usefulness / weight;
    }
};

bool compareItems(const Item &a,const Item &b) {
    return a.ratio()> b.ratio();
}

int main() {
    int n;
    cin >> n;

    vector<double> weights(n), usefulness(n);
    for (int i= 0; i < n; i++) {
        cin >> weights[i];
    }

    for (int i= 0;i < n; i++) {
        cin >> usefulness[i];
    }
    int numHelicopters;
    cin >> numHelicopters;
    vector<double> capacities(numHelicopters);
    for (int i = 0; i < numHelicopters; i++) {
        cin >> capacities[i];
    }

    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        items[i] = {weights[i], usefulness[i]};
    }

    sort(items.begin(), items.end(), compareItems);
    sort(capacities.begin(), capacities.end());

    double totalUsefulness = 0.0;
    int helicoptersUsed = 0;

    for (double capacity : capacities) {
        if (items.empty()) break;

        double spaceLeft = capacity;

        for (auto it = items.begin(); it != items.end();) {
            if (spaceLeft== 0) break;

            if (it->weight <= spaceLeft) {
                totalUsefulness += it->usefulness;
                spaceLeft-= it->weight;
                it = items.erase(it);
            } else {
                totalUsefulness += it->ratio() * spaceLeft;
                it->weight-= spaceLeft;
                spaceLeft = 0;
            }
        }

        helicoptersUsed++;
    }

    cout << "Maximum usefulness: " << totalUsefulness << endl;
    cout << "Helicopters used: " << helicoptersUsed << endl;

    return 0;
}
