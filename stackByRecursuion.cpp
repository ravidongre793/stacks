#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void displayRecRev(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRecRev(st);
    st.push(x);
}
void displayRec(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottom(stack<int>& st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return ;
    int x = st.top();
    st.pop();
    reverse(st); 
    pushAtBottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    stack<int> rt;
    // displayRecRev(st);
    // cout<<endl;
    // displayRec(st);
    // cout<<endl;
    // pushAtBottom(st,100);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
}  