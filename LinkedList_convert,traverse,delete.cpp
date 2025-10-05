#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertToLL(vector<int> a){
    Node* head =new Node(a[0]);
    Node* mover = head;
    for(int i=1;i<a.size();i++){
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int countLL(Node* head){
    Node * temp = head;
    int cnt=0;
    //traversal
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
Node* deleteHeadNode(Node* head){
    if(head == NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
void traverseLL(Node* head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* RemoveElementAtK(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        count++;
        if(k==count){
            prev->next=prev->next->next;
            free(temp);
            break;
        };
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* RemoveElement(Node* head,int element){
    if(head==NULL) return head;
    if(head->data==element){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==element){
            prev->next=prev->next->next;
            free(temp);
            break;
        };
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int> a = {4,2,3,4,5,2,7,9,23,78,23};
    Node * head = convertToLL(a);
    cout<<countLL(head)<<endl;
    traverseLL(head);
    head=deleteHeadNode(head);
    cout<<countLL(head)<<endl;
    traverseLL(head);
    head=deleteTail(head);
    traverseLL(head);
    head=RemoveElementAtK(head,2);
    traverseLL(head);
    head=RemoveElement(head,2);
    traverseLL(head);
}