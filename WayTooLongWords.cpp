#include<iostream>
#include<vector>

using namespace std;

string abbreviated(string s){
    string result;
    if(s.size()>10){
        int length = s.size()-2;
        result = s[0]+to_string(length)+s[s.size()-1];
    }else{
        return s;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<string> words;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        words.push_back(input);
    }
    for(string i:words){
        cout<<abbreviated(i)<<endl;
    }
    return 0;
}