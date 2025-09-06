#include<iostream>
#include<queue>

//push,pop have O(log n) tc
//top have O(1)

using namespace std;

int main(){
    //Maximum Heap - auto sort in desecending
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(98);
    pq.push(1);
    pq.push(8);
    pq.push(5); //{98,8,5,2,1,1}
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    //size, swap, empty same as others

    //Minimum Heap - auto sort in ascending
    priority_queue<int,vector<int>,greater<int>> minq; 
    minq.push(1);
    minq.push(87);
    minq.push(-1);
    minq.push(4);
    minq.push(2); //{-1,1,2,4,87}
    cout<<minq.top()<<endl;
    minq.pop();
    cout<<minq.top()<<endl;

    return 0;
}