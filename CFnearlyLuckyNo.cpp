#include<iostream>
using namespace std;
int main(){
    int count = 0;
    long long n;
    cin>>n;
    while(n>0){
        int digit = n%10;
        if(digit == 4 || digit == 7){
            count++;
        }
        n=n/10;
    }
    if(count == 7 || count == 4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}