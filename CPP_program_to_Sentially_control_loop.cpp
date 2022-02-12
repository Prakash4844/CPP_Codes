#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int age, agetotal= 0; 
    int noofPeople = 0;

    cout<<"Enter First person's age or enter -1 to Exit: ";
    cin>>age;

    while(age!=-1)
    {
        agetotal += age;
        noofPeople++;

        cout<<"Enter Next person's age or enter -1 to Exit: \n";
        cin>>age;
    }

    cout<<"No. of person whose age is entered: "<<noofPeople<<"\n";
    cout<<"Avarage Age of everyone: "<< agetotal/noofPeople<<"\n";
    
    return 0;
}