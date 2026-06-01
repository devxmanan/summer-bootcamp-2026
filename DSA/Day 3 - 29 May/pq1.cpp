// Remove Duplicate Characters

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    if (getline(cin, str)) {
        unordered_set<char> seen;
        string result = "";
        for (char ch : str) {
            if (seen.find(ch) == seen.end()) {
                seen.insert(ch);
                result += ch;
            }
        }
        cout << result << endl;
    }
    return 0;
}



