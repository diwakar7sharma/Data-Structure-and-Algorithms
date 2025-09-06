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
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        int temp=v[i];
        v[i]=v[min];
        v[min]=temp;
    }

    cout<<"Sorted Array : ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}