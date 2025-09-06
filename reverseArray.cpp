#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reverse recursion - using swapping
    for(int i=0;i<n/2;i++){
            int temp = arr[n-1-i];
            cout<<arr[i]<<" "<<temp<<" to ";
            arr[n-1-i]=arr[i];
            arr[i]=temp;
            cout<<arr[i]<<" "<<arr[n-1-i]<<endl;
        }
    
    cout<<"Your reversed array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}