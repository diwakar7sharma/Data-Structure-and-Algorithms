#include<bits/stdc++.h>
using namespace std;

int EqOcc(vector<int> arr){
    int n = arr.size();
    int result=0;
    unordered_map<int,int> mpp;
    for(int i:arr){
        mpp[i]++;
    }
    int occ;
    for(auto i:mpp){
        
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        vector<int> arr;
        for(int j = 0 ;j<x;j++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
        cout<<EqOcc(arr);
    }
    return 0;
}