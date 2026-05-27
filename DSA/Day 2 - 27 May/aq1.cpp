//Rotate Matrix by 90deg

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

    for(int i =0; i<n; i++){
        for(int j=1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[n-1-i][j];
            arr[n-1-i][j] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}