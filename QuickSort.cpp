#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int start, int end){
    int pivot = arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[end],arr[i]);
    return i;
}

void quickSort(vector<int> &arr,int start,int end){
    if(start<end){
        int PivIdx = partition(arr,start,end);
        quickSort(arr,start,PivIdx-1);
        quickSort(arr,PivIdx,end);
    }
}

int main(){
    vector<int> arr = {42, 7, 19, 3, 56, 8, 21};
    cout<<"Your array : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    quickSort(arr,0,arr.size()-1);
    cout<<"Sorted Array : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}