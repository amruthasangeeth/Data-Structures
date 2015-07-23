#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

void display(node *);
void reverse(node *);

int main(){
    node *one=new node;
    node *two=new node;
    node *three=new node;
    node *four=new node;
    node *five=new node;
    
    one->data=1;
    one->next=two;
    node *head=one;
    
    two->data=2;
    two->next=three;
    
    three->data=3;
    three->next=four;
    
    four->data=4;
    four->next=five;
    
    five->data=5;
    five->next=NULL;
    
    display(head);
    reverse(head);
    
    return 0;
    
}



void display(node *temp){
    while(temp!=NULL){
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
    cout<<endl;
}


void reverse(node *head1){
    node *second=head1->next;
    node *third=second->next;
    second->next=head1;
    head1->next=NULL;
    
    node *current=third;
    node *previous=second;
    
    
    while(current!=NULL){
        node *nextnode=current->next;
        current->next=previous;
        
        previous=current;
        current=nextnode;
        
    }
    head1=previous;
    display(head1);
    
  
}