#include<iostream>
using namespace std;
int main()
{
	int var=10;
	int *ptr;
	ptr=&var;
	cout<<"\n Value of ptr :"<<ptr;
	cout<<"\n Value of var :" <<var;
	cout<<"\n Value at *ptr :"<<*ptr;
}