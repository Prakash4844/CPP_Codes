// C++ program to show the order of constructor calls in Multiple Inheritance

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class myclass1
{       
    private: 
        int pC1;
        
    public:
        myclass1(int p1)
        {
            int pMF1 = p1;
            cout << p1;
            cout << "\nInside base class's parameterised constructor \n";
        }
    
};

class myclass2:public myclass1
{       
    private: 
        int pC2;
        
    public: 
        myclass2(int p2): myclass1(p2)
        {
            int pMF2 = p2;
            cout << p2;
            cout << "\nInside sub class's parameterised constructor";
        }
    
};

int main()
{
    myclass2 objmyclass(155);
    return 0;
}
