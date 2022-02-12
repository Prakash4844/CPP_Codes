#include<iostream>
#include<cstdlib>
#include<ctime>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    srand(time(0));
    
    for(int i = 0 ; i < 25 ; i++ ) 
    {
        cout<< (rand()%6)+1<<" ";
    }
    return 0;
}



