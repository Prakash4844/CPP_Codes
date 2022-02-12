#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int Area(int a)
{
    cout<<"Area function Called!\n";
}

int Area(int a, int b)
{
    cout<<"Area function Called! with 2 Parameters\n";
}


int main()
{
    int side,length,breath,choice;

    cout<<"Enter The Value in this order side length breath: ";
    cin>>side>>length>>breath>>choice;


    
    switch(choice) 
    {
      case 1:
         Area(side);
        break;

      case 2:
      Area(length, breath);
        break;
        
    }
   
    
    return 0;
}
