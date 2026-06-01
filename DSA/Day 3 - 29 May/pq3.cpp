// Check if two strings are anagram or not 

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(s1.length() != s2.length()){
        cout<<"No anagrams"<<endl;
        return 0;
    }

    unordered_map <char, int> freq;

    for(char ch: s1)
        freq[ch]++;
    
    for(char ch: s2){
        freq[ch]--;
    }

    bool anagram = true;

    for(auto it: freq){
        if(it.second != 0){
            anagram = false;
            break;
        }
    }

    if(anagram){
        cout<<"Anagrams"<<endl;
    }
    else{
        cout<<"Not anagrams"<<endl;
    }
    
}