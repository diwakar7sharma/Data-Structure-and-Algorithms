#include<iostream>

using namespace std;

int main(){
    int n,x=0;
    cout<<"Enter a Number : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            x++;
        }
    }
    cout<<endl;
    if(x>2){
        cout<<"It's not a prime number.";
    }
    else{
        cout<<"It's a prime number!";
    }
    return 0;
}