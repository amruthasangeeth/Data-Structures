#include<iostream>

using namespace std;

int main(){
    int i, j, temp, k;
    int a[5]={5,2,9,6,1};
    cout<<"Before sorting: "<<endl;
    for(k=0; k<5; k++)
        cout<<a[k]<<"  ";
    cout<<endl;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"The sorted order is: "<<endl;
    for(k=0; k<5; k++)
        cout<<a[k]<<"  ";
    cout<<endl;
    return 0;
}