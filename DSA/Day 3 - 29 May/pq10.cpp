// Minimum Window Substring 

#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> need;

    for(char ch : t) {
        need[ch]++;
    }

    int required = t.size();
    int left = 0;
    int minLen = INT_MAX;
    int start = 0;

    for(int right = 0; right < s.size(); right++) {
        if(need[s[right]] > 0) {
            required--;
        }

        need[s[right]]--;

        while(required == 0) {
            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            need[s[left]]++;

            if(need[s[left]] > 0) {
                required++;
            }

            left++;
        }
    }

    if(minLen == INT_MAX)
        cout << "";
    else
        cout << s.substr(start, minLen);

    return 0;
}