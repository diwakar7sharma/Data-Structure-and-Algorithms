#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct Point{int x,y;};
int cross(const Point& O,const Point& A,const Point& B){
    return (A.x-O.x)*(B.y-O.y)-(A.y-O.y)*(B.x-O.x);
}
double dist(const Point& a,const Point& b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(){
    int N;
    cin>>N;
    vector<Point> pts;
    for(int i=0;i<N;i++){
        int x,y;cin>>x>>y;
        bool found=false;
        for(int j=0;j<pts.size();j++)
            if(pts[j].x==x&&pts[j].y==y) found=true;
        if(!found) pts.push_back({x,y});
    }
    sort(pts.begin(),pts.end(),[](const Point&a,const Point&b){
        return a.x<b.x||(a.x==b.x&&a.y<b.y);
    });
    vector<Point> lower;
    for(int i=0;i<pts.size();i++){
        while(lower.size()>=2&&cross(lower[lower.size()-2],lower[lower.size()-1],pts[i])<=0)
            lower.pop_back();
        lower.push_back(pts[i]);
    }
    double perimeter=0;
    for(int i=1;i<lower.size();i++)
        perimeter+=dist(lower[i-1],lower[i]);
    cout<<int(round(perimeter))<<endl;
    return 0;
}