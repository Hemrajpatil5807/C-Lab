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
class B
{ protected:
	    int y;
  public:
      void setY(int a)
      {
      	y=a;
	  }
};
class C
{ protected:
	    int z;
  public:
       void setZ(int a)	    
       {
       	 z=a;
	   }
};
class D:public A,public B, public C
{
	public:
		void display()
		{
			cout<<"\nX = "<<x;
			cout<<"\nY = "<<y;
			cout<<"\nZ = "<<z;
		}
		void add()
		{
			cout<<"\nAddition of X,Y,& Z = "<<x+y+z;
		}
};

int main()
{
	D obj;
	obj.setX(10);
	obj.setY(20);
	obj.setZ(30);
	obj.display();
	obj.add();
}







