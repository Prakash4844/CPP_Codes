#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int poi = 5;
    int *poipointer = &poi;

    int *popeye = poipointer;

    cout << poipointer<<"\n"; //Poipointer stores the address of poi
    cout << &poi <<"\n";      //& (ampersand/reference operator) before poi meaning the address of poi
    cout << &poipointer<<"\n"; //& (ampersand/reference operator) before poipointer meaning the address of poipointer 
    cout << *poipointer<<"\n"; //* (dereference operator) before poipointer meaning the value of address in poipointer
    cout << popeye<<"\n";   //Poieye stores the address of poipointer
    cout << *popeye<<"\n";  //* (dereference operator) before popeye meaning the value of address in popeye
    cout << &popeye<<"\n";  //& (ampersand/reference operator) before popeye meaning the address of popeye
    return 0;
}
