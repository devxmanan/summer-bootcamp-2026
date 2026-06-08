//Divide an array into parts and fill one by one from both arrays

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> first, second;

    for(int i =0; i<n/2; i++){
        int val;
        cin>>val;
        if(i<n/2){
            first.push(val);
        } else {
            second.push(val);
        }
    }
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            cout<<first.front()<<" ";
            first.pop();
        } else {
            cout<<second.front()<<" ";
            second.pop();
        }
    }
}