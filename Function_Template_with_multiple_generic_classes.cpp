#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template <class iDontKnow, class iReallyDontKnow>

iDontKnow sub(iDontKnow a, iReallyDontKnow b)
{
    return a-b;
}

int main()
{
    int a = 5;
    int b = 6;
    int x = sub(a, b);

    cout << x <<'\n';

    return 0;
}
