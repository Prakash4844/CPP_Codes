//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
//The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int n;
    const int limit = 1000;
    int sum = 0;

    for(n=0; n<limit;n++)
    {
        if(n%3==0 || n%5==0)
        {
            sum=sum+n;
            cout<< n <<" \n";
        }
    }

    cout<<sum;
    

    return 0;
}
