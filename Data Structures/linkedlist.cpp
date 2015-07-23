//Implementation pf Linked List

#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    node *next;
};

node *head=NULL;

void display(node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}

//Inserting an element at the back

void insert_back(node *head1){
    node *dup=head1;
    
    int b;
    cout<<"Enter the element to be inserted at the back:";
    cin>>b;
    node *new_node;
    new_node=(node *)malloc(sizeof(node));
    new_node->data=b;
     new_node->next=NULL;
    
    while(dup->next!=NULL){
        dup=dup->next;
    }
    dup->next=new_node;
    return;
}

//Inserting at the front

void insert_front(){
    int c;
    cout<<"Enter the element to be inserted at the front: ";
    cin>>c;
    node *new_node=(node *)malloc(sizeof(node));
    new_node->data=c;
    new_node->next=head;
    head=new_node;
    return;
}

//Deleting a node

void delete1(node *head2){
    node *temp=head2;
    node *prev;
    
    int key;
    cout<<"Enter the element to be deleted :";
    cin>>key;
    if(temp!=NULL && temp->data==key){      //When the first element is key                     :((
        head2=temp->next;      
        free(temp);
        return;
    }
    
    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}

void insert_after(node *head3){
    int count=1;
    int pos;
    
    int d;
    node *temp=head3;
    node *prev;
    node *new_node=(node *)malloc(sizeof(node));
   cout<<"To enter the element at the required position, "<<endl;
    cout<<"Enter the postion: ";
    cin>>pos;
    if(pos==1){
    insert_front();
    return;
    }
    
    cout<<"Enter the element to be inserted in position "<<pos<<": ";
    cin>>d;
    new_node->data=d;
    
    for(int i=1;i<=pos;i++){
        prev=temp;
        temp=temp->next;
        count++;
        while(count==pos){
            new_node->next=prev->next;
            prev->next=new_node;
            break;
        }
        
    }
}



int main(){
    
    node *second=NULL;
    node *third=NULL;
    
    head=(node *)malloc(sizeof(node));
    second=(node *)malloc(sizeof(node));
    third=(node *)malloc(sizeof(node));
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    display(head);
    insert_front();
    display(head);
    insert_after(head);
    display(head);
    insert_back(head);
    display(head);
    delete1(head);
    display(head);
    return 0;
}

