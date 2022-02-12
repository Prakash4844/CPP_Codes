#include <iostream>
using namespace std;

int main () 
{
    double* pvalue  = NULL; 
    pvalue  = new double;   

    *pvalue = 29494.99;     
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue;        

    return 0;
}