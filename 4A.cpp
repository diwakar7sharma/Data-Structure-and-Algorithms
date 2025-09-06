#include<iostream>

using namespace std;

string isEvenWeight(int n){
    if(n%2==0){
        int x=n/2;
        int y=n/2;
        if(x%2==0){
            return "YES";
        }
        
    }
    return "NO";
}

int main(){
    int n;
    cin>>n;
    cout<<isEvenWeight(n);
}