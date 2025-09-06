#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    map<char,int> mpp = {};

    for(auto i:s){
        mpp[i]++;
    }
    cout<<"Map : "<<endl;
    for(auto i:mpp){
        cout<<i.first<<" --> "<<i.second<<endl;
    }
}