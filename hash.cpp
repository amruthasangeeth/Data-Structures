#include<iostream>
#include<stdlib.h>

static int SIZE=10;

class HashEntry{
    private: int key;
                  int value;
                
    public: HashEntry(int key, int value){
        this->key=key;
        this->value=value;
    }
    int getKey(){
        return key;
    }
    int getValue(){
        return value;
    }
};



class Hash{
    private: Hash **table;

    public:
        int input(int key);
        void output();
        Hash(){
        table=new HashEntry*[SIZE];
        for(int i=0;i<SIZE;i++)
            table[i]=NULL;
       }
};

int Hash::input(int key1){
    int hash=key1%SIZE;
    while(table[hash]!=NULL && getKey()!=key1){
        hash=(hash+1)%SIZE;
    }
    if(table[hash]==NULL)
        return -1;
    return table[hash]->getValue();
}

int main(){
    Hash H;
    H.input(10);
    return 0;
}