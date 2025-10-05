#include<iostream>
using namespace std;

int SublimeSequence(int x,int n){
    if(n%2==0){
        return 0;
    }
    return x;
}

int main(){
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int x,n;
        cin>>x>>n;
        cout<<SublimeSequence(x,n)<<endl;
    }
}