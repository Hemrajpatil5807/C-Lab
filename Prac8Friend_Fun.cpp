#include<iostream>
using namespace std;

class Distance
{ private:
		int meter;
  public:
		friend int fun(Distance);
};
int fun(Distance d)
{
	d.meter+=6;
	return d.meter;
}
int main()
{
	Distance d;
	cout<<"\nDistance : "<<fun(d);
}