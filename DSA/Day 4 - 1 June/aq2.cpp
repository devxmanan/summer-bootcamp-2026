//Find first non-repeating character in a string

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_map<char, int> freq;

    for(char ch: str){
        freq[ch]++;
    }
    for(char ch: str){
        if(freq[ch]==1){
            cout<<ch<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}