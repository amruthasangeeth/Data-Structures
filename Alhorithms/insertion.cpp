#include<iostream>
using namespace std;

int main(){
int a[5]={4,6 ,9,1,3};
int i, j, temp;
for(int k=0; k<5; k++)
	cout<<a[k]<<"  ";
for(i=1; i<5; i++){
	for(j=i; j>0; j--){
		if(a[j] < a[j-1]){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
		else
			break;
	}	
  }

cout<<"The sorted order is: "<<endl;
for(int k=0; k<5; k++)
	cout<<a[k]<<"  ";
return 0;
}