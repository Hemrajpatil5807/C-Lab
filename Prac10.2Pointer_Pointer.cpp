#include <iostream>
using namespace std;
int main() 
{
    int x = 42;
    int *ptr1 = &x; 
    int **ptr2 = &ptr1; 
    cout<<"\nValue of X using pointer to pointer: "<<**ptr2<<endl;
    **ptr2 = 99;

    cout<<"\nModified value of X : "<<**ptr2<<endl;

    return 0;
}
