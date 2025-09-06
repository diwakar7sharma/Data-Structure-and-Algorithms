#include<iostream>
using namespace std;

//segmentation fault - not able to allocate memory
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    //hash array which stores the frequency of the element
    int hash[13]={0}; //can store the  frequency of 13 elements
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    
    int q;
    cout<<"Enter the number of elements you wanna fetch : ";
    cin>>q;
    while (q--)
    {
        int num;
        cout<<"Enter the element you wanna fetch : ";
        cin>>num;
        cout<<"The frequency of "<<num<<" is ";
        cout<<hash[num]<<endl;
    }
    
    return 0;
}