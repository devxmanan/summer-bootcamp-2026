// String Compression aaaabbb-> a4b3 

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    int n = s.size();

    int i = 0;
    while(i < n) {
        int j = i;
        int count = 0;

        while(j < n && s[j] == s[i]) {
            j++;
            count++;
        }

        ans += s[i];
        ans += to_string(count);

        i = j;
    }

    cout << ans;

    return 0;
}
