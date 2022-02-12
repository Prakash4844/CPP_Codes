#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template <class T>  //Template defining one Generic class T
class myclass 
{       
        
    public:

        myclass(T v1) //constructor taking generic parameters
        {
            cout<<"A No. was Passed\n";
        }
    
};


template <> //Empty Template 

class myclass <char> //template specilization with char type
{
    public:

    myclass(char v1) //constructor taking char parameters
        {
            cout<<"A Character was Passed\n";
        }
    
};

int main()
{
    myclass <int> obj1(400);   //instansiating class with template type - explicitly setting it to int
    myclass <char> obj('F');    //instansiating class with template type - explicitly setting it to char

    return 0;
}

