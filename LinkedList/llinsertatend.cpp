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
    cout<<ll.size;
    return 0;
}
