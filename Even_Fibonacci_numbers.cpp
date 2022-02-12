// Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
// By starting with 1 and 2, the first 10 terms will be:

// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

// By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even-valued terms.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int element1 = 1, element2 = 1, sum = 0, fibo=1;

    cout<<fibo<<'\n';
    for(int i=2;sum<=4000000;i++)
    {
        
        fibo=element1+element2;
        cout<<fibo<<'\n';
        element1=element2;
        element2=fibo;
        if(fibo%2==0)
        sum=sum+fibo;
   
    }
    
    cout << "Sum is: "<<sum;

    return 0;
}