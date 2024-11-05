#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxMeetings(int start[], int end[], int n) {
    vector<pair<int, int>> v;

    // Pairing start and end times
    for (int i = 0; i < n; i++) {
        pair<int, int> p = make_pair(start[i], end[i]);
        v.push_back(p);
    }

    // Sorting meetings by their end time using lambda function
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int count = 1;   // First meeting can always be attended
    int ansEnd = v[0].second;

    // Checking for subsequent meetings
    for (int i = 1; i < n; i++) {
        if (v[i].first > ansEnd) {
            count++;
            ansEnd = v[i].second; // Update the end time to the current meeting's end time
        }
    }

    return count;
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start)/sizeof(start[0]);

    cout << "Maximum number of meetings: " << maxMeetings(start, end, n) << endl;

    return 0;
}
