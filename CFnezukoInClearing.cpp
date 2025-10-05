#include<iostream>
using namespace std;

int minSteps(int h,int d){
    int consCount = 1;
    int steps=0;
    while(d>0){
        if((h-consCount)>=1){
            h-=consCount;
            consCount++;
            d--;
            steps++;
        }
        else{
            h++;
            consCount=1;
            steps++;
        }
    }
    return steps;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int height,distance;
        cin>>height>>distance;
        cout<<minSteps(height,distance)<<endl;
    }
}