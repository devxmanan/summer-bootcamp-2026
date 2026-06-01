// 5- Longest Common Prefix 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[n - 1];
    string ans = "";

    for(int i = 0; i < min(first.size(), last.size()); i++) {
        if(first[i] == last[i])
            ans += first[i];
        else
            break;
    }

    cout << ans;

    return 0;
}