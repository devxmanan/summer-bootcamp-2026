// Group Anagrams 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> arr(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<string, vector<string>> mp;

    for(string str : arr)
    {
        string key = str;
        sort(key.begin(), key.end());

        mp[key].push_back(str);
    }

    int groupNo = 1;

    cout << "\nAnagram Groups:\n";

    for(auto group : mp)
    {
        cout << "Group " << groupNo++ << ": ";

        for(string word : group.second)
        {
            cout << word << " ";
        }

        cout << endl;
    }

    return 0;
}