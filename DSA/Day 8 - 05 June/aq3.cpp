//Next greater element

//input: arr = [57, 3, 4, 99, 19, 50]
//output: arr = [99, 4, 99, -1, 50, -1]

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    stack<int> st;
    int res[n];
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }

        if(st.empty()){
            res[i] = -1;
        } else {
            res[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<res[i];
        if(i < n-1) cout<<" ";
    }
    cout<<"\n";
}