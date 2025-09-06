#include<iostream>
#include<stack>

// All operations run on a O(1) time
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"Size : "<<st.size()<<endl;
    if(st.empty()){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."<<endl;
    }
    stack<int> st1;
    st1.push(-1);
    cout<<st1.top()<<" and "<<st.top()<<endl;
    st1.swap(st);
    cout<<st1.top()<<" and "<<st.top();
    return 0;
}