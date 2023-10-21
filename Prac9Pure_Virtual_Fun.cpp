#include<iostream>
using namespace std;
class Shape
{
	protected:
		double dim1,dim2;
	public:
		Shape(double a,double b)
		{
			dim1=a;
			dim2=b;
		}
	 virtual void area()=0;
};
class Rectangle:public Shape
{	public:
        Rectangle(double a,double b):Shape(a,b)
		{
		    }
		void area()
		{
			cout<<"\nArea of Rectangle = "<<(dim1*dim2)<<endl;
		}
};
class Triangle:public Shape
{   public:
	     Triangle(double a,double b):Shape(a,b)
		 {
		    }
		 void area()
		 {
		 	cout<<"\nArea of Triangle = "<<(0.5*dim1*dim2)<<endl;
		 }
};

int main()
{
	Shape *s;
	s=new Rectangle(10,9);
	s->area();
	
	s=new Triangle(8,10);
	s->area();
}