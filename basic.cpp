#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>st , int val){
    stack<int> rt;
    while(st.size()>0){
        rt.push(st.top());
        st.pop();
    }
    st.push(val);
    cout<<st.top()<<" ";
    while(rt.size()>0){
        st.push(rt.top());
        cout<<rt.top()<<" ";
        rt.pop();
    }
}
void pushAtidx(stack<int>st ,int idx,int val){
    stack<int> rt;
    while(st.size()>idx){
        rt.push(st.top());
        st.pop();
    }
    st.push(val);
    cout<<st.top()<<" ";
    while(rt.size()>0){
        st.push(rt.top());
        cout<<rt.top()<<" ";
        rt.pop();
    }
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
    cout<<st.size()<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        rt.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    while(rt.size()>0){
        cout<<rt.top()<<" ";
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    cout<<st.top();
    cout<<endl;
    pushAtBottom(st,100);
    cout<<endl;
    pushAtidx(st,2,110);
}