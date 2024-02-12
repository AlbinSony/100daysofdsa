#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle{
	int lenght;
	int breadth;
};

int main(){
 struct Rectangle r1={10,5};
 r1.lenght=20;
 r1.breadth=15;
 cout<<r1.lenght<<endl;
 cout<<r1.breadth<<endl;
 };	

