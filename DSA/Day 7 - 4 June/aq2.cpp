#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    vector<string> words;
    for(int i =0; i<str.length(); i++){
        string word = "";
        while(i<str.length() && str[i] != ' '){
            word+=str[i];
            i++;
        }
        words.push_back(word);
    }
    
    for(string word: words){
        stack<char> s;
        for(char c: word){
            s.push(c);
        }
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<" ";
    }

}