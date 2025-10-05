#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int dataR){
        data=dataR;
        next=nullptr;
    }
    Node(int dataR,Node* nextR){
        data=dataR;
        next=nextR;
    }
};
Node* convertToLL(vector<int> v){
    Node* head=new Node(v[0]);
    Node* mover=NULL;
    for(int i=1;i<v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void Traverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int> v = {10, 5, 8, 3, 12, 7};
    Node* head = convertToLL(v);
    Traverse(head);
}