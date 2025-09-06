#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> vec(n);
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        for(int j=0;j<size;j++){
            int input;
            cin>>input;
            vec[i].push_back(input);
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<vec[a][b]<<endl;
    }
    return 0;
}
