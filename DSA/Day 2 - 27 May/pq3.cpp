//longest consecutive increasing subarray

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxLen = 1;
    int currentLen = 1;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]){
            currentLen++;
        }
        else{
            currentLen = 1;
        }
        if(currentLen > maxLen){
            maxLen = currentLen;
        }
    }
    cout<<maxLen;
    return 0;
}