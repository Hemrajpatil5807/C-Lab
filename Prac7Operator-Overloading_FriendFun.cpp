#include<iostream>
using namespace std;

class Complex
{
	  int real,imag;
	public:
	    Complex()	
	    {
	    	real=0;
	    	imag=0;
		}
		Complex(int r,int i)
		{
			real=r;
			imag=i;
		}
		void display()
		{
			cout<<"\n  "<<real<<"+"<<imag<<"i";
		}
     
	   friend Complex operator +(Complex,Complex);		
};
     Complex operator +(Complex,Complex);
  int main()   
  {
  	Complex c1(5,2),c2(7,3),c3;
  	c3=c1+c2;
  	
  	cout<<"\nFirst Complex Number is ";
  	c1.display();
  	cout<<"\nSecond Complex Number is ";
  	c2.display();
  	cout<<"\nAddition is ";
  	c3.display();
  }
  
  Complex operator +(Complex a, Complex b)
  {
  	Complex t;
  	t.real = a.real + b.real;
  	t.imag = a.imag + b.imag;
  	return t;
  }





