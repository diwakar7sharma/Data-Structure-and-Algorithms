#include<iostream>
#include<set>

// can store duplicate values as well 
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    for(auto i:ms){
        cout<<i<<" ";
    }
    cout<<endl;

    // ms.erase(2); //erases all the instances of 2's
    // for(auto i:ms){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    //only one instance will be erased
    ms.erase(ms.find(2));
    cout<<ms.count(2)<<endl;
    ms.erase(ms.find(2),next(ms.find(2),2));
    // count - here we can use the count function
    cout<<ms.count(2)<<endl;

    //all other functions same as set
    return 0;
}