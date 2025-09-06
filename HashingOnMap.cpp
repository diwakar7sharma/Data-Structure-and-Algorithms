#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    map<int,int> mpp = {};

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    cout<<"Map : "<<endl;
    for(auto i:mpp){
        cout<<i.first<<" --> "<<i.second<<endl;
    }

    return 0;
}