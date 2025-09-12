#include<iostream>
using namespace std;

long long MaxEvenSum(int a,int b){
    int maxSum=-1;
    for(int i=0;i<=(a*b)*100;i++){
        if(i%b==0){
            int x=a;
            int y=b;
            x*=a;
            y/=b;
            if((x+y)%2==0){
                maxSum=max(maxSum,(x+y));
            }
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        int a,b;
        cin>>a>>b;
        cout<<MaxEvenSum(a,b);
        n--;
    }
    return 0;
}