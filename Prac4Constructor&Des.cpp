#include<iostream>
using namespace std;
class Constructor
{ private:
         int a,b;
  public:
		Constructor()
		{
			a=10;
			b=20;
			cout<<"\nConstructor is Called";
		}
		
		void display()
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
		
		~Constructor()
		{
			cout<<"\nDestructor is Called";
		}
};
int main ()
{
	Constructor c;
	c.display();
	return 0;
}