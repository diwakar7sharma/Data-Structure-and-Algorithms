#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> participants;
    int totalSelected=0;
    for(int i=0;i<n;i++){
        int participant;
        cin>>participant;
        participants.push_back(participant);
    }
    for(int i=0;i<n;i++){
        if(participants[i]>=participants[k-1] && participants[i]>0){
            totalSelected++;
        }
    }
    cout<<totalSelected;
}