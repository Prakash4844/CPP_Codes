
// Encapsulation is a process of combining data members and functions in a single unit called class. 
// This is to prevent the access to the data directly, the access to them is provided through the functions
// of the class. It is one of the popular feature of Object Oriented Programming(OOPs) that helps in data hiding.

#include<iostream>
#include<string>
//using namespace std;
using std::cout;
using std::cin;
using std::string;

class Encapsulation_Example
    {
    private:
        /* data */
        int aNum;
        string exampletext;
    public:

        int getint()
        {
            return aNum;
        }
        string getstring()
        {
            return exampletext;
        }
        
        void set(int aNUM, string exampletext)
        {
            this->aNum=aNUM;
            this->exampletext=exampletext;
        }
    };

int main()
{
    
    Encapsulation_Example encap1;

    int no; 
    string text;
    cout<<"Enter a No followed by a text: ";
    cin >> no;

    //To get a string with spaces in it as user input, 
    //we are using getline fun it takes two parameters first cin and second string var 
    getline(cin, text);
    encap1.set(no, text);
    cout<<"Int: "<<encap1.getint()<<", String: "<< encap1.getstring();
    
    return 0;
}
