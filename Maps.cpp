#include<iostream>
#include<map>

//Time complexity is O(log n)
using namespace std;

int main(){
    map<int,int> mp;
    // map<pair<int,int>,int> mp;
    // map<int,pair<int,int>> mp;
    mp[1]=3;
    mp[0]=2;
    mp[-1]=4;
    // mp.emplace({0,2});
    // mp.insert({-1,5});
    // mp[{2,2}]=1;

    cout<<mp[0]<<endl;

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //bounds
    auto i = mp.lower_bound(0);
    cout<<i->first<<" "<<i->second<<endl;
    i = mp.upper_bound(0);
    cout<<i->first<<" "<<i->second<<endl;

}
void Multimap(){
    multimap<int,int> mmp;
    //same as maps , only it can store multiple keys
    //mmp[key] cannot be used here
}
