#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    for(auto i: dq){
        cout<<i<<" ";
    }
    cout<<endl;
    
    dq.push_front(0);
    dq.emplace_front(-1);
    for(auto i: dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back();
    for(auto i: dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_front();

    cout<<dq.back();
    cout<<dq.front();

    // rest functions are same as vectors
    // begin,end,clear,insert,size,swap
    return 0;
}