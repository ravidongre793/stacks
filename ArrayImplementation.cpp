#include<iostream>
using namespace std;
class Stack{ // user defined data structure.
    public: 
    int arr[5];
    int idx = -1;
    void push(int val){
        if(idx==4){
            cout<<"stack is full";
            cout<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        idx--;
    }
    void top(){
        if(idx==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[idx]<<" ";
        }
    }
};
int main(){
    Stack st ;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(10);
    cout<<st.size();
    cout<<endl;
    st.display();
}