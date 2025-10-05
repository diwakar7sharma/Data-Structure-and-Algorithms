#include<iostream>
#include<unordered_set>
using namespace std;

string ChutiyaKatnaSaver(string s){
    unordered_set<char> st = {s.begin(),s.end()};
    if(st.size()%2==0){
        return "CHAT WITH HER!";
    }
    return "IGNORE HIM!";
}

int main(){
    string s;
    cin>>s;
    cout<<ChutiyaKatnaSaver(s);
    return 0;
}