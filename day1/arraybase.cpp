#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	int i;
	cout<<"enter size"<<endl;
	cin>>n;
	int a[n];
    cout<<"enter elements"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}
}
