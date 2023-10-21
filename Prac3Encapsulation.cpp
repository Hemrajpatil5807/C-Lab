#include<iostream>
using namespace std;

class Student
{ private:
	      char name[30];
          int roll;
	      int marks;
  public:
		void read()
		{
			cout<<"\n Enter the Name, Roll_No & Marks of Student : ";
			cin>>name>>roll>>marks;
		}
		void display()
		{
			cout<<"\n Name    : "<<name;
			cout<<"\n Roll No : "<<roll;
			cout<<"\n Marks   : "<<marks;
			
		}
};
int main()
{
  Student s;
  s.read();
  s.display();
  return 0;	
}