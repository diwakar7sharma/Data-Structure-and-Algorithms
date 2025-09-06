#include<iostream>
#include<vector>
//Complexity O(N^2)
using namespace std;

int main(){
    vector<int> vec = {2,1,23,90,2,56,7,15,89,90,72,13,15,17,89};
    cout<<"Your Array : ";
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    
    int n=vec.size();
    //Bubble Sort Algo
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }

    //Sorted Array 
    cout<<"Here's you sorted Array : ";
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}