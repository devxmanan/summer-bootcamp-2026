//Find next permutation of a given string without using inbuilt function

#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int n = str.length();
    int i = n - 2;

    while(i >= 0 && str[i] >= str[i+1]){
        i--;
    }
    
    if(i < 0){
        reverse(str.begin(), str.end());
    }
    else{
        int j = n - 1;
        while(str[j] <= str[i]){
            j--;
        }
        swap(str[i], str[j]);
        reverse(str.begin() + i + 1, str.end());
    }
    cout<<str<<endl;
    return 0;
}