#include<unordered_set>
#include<iostream>
//Basically a set without sorting
using namespace std;

int main(){
    unordered_set<int> st;
    // lower and upper bound functions doesn't work here
    // Rest all the functions are same as set
    // Does not store in any order that's why it has a better time complexity than set in most cases(except for collision)
}