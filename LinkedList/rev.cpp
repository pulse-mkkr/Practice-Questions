#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int n){
        val=n;
        next=NULL;
    }
};
class LinkedList{//insert at head/tail/idx ,delete at head/tail/idx,getidx,display
public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int n){
        Node* temp=new Node(n);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int n){
        Node* temp=new Node(n);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAt(int idx,int n){
        if(idx<0||(idx>size-1)){
            cout<<"Invalid index";
            return ;
        }
        if(idx==0){
            insertAtHead(n);
            return;
        }
        else if(idx==size){
            insertAtEnd(n);
            return;
        }
        else{
            Node* insert=new Node(n);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            insert->next=temp->next;
            temp->next=insert;
            size++;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Empty list";
            return;
        }
        else{
            head=head->next;
            size--;
        }
        if(size==0){
            tail=NULL;
        }
    }
    void deleteAtTail(){
        Node* temp =head;
        if(size==0){
            cout<<"Empty list";
            return;
        }
        if(size==1){
            tail=head=NULL;
            size--;
            return;
        }
        else{
            while(temp->next!=tail)temp=temp->next;
            tail=temp;
            tail->next=NULL;
            size--;
        }
    }
    void deleteAt(int idx){
        if(idx<0||(idx>size-1)){
            cout<<"Invalid index";
            return ;
        }
        if(idx==0){
            deleteAtHead();
            return;
        }
        else if(idx==(size-1)){
            deleteAtTail();
            return;
        }
        else{
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    int get(int idx){
        if(idx<0||idx>=size){
            cout<<"Invalid Index Error";
            return 404;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx==(size-1)){
            return tail->val;
        }
        else{
            Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }

};
int main(){
    LinkedList ll;
    ll.insertAtEnd(2);
    ll.insertAtEnd(4);
    ll.insertAtEnd(8);
    ll.display();
    ll.insertAtHead(1);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.insertAtHead(1);
    ll.insertAtEnd(16);
    ll.insertAtEnd(32);
    ll.display();
    ll.deleteAt(4);
    cout<<ll.get(4)<<endl;
    cout<<ll.get(9)<<endl;
    return 0;
}
