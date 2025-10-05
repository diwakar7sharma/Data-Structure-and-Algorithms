#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int PetyaStrings(string a,string b){
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
            return 1;
        }
        if(a[i]<b[i]){
            return -1;
        }
    }
    return 0;
}

int main(){
    string input1,input2;
    cin>>input1;
    cin>>input2;
    for(int i=0;i<input1.size();i++){
        input1[i]=tolower(input1[i]);
        input2[i]=tolower(input2[i]);
    }
    cout<<PetyaStrings(input1,input2);
    return 0;
}