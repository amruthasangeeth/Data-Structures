#include<iostream>
using namespace std;

int main(){
    int a[5]={3, 5, 1, 7,2};
    int i, j, k, temp, min, loc;
    
    cout<<"Before sorting:"<<endl;
    for(k=0;k<5; k++)
        cout<<a[k]<<endl;
    
    for(i=0; i<4; i++){
      min=a[i];
      loc=i;
      for(j=i+1; j<5; j++){
         if(min>a[j]){
             min=a[j];
             loc=j;
         }
      }
      temp=a[i];
      a[i]=a[loc];
      a[loc]=temp;
    }
    
    cout<<"After sorting:"<<endl;
    for(k=0;k<5; k++)
        cout<<a[k]<<endl;
    return 0;
}