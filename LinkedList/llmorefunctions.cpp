#include<iostream>
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
class LinkedList{
public:    
    Node* head;
    Node* tail;
    int size;
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
        if(idx==0){
            insertAtHead(n);
            return ;
        }
        if(idx==size){
            insertAtEnd(n);
            return;
        }
        Node* temp=new Node(n);
        Node* t=head;
        for(int i=0;i<idx-1;i++){
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;
        size++;
    }
    void display(){
        Node* temp =head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtEnd(80);
    ll.display();
    ll.insertAtEnd(160);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAt(3,25);
    ll.display();
    return 0;
}
