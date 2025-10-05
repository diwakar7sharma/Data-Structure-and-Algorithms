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
    Node* mover=head;
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

Node* InsertHead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}
Node* InsertTail(Node* head,int val){
    if(head==NULL) return new Node(val);
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= new Node(val);
    return head;
}

Node* InsertAtK(Node* head,int k,int val){
    if(head==NULL && k==1) return new Node(val);
    if(k==1){
        return new Node(val,head);
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k-1){
            Node* node=new Node(val,temp->next);
            temp->next=node;
            return head;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int> v = {10, 5, 8, 3, 12, 7};
    Node* head = convertToLL(v);
    Traverse(head);
    head=InsertHead(head,18);
    Traverse(head);
    InsertTail(head,90);
    Traverse(head);
    head=InsertAtK(head,3,69);
    Traverse(head);
}