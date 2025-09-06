#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v={2,1,23,90,2,56,7,15,89,90,72,13,15,17,89};
    cout<<"Your Array : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Algo
    int n=v.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && v[j-1]>v[j])
        {
            int temp=v[j-1];
            v[j-1]=v[j];
            v[j]=temp;
            j--;
        }
        
    }


    cout<<"Sorted Array : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}