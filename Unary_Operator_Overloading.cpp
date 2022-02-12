//C++ program to overload unary operators 
//WAP to Positive and Negative complex no.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class operatorOverloading
{       
    private: 
        int x;
        int y;
        
    public:
        void getvalue()
        {
            cout << "Enter two Numbers ";
            cin >> x >> y;
        }

        void operator+()
        {
            x = (+x);
            y = (+y);
        }

        void operator-()
        {
            x = (-x);
            y = (-y);
        }

        void printvalue()
        {
            cout << x << "+ (" << y <<")i\n";
        }
};

int main()
{
    operatorOverloading obj1;
    obj1.getvalue();

    +obj1;// = (+obj1);
    cout << "Postive Complex Number\n";
    obj1.printvalue();

    -obj1;
    cout << "Negative Complex Number\n";
    obj1.printvalue();
    
    return 0;
}
