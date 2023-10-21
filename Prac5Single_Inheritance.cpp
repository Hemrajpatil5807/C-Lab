#include<iostream>
using namespace std;

class A
{ protected:
	  int x;
  public:
  	   void setX(int a)
  	   {
  	   	  x=a;
		 }
};
class B:public A
{
	   int y;
   public:
   	   void setY(int a)
   	   {
   	   	   y=a;
		  }
	   void display()	  
	   {
	   	  cout<<"\nX = "<<x;
	   	  cout<<"\nY = "<<y;
	   }
	   void add()
	   {
	   	 cout<<"\nAddition of X and Y = "<<x+y;
	   }
};

int main()
{
	B obj;
	obj.setX(10);
	obj.setY(20);
	obj.display();
	obj.add();
}


