class Solution {
public:
    Node* copyRandomList(Node* head) {
        //1 create deepcopy of next nodes
        Node* ans=new List(-1);
        Node* trv=ans;
        Node* temp=head;
        while(temp){
            trv->next=new Node(temp->val);
            temp=temp->next;
        }
        Node* cnct=new Node(-1);//2.connect both lists
        Node* a=head;
        Node* b=ans->next;
        trv=cnct;
        while(a&&b){
            trv->next=a;
            a=a->next;
            trv=trv->next;
            trv->next=b;
            b=b->next;
            trv=trv->next;
        }
        a=cnct->next;//3.assign random
        b=a->next;
        while(a){
            if(a->random)b->random=a->random->next;
            a=a->next->next;
            b=a->next;
        }
        a=cnct->next;//4.disconnect ll's
        b=a->next;
        trv=a;
        temp=b;


    }
};
