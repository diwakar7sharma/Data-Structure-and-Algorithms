#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

//original same as reverse 
using namespace std;

int main(){
    string s;
    cout<<"Enter a String : ";
    cin>>s;
    // transform(s.begin(),s.end(),s.begin(),::tolower); //to get lowercase value 
    string x=s;
    cout<<"Your string : "<<s<<endl;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        char temp = s.at(n-1-i);
        s[n-1-i] = s.at(i);
        s[i] = temp;
    }
    cout<<"Reverse String : "<<s<<endl;
    if(x == s){
        cout<<"It's a palindrome.";
    }
    else{
        cout<<"It's not.";
    }
}