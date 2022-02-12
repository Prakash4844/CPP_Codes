#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class complex
{       
  private: 
    int a,b;
  
  public:
    void setdata(int v1, int v2)
    {
        a=v1;
        b=v2;
    }
    void setdatabysum(complex obj0, complex obj1)
    {
        a = obj0.a + obj1.a;
        b = obj0.b + obj1.b;
    }
    void printdata(int i)
    {
        cout<<"Your Complex no."<<i<<" "<<a<<"+"<<b<<"i\n";
    }
    void printcomplexsum()
        {
            cout<<"Sum of Your Complex no. "<<a<<"+"<<b<<"i\n";
        }

 
};

int main()
{
    complex obj0,obj1,obj2;

    obj0.setdata(2,3);
    obj0.printdata(0);

    obj1.setdata(4,6);
    obj1.printdata(1);
    
    obj2.setdatabysum(obj0, obj1);
    obj2.printcomplexsum();

    return 0;
}
