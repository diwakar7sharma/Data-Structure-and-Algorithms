#include<iostream>
#include<queue>
// ->[1,2,3,4] FIFO
//all the operations happening in O(1)
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;
    
    //size, swap, empty are same as stack
    return 0;
}