#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int *ptrX = new int{5555};
    cout << "New Dynamically allocated memory in heap is ptrX = "<<*ptrX <<'\n';
    
    delete ptrX;
    
    return 0;
}
