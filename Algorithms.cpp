#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//comp defination - comp is used to sort in a custom way
bool comp(int a,int b){
    if(a%2 == 0 && b%2 != 0 ) return true;
    if(a%2 != 0 && b%2 == 0 ) return false;
    return a<b;
}

int main(){
    vector<int> v = {2,3,5,1,89,5,3,2,5,7,8,3,2,6,4,9};
    cout<<v.size()<<endl;
    
    // sort - sorts the whole DS
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();

    //sort desecending
    sort(v.begin(),v.end(),greater<int>()); //sort(start,end,comparator)
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //custom sort through comparator
    sort(v.begin(),v.end(),comp);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //builtin_popcount() - counts the bits in a number
    int n = 13;
    cout<<"The number of Bits in the Given Number : "<<__builtin_popcount(n)<<endl;
    long x = 45;
    cout<<"The number of Bits in the Given Number : "<<__builtin_popcount(x)<<endl;
    long long l = 15298339322212;
    cout<<"The number of Bits in the Given Number : "<<__builtin_popcountll(l)<<endl; // for long long we use __builtin_popcountll(x);

    //next_permutation - checks the number of permutations possible for an element which is combinations irl
    string s = "123";
    int count = 0;
    do{
        count++;
    }while(next_permutation(s.begin(),s.end()));
    cout<<"Number of permuatations for \""<<s<<"\" is "<<count<<endl; // numbers can get astronomically large with bigger strings

    //max_element - returns the max element
    cout<<*max_element(v.begin(),v.end());
    
}
