//Print leaders in an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int flag = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}