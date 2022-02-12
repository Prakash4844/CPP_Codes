#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int size{};

    cout << "Enter array size ";
    cin >> size;

    int *myArray = new int[size];

    for(int i{0} ; i < size; i++)
    {
        cout <<"Enter the value of Array["<< i << "] ";
        cin >> myArray[i];
    }

    for(int i{0} ; i < size; i++)
    {
        cout <<"Array["<< i << "] " << myArray[i] << '\n';
    }

    delete[]myArray;
    myArray = NULL;
    
    return 0;
}
