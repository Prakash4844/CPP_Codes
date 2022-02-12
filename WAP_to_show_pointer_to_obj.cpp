#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class employee
{       
  private: 
    int id;
    float salary;
  
  public:
    void getdata(int a, float b)
    {
        id=a;
        salary=b;
    }
    void showdata()
    {
        cout<<"Employee ID: "<<id<<"\nEmployee Salary: "<<salary;
    }

};

int main()
{
    // employee obj1;
    // obj1.getdata(1,10000);
    // obj1.showdata();

//The Above Block of commented code does the same thing as the below code but below code uses Pointers to Object.
    
    employee *eptr;
    eptr = new employee();
    eptr -> getdata(1,10000);
    eptr -> showdata();
    return 0;
}
