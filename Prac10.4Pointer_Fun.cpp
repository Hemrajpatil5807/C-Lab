#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int(*ptr)(int,int);
	ptr=add;
	int sum = ptr(5,6);
	cout<<"\nSum of two Numbers Using Pointer to Function : "<<sum<<endl;
}