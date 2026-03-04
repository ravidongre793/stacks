#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    stack<int> st;
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    nge[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top() <= arr[i]){
            st.pop();
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}  