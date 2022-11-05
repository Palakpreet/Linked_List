#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int k){
        this->data=k;
        this->next=NULL;//this one not needs to be done
    }
};
void insertathead(Node*&n,Node*&t,int k){
    Node*temp=new Node(k);
    temp->next=n;
    //n->next=temp;
    n=temp;
    t->next=n;
    
}
void printlist(Node*n){
    cout<<n->data<<" ";
    Node*temp=n->next;
    while(temp!=n){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head=new Node(10);
    Node *tail=head;
    insertathead(head,tail,3);
     insertathead(head,tail,7);
    printlist(head);
    
}
