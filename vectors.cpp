#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1); //inserts the element at the back of the vector
    v.emplace_back(2); // inserts the element 
    cout<<v[1]<<" ";

    vector<pair<int,int>> vec;

    vec.push_back({1,2}); //inserting a pair
    //vec.emplace_back(1,2); //direct insertion without curly braces
    cout<<vec[0].first<<" ";
    cout<<vec[0].second<<endl;

    vector<int> v1(7,23); // v1(repeation of elements, element)
    int size = v1.size();
    //accessing the values using simple for loop
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //accessing using iterators
    vector<int>::iterator it = v.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    auto i = v.end(); //auto - automatically decides datatype acc. to data
    cout<<*i<<endl;

    //accessing using at
    cout<<v.at(1)<<endl;
    //access the last element in the vector
    cout<<v.back()<<endl; 

    //erase
    vector<int> vec1 = {10,20,30,40,50};
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    vec1.erase(vec1.begin());
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    vec1.erase(vec1.begin(),vec1.begin()+3); // erase(start,end)
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;

    //Insert Fuction
    vec1.insert(vec1.begin()+1,15); // insert(location, element)
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    vec1.insert(vec1.begin(),2,10); // insert(location, times the element, element)
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> c = {1,2,3,4,5};
    vec1.insert(vec1.begin(),c.begin(),c.end()); // insert(location, anotha vector location from , to)
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //size function - returns the size of the vector
    cout<<vec1.size()<<endl;

    //pop_back - removes the element from the last of a vector
    vec1.pop_back();
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;

    //swap function - swaps the entire vector with another
    c.swap(vec1);
    for(auto i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear - erases the whole vector
    vec1.clear();
    cout<<vec1.size()<<endl;

    //empty function - checks if the vector is empty or not
    cout<<c.empty(); //0 if not empty and 1 if empty

    return 0;

}