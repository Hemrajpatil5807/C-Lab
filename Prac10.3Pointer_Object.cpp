#include <iostream>
using namespace std;

class Student 
{  
 	public:
 		 string name;
         int age;
     Student(string n, int a):name(n),age(a){
	       }
     void display() 
     {
        cout<<"\nName : "<<name;
        cout<<"\nAge  : "<<age<<endl; 
      }
};

int main() 
{
    Student *ptr;     // Create a pointer to a Student object
    ptr = new Student("Hemraj Patil", 19);   // Dynamically allocate a Student object
    ptr->display();     // Access and manipulate the object using the pointer
     // Update object's attributes
	ptr->name = "Shantanu Patil";  
    ptr->age = 20;
	ptr->display();   // Display updated object
    delete ptr;   // Deallocate memory to avoid memory leaks

    return 0;
}
