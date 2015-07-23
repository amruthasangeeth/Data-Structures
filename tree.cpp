#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int key;
  node* left;
  node* right;
};

class Tree{
  private: node* root;
  public: void insert(int);
          void insert(int, node*);
	  void display();
	  //node* search(int, node*);
	  void destroy();
          node* check(int);
};

void Tree::insert(int nkey, node* leaf){
  if(nkey < leaf->key){
  if(leaf->left!=NULL)
    insert(nkey, leaf->left);
  else{
    leaf->left=new node;
    leaf->left->key=nkey;
    leaf->left->left=NULL;
    leaf->left->right=NULL;
    cout<<leaf->left->key<<endl;
  }
  }
  
  else if(nkey >= leaf->key){
    if(leaf->right!=NULL)
      insert(nkey, leaf->right);
    else{
      leaf->right=new node;
      leaf->right->key=nkey;
      leaf->right->left=NULL;
      leaf->right->right=NULL;
      cout<<leaf->right->key<<endl;
    }
  }
}

void Tree::insert(int nkey){
  if(root!=NULL)
    insert(nkey, root);
    else{
      node* root=(node *)malloc(sizeof(node));
      root->key=nkey;
      root->left=NULL;
      root->right=NULL;
    
  }
}

node* search(int nkey, node *temp){
    if(temp!=NULL){
        if(temp->key==nkey){
            cout<<temp->key<<" in "<<nkey<<endl;
            return temp;
        }
        if(nkey < temp->key)
            return search(nkey, temp->left);
        else if(nkey > temp->key)
            return search(nkey,temp->right);
    }
    else return NULL;
    
}

node* Tree::check(int x){
    node *temp=root;
    cout<<temp->key<<endl;
    search(x, temp);
    
}

int main(){
  Tree T;
  T.insert(10);
  T.insert(20);
  T.insert(5);
  T.check(20);
  T.check(15);
  return 0;
}