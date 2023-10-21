#include<iostream>
using namespace std;

int divide(int a, int b)
{
    if(b == 0) 
	{
        throw "Division by zero is not allowed!";
    }
    return a/b;
}

int main() 
{
    int numerator, denominator;

    cout<<"\nEnter the numerator: ";
    cin>>numerator;

    cout<<"\nEnter the denominator: ";
    cin>>denominator;

    try{
        int result = divide(numerator, denominator);
        cout<<"\nDivision = "<<result;
    } catch (const char* error) {
        cout<<"Error : "<<error<<endl;
    }

    return 0;
}
