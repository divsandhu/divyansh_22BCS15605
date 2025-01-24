#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }

};
Node* insertNodeAtFirst(Node* head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    return newNode;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(10);
    insertNodeAtFirst(head,20);
    printLL(head);
    return 0;
}