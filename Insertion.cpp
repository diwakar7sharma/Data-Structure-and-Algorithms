#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v={2,1,23,90,2,56,7,15,89,90,72,13,15,17,89};
    cout<<"Your Array : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Algo
    
    cout<<"Sorted Array : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}