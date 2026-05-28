//Frequency Sort

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxFreq = 1;
    int freq = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
        }
        if(freq > maxFreq){
            maxFreq = freq;
        }
    }
    cout<<maxFreq;
    return 0;
}
