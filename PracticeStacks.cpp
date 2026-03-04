#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> reverse;
    st.push(10);
    st.push(20);        
    st.push(30);
    st.push(40);
    st.push(50);
    int n = st.size();
    cout<<n<<endl;
    while(n > 0){
        cout<<st.top()<<" ";
        reverse.push(st.top());
        st.pop();
        n--;
    }
    cout<<endl;
    while(reverse.size() > 0){
        cout<<reverse.top()<<" ";
        reverse.pop();
    }

}