#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int x=n;
    int l=0;
    int sum=0;
    while(n!=0){
        n=n/10;
        l++;
    }
    int num = x;
    while(x!=0){
        int temp=x%10;
        sum+=pow(temp,l);
        x=x/10;
    }
    cout<<sum<<endl;
    if(num==sum){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}