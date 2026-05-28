//Diagonal Difference in Matrix

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
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    for(int i=0; i<n; i++){
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n-1-i];
    }
    cout<<abs(primaryDiagonal - secondaryDiagonal);
    return 0;
}