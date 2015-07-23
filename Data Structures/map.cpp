#include<iostream>
#include<string>
#include<map>
#include<stdlib.h>

using namespace std;

int main(){
    map<string, int>student;
    map<string, int>::iterator it;
    student["aiswarya"]=1;
    student["anup"]=2;
    student["amrutha"]=3;
    student.insert(pair<string, int>("appu", 4));
    student.insert(pair<string, int>("ashwin", 5));
    student.insert(pair<string, int>("athira",6));
    for(it=student.begin();it!=student.end();it++)
        cout<<(*it ).first<<"  "<<(*it).second<<endl;
    cout<<endl;
    return 0;
}
