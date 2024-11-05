#include <iostream>
#include <vector>
#include <string>
using namespace std;

int firstUniqChar(string s) {
    vector<int> charCount(26, 0);  // Vector to count occurrences of each character
    
    // Count the occurrences of each character
    for (char c : s) {
        charCount[c - 'a']++;
    }
    
    // Find the first character that has a count of 1
    for (int i = 0; i < s.size(); i++) {
        if (charCount[s[i] - 'a'] == 1) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    string s1 = "leetcode";
    string s2 = "loveleetcode";
    
    cout << "Input: " << s1 << endl;
    cout << "Output: " << firstUniqChar(s1) << endl;

    cout << "Input: " << s2 << endl;
    cout << "Output: " << firstUniqChar(s2) << endl;
    
    return 0;
}
