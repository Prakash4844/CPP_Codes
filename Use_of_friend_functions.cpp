//Write a program to show the use of friend functions.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class myclass 
{       
    private: 
        int x;
        
    public:
        friend void printm();
    
};

void printm()
{
    cout<<"\ninside Friend function\n";
    myclass obj1;
    cout<< "Friend Function can access Class's data member directly without being a member function of the class\n";
    obj1.x = 155;
    cout<< "Class's private data member = "<< obj1.x <<'\n';
}

int main()
{
    cout<<"Inside main";
    printm();
    
    return 0;
}
