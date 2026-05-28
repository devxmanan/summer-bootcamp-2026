//Sum of a given range in array (prefix sum) (l and r are 1-based indexing)

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l, r;
    cin>>l>>r;

    //simple approach
    int sum = 0;
    for(int i=l-1; i<r; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;

    //prefix sum approach
    int prefix_sum[n+1];
    prefix_sum[0] = 0;
    for(int i=1; i<=n; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i-1];
    }
    cout<<prefix_sum[r] - prefix_sum[l-1]<<endl;

}