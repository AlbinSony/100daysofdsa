#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle {
	int length;
	int breadth;
};

int main(){
	Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    Rectangle *p=&r;
    cout<<p->breadth<<endl;
    cout<<p->length<<endl;
	
}
