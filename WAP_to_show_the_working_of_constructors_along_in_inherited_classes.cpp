#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class Parent
{
    public:

    Parent()
    {
        cout << "Inside Parent class\n";
    }
};

class Child : public Parent
{
    public:

    Child()
    {
        cout << "Inside Child class\n";
    }
};

int main()
{
    Child ChilderenClass;

    return 0;
}