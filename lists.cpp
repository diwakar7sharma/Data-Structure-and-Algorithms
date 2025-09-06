#include<iostream>
#include<list>

// lists are bidirectional 
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    for(auto i : ls){
        cout<<i<<" ";
    }
    cout<<endl;

    ls.push_front(0);
    ls.emplace_front(-1);
    for(auto i : ls){
        cout<<i<<" ";
    }
    cout<<endl;

    // rest functions are same as vectors
    // begin,end,clear,insert,size,swap
    return 0;
}