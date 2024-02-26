//pass by value
/*#include<iostream>

using namespace std;

int add(int a,int b){
	int c;
	c=a+b;
	
	return c;
}

int main(){
	int n1=10;
	int n2=15;
	int sum;
	sum=add(n1,n2);
	cout<<"sum is"<<sum;
	return 0;
}*/

//pass by address
#include<iostream>

using namespace std;

void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
 int main(){
 	int n1=10;
 	int n2=15;
 	cout<<n1;
	cout<<n2;
 	swap(&n1,&n2);
 	cout<<"first number"<<n1<<endl;
 	cout<<"second number"<<n2<<endl;
 }

