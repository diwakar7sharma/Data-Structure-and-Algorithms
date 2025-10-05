#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val1){
        val=val1;
        next=nullptr;
        prev=nullptr;
    }
    Node(int val1,Node* next1,Node* prev1){
        val=val1;
        next=next1;
        prev=prev1;
    }
};

Node* convertToDLL(vector<int> v){
    Node* head= new Node(v[0]);
    Node* prev=head;
    for(int i=1;i<v.size();i++){
        Node* temp=new Node(v[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void Traverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int> v={2,45,23,78,9,10,4,2};
    Node* head=convertToDLL(v);
    Traverse(head);
}