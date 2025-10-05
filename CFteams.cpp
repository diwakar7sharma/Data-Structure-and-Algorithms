#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int AbleToSolve=0;
    for(int i=0;i<n;i++){
        vector<int> arr;
        for(int j=0;j<3;j++){
            int input;
            cin>>input;
            arr.push_back(input);
        }
        int count=0;
        for(int num:arr){
            if(num==1){
                count++;
            }
        }
        if(count>=2){
            AbleToSolve++;
        }
    }
    cout<<AbleToSolve;
}