// C++ program to demonstrate function overriding
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;


class Base 
{
    public:
    void print() 
    {
        cout << "Base Member Function\n";
    }
};

class Derived : public Base 
{
    public:
    void print() 
    {
        cout << "Derived Member Function\n";
    }
};

int main() 
{
    Derived derived1;
    derived1.print(); //Member function print() being overidden;

    Base base1;
    base1.print();   //Member function print() not being overidden;

    derived1.Base::print();     //Accessing Base Class's Print by Derived Class;
    return 0;
}
