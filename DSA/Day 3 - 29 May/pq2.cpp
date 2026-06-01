// Find First Non Repeating Character

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map <char, int> freq;
    
    for(char ch: s)
        freq[ch]++;

    bool found = false;
    
    for(char ch: s){
        if(freq[ch] == 1){
            cout<<ch<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"No non-repeating character found!"<<endl;
    }

}