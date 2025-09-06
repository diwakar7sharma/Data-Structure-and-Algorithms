#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        arr[i]=i;
    }
    for(int i=0;i<a;i++){
        cout<<fib(arr[i])<<" ";
    }
}