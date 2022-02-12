// Wap_to_show_Runtime_polymorphism

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class Base 
{    
    public:
    int bc;

    void show()
    {
        cout<<"Base Class! \n"<<"BC: "<<bc<<"\n\n";
    }
};
class Derived: public Base
{       
    public:
    int dc;

    void show()
    {
        cout<<"Base Class!\n";
        cout<<"Derived Class!\n";
        cout<<"bc: "<<bc<<"\n"<<"dc: "<<dc<<"\n\n";
    } 
};
int main()
{
    Base *bptr;         //Pointer of type Base(Class)
    Base base;          //Object(base) of type Base(Class)
    bptr = &base;       //Pointer of type Base(Class) pointing to address of base Object
    bptr->bc=100;       //Pointer Accessing DataMember of Base Class
    bptr->show();       //Pointer Accessing MemberFunction of Base Class

    Derived derived;    //Object of Type Derived(Class)
    bptr = &derived;    //bptr pointing to the address of obj derived of Derived(Class)
    bptr->bc=1000;      //bptr Accessing the DataMember of base class
   // bptr->dc=4000;    //ERROR!                                            -------------------------|
                            //bptr Trying to access DataMember of Drerived Class,                    |===> Doesn't Work!
                            // Even if bptr is pointing to the address of Obj of Type Derived(Class) |
                            // But it can't access it Due to bptr being of type Base(Class) ---------|
    bptr->show();       //Pointer Accessing MemberFunction of Base Class

    Derived *dptr;      //Pointer of type Derived(Class)
    dptr = &derived;    //Pointer of type Derived(Class) pointing to address of derived Object which was declared previously on line 38
    dptr->dc=5000;      //Pointer Accessing DataMember of Derived Class
    dptr->show();       //Pointer Accessing MemberFunction of Derived Class

    return 0;
}
