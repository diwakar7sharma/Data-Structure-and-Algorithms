#include<bits/stdc++.h>
using namespace std;

int ShortestIncreasingPath(int x,int y){
    return -1;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        cout<<ShortestIncreasingPath(x,y)<<endl;
    }
    return 0;
}