#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string HelpfulMaths(string s){
    string result="";
    vector<char> arr;
    for(char c:s){
        if(c!='+'){
            arr.push_back(c);
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
        result+=arr[i];
        result+='+';
    }
    result+=arr[arr.size()-1];
    return result;
}

int main(){
    string input;
    cin>>input;
    cout<<HelpfulMaths(input);
    return 0;
}