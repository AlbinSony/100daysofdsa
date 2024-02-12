#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int a=10;
	int *p;
	p=&a;
    printf("using pointer %d %d\n",p,&a);	
	cout<<a<<endl;
	
	return 0;
}
