#include<iostream>

using namespace std;



int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    //pre-compute
    int hash[256]={0};
    for(char i:s){
        hash[i]++;
    }
    int q;
    cout<<"Enter the no. of time you wanna fetch : ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter a character to fetch : ";
        cin>>c;
        cout<<"Number of times this char is present : "<<hash[c]<<endl;
    }
    return 0;
}