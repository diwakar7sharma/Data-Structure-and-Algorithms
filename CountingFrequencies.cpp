#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    vector<int> arr = {10,5,10,15,10,5};
    //optimized solution
    map<int,int> mpp;
    for(int i:arr){
        mpp[i]++;
    }
    //iterator will work here so, we must use auto
    for(auto i: mpp){
        cout<<i.first<<" occurs "<<i.second<<" times in the array."<<endl;
    }
}