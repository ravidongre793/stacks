#include <iostream>
#include<stack>
using namespace std;
int main() {
    int arr[] = {5,6,2,4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ngi[n];
    stack<int> st;
    ngi[n-1] = -1;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        if(st.size() > 0 && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(st.size() == 0) ngi[i] = -1;
        else ngi[i] = st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ngi[i]<<" ";
    }
}