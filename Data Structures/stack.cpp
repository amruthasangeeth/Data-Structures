#include<iostream>

using namespace std;

#define SIZE 50
static int top= -1;

class Stack{
    private: int stk[SIZE];

    public: void push(int element);
                 void pop();
                 void display();
};

void Stack::push(int n){
    if(top==SIZE-1)
        cout<<"Stack overflow"<<endl;
    cout<<"After pushing "<<n<<endl;
    stk[++top]=n;
   // cout<<"Successful push"<<stk[top]<<endl;
}

void Stack::pop(){
    if(top==-1)
        cout<<"Stack underflow"<<endl;
    cout<<"After popping "<<stk[top]<<endl;
    top=top-1;
}

void Stack::display(){
    int i;
    for(i=top;i>=0;i--)
        cout<<stk[i]<<endl;
}

int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.display();
    S.pop();
    S.pop();
    S.display();
    return 0;
}