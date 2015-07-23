#include<iostream>

#define MAX 50

using namespace std;

class Queue{
    private: int queue[MAX];
                  int rear;
                  int front;
                  int element;
                  
    public: Queue(): front(-1), rear(-1){
        for(int j=0;j<=MAX;j++)
            queue[j]=0;
    }
                void insert(int element );
                 void drop();
                 void display();
};

void Queue::insert(int element){
    if (rear==MAX-1){                                                                                 //((front==0 && rear==MAX-1) || (front==rear+1)){
        cout<<"Buffer Overflow!!!"<<endl;
    }
    else{
        if(front==-1){
            front=rear=0;
            queue[rear]=element;
        }
        else{
            rear=rear+1;
            queue[rear]=element;
        }
        //cout<<queue[rear]<<endl;
    }
  
}

void Queue::drop(){
    if(front==-1 && rear==-1)
        cout<<"Buffer Underflow!!!"<<endl;
    else{
        if(front==0 && rear==0)
            front=rear=-1;
        else{
            queue[front]=0;
            front=front+1;
        }
    }
}

void Queue::display(){
    for(int i=front; i<=rear; i++)
        cout<<queue[i]<<endl;
    
}

int main(){
    
    Queue Q;
    Q.insert(10);
    Q.insert(20);
    Q.insert(30);
    Q.insert(40);
    Q.display();
    Q.drop();
    cout<<"After dropping front element.."<<endl;
    Q.display();
    return 0;
}