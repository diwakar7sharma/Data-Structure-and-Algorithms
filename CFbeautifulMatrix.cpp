#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    int count=-0;
    while(x!=2 || y!=2){
        if(x<2){
            count++;
            x++;
            continue;
        }
        if(x>2){
            count++;
            x--;
            continue;
        }
        if(y<2){
            y++;
            count++;
            continue;
        }
        if(y>2){
            y--;
            count++;
            continue;
        }
    }
    cout<<count;
    return 0;
}