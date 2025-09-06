#include<iostream>
#include<set>

// Stores in sorted and unique way
// Everything happens in O(log n)
using namespace std;

int main(){
    set<int> s;
    s.emplace(23);
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    //Functionality of insert in vector can be used also, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() will remain same

    auto it = s.find(5); // points to the element if found 
    cout<<*it<<endl;
    auto ite = s.find(28); // if not , returns 0
    cout<<*ite<<endl;

    //erase - deletes the element and maintain the sorted order
    s.erase(5); // takes logrithemic time O(log n)
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    //erase using iterator 
    //takes constant time O(1)
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1,it2);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    //lower_bound - if found returns the same element returns the element greater than the given (if not found )
    it = s.lower_bound(1);
    cout<<*it<<endl;
    it = s.lower_bound(2);
    cout<<*it<<endl;

    //upper_bound - return a greater element than the input in every case
    it = s.upper_bound(1);
    cout<<*it<<endl;
    it = s.upper_bound(23);
    cout<<*it<<endl;
    
    return 0;
}