#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int numArray[5]; 


    cout << "Enter 5 value for Array: \n";
    for (int &n : numArray) 
    {
        cin >> n;
    }
    
    cout << "Printing value for Array: \n";
    for (int n : numArray) 
    {
        cout << n <<"\n";
    }
    
    return 0;
}
