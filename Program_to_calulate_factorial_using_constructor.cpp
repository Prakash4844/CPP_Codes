#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class myclass 
{       
    private: 
        int n, i, f;
        
    public:
        myclass() //Default constructor
        {
            cout<<"Enter a no. ";
            cin>>n;

            f = 1;
            for(i = 1 ; i <= n ; i++ ) 
            {
                f *= i;
            }

            cout<<"Factorial of "<< n <<"is: "<< f;
        }


        myclass(int n)  //parameterized Constructor
        {
            f = 1;
            for(i = 1 ; i <= n ; i++ ) 
            {
                f *= i;
            }

            cout<<"Factorial of "<< n <<"is: "<< f;
        }
};

int main()
{
    myclass obj1;
    myclass obj2(5);
    return 0;
}
