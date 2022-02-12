#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template <class T>
class Tempo
{
    private:
    T var;

    public: 
    T Set(T x)
    {
        var = x;
    }

    int show()
    {
        cout<<var<<'\n';
    }

};

int main()
{
     Tempo<int> tempint;
     tempint.Set(55);

     Tempo<float> tempfloat;
     tempfloat.Set(54.1f);

     tempint.show();
     tempfloat.show();

    return 0;
}
