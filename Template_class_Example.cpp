#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template <class T>  //Template defining one Generic class T
class myclass 
{       
    private: 
        T fNo1, fNo2;   //generic type variables
        
    public:

        myclass(T v1, T v2) //constructor taking generic parameters
        {
            fNo1 = v1;
            fNo2 = v2;
        }

        T add();    //generic type member Function
    
};

template <class T> //Template Re-defining one Generic class T. I don't know why

T myclass<T>::add()
{
    return(fNo1+fNo2);
}

int main()
{
    myclass <int> obj1(400, 900);   //instansiating class with template type - explicitly setting it to int

    cout << obj1.add() <<'\n';

    return 0;
}

