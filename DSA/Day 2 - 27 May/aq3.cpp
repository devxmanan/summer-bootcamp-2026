//Find element having frequency greater than threshold= n/4 in an n sized array

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int threshold = n/4;

    //bruteforce
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > threshold){
            cout<<arr[i]<<endl;
            break;
        }
    }

    //frequency count method

    int freq[100] = {0};
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(freq[arr[i]] > threshold){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}