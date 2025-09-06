#include<iostream>

using namespace std;

int main(){

    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> pnp = {1,{6,12}};
    cout<<pnp.first<<" \n"<<pnp.second.first<<" "<<pnp.second.second<<endl;

    //pair array
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].first;
    return 0;

}