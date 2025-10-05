#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.substr(0,2)=="++" || s.substr(1,3)=="++"){
            result++;
        }
        else{
            result--;
        }
    }
    cout<<result;
    return 0;
}