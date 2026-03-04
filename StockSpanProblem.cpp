#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    stack<int> st;
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    nge[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i] = st.top();
        nge[i]=i-nge[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}  