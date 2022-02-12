#include<iostream>
#include<string>
//using namespace std;

using std::cout;
using std::cin;
using std::string;

class myclass 
{       
    private: 
        int no;
        string exa;
    public:

        myclass(string x, int y)
        {
            setvalue(x, y);
        }
    
        void setvalue(string x, int y) 
        {
            exa = x;
            no = y;
        }

        void getvalue()
        {
            cout<<no<<'\n'<<exa<<'\n';
        }
    
};

int main()
{
    myclass c("Example text", 100);
    myclass d("Paprapa paa", 69);
    
    c.getvalue();
    d.getvalue();
    return 0;
}


