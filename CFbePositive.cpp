#include<iostream>
#include<vector>
using namespace std;
int BePositive(vector<int> input){
    int minOps=0;
    for(int i=0;i<input.size();i++){
        if(input[i]==0){
            input[i]+=1;
            minOps+=1;
        }
    }
    int minOnes = 0;
    for(int i:input){
        if(i==-1){
            minOnes++;
        }
    }
    if(minOnes%2!=0){
        minOps+=2;
    }
    return minOps;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vector<int> arr;
        for(int j=0;j<x;j++){
            int k;
            cin>>k;
            arr.push_back(k);
        }
        cout<<BePositive(arr)<<endl;
    }
    return 0;
}