#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *p;
	p=new int[5];
	p[0]=1;		

	p[1]=12;

	p[2]=31;

	p[3]=89;

	p[4]=65;

	
	for(int i=0;i<5;i++){
		cout<<p[i]<<endl;
	}
	
	delete []p;
}
