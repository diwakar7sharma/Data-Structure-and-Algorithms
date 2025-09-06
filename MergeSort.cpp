#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr,int start,int mid,int end){
    vector<int> temp;
    int i=start,j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int x=0;x<temp.size();x++){
        arr[start+x]=temp[x];
    }
}

void mergeSort(vector<int>& arr,int start,int end){
    if(start<end){
        int mid = start+((end-start)/2);
        mergeSort(arr,start,mid); //left half
        mergeSort(arr,mid+1,end); //right half
        merge(arr,start,mid,end); //merger
    }
}


int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Your array : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arr.size()-1);
    cout<<"Sorted Array : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}