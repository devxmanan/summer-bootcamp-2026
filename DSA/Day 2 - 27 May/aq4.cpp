//Negate each value of an even row and then reverse the rows.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            for(int j=0; j<n; j++){
                arr[i][j] = -arr[i][j];
            }
        }
    }

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[n-i-1][j];
            arr[n-i-1][j] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}