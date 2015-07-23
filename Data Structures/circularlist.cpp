#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    node *next;
};


void display(node *head){
   node *dup=head;
    while(head!=NULL){
        do{
            cout<<dup->data;
            dup=dup->next;
        }while(dup!=head);
    }
    cout<<"hai";
}


void push(node *head){
    node *new_node=(node *)malloc(sizeof(node));
    node *temp=head;
    int a;
    cout<<"Enter the new element :";
    cin>>a;
    new_node->data=a;
    new_node->next=head;
    
    if(head!=NULL){                                   //If the list is not null
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    
    new_node->next=new_node;                //If there is only one node
    head=new_node;
    cout<<new_node->data<<endl;
    cout<<head->data;
}

int main(){
    node *head=NULL;
    push(head);
    push(head);
    display(head);
    
    return 0;
}