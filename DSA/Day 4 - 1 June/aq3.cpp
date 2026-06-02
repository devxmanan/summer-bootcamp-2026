//Decompress a string for eg, 4[ab]2[c]3[de] -> ababababcdedede

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack <int> numberStack;
    stack <string> stringStack;

    string curr = "";
    int num = 0;
    for(char ch:s){
        if(isdigit(ch)){
            num = num*10+(ch-'0');
        }
        else if(ch=='['){
            numberStack.push(num);
            stringStack.push(curr);
            curr = "";
            num = 0;
        }
        else if(ch==']'){
            int repeat = numberStack.top();
            numberStack.pop();
            string prev = stringStack.top();
            stringStack.pop();
            for(int i=0; i<repeat; i++){
                prev += curr;
            }
            curr = prev;
        }
        else{
            curr += ch;
        }
    }
    cout<<curr<<endl;
    return 0;
}
