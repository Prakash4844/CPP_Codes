#include<iostream>
#include<fstream>
//using namespace std;
using std::cout;
using std::cin;
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::ios;

void readfile(fstream &obj);
void updatecontent(fstream &obj);

int main()
{   
    
    /*------------This Block make a file and Writes some content in a file---------------------*/
    //Creating a file and Writing a string into it.
    fstream obj("Random Access.txt", ios::in | ios::out );
    //obj.open("Random Access.txt", ios::in | ios::out);

    obj << "My name is Prakash!";

    //tell where file pointer is 
    cout<< "File pointer at: "<< obj.tellp() << "\n\n";

    readfile(obj);
    getchar();

    updatecontent(obj);
    getchar();
    readfile(obj);

    obj.close();

    // /*------------This Block read content From Previously created file---------------------*/
    // //Creating a file and Reading a string into it.
    // ifstream obj1("Random Access.txt");
    // cout<<"File pointer at: "<<obj1.tellg() << '\n';

    // while(!obj1.eof())
    // {
    //     obj1.get(c); //To get each char from file .

    //     if(obj1.eof())  //Condition so The Last char isn't printed twice
    //     {
    //         break;
    //     }

    //     cout<<c;   //Printig Contents of file.
    // }
    // cout<<'\n';

    // obj1.close();


    // /*------------This Block Update the content of Previously created file via Random access---------------------*/
    // ofstream obj3("Random Access.txt");
    // cout<<"File pointer at: "<< obj3.tellp() << "\n\n";
    
    // //Decrementing file pointer from the end of string to before "Prakash"
    // obj3.seekp(11, ios::end);
    // cout<< "File pointer at: "<< obj3.tellp() << "\n\n";

    // obj3<<"Zaphkill!"; //Updating The contents of File

    // obj3.close();

    // readfile();

    // /*------------This Block read Updated content From Previously created file---------------------*/
    // ifstream obj2("Random Access.txt");
    // cout<<"File pointer at: "<<obj2.tellg() << '\n';

    // while(!obj2.eof())
    // {
    //     obj2.get(c); //To get each char from file .

    //     if(obj2.eof())  //Condition so The Last char isn't printed twice
    //     {
    //         break;
    //     }

    //     cout<<c;   //Printig Contents of file.
    // }
    // cout<<'\n';

    // getchar();
    // obj2.close();


//Closing the file
    //obj.close();
    //obj1.close();
    getchar();
    return 0;
}

void readfile(fstream &obj)
{
    /*------------This Block read content From Previously created file---------------------*/
    //Creating a file and Reading a string into it.
    //ifstream obj1("Random Access.txt");
    

    obj.seekg(0, ios::beg);
    cout<<"File Pointer set to Begining of File\n";
    cout<<"File pointer at: "<<obj.tellg() << "\n\n";
    getchar();

    char c;

    while(!obj.eof())
    {
        obj.get(c); //To get each char from file .

        if(obj.eof())  //Condition so The Last char isn't printed twice
        {
            break;
        }

        cout<<c;   //Printing Contents of file.
    }
    cout<<"\n\n";

    getchar();

    cout<<"\n\n";
    obj.seekg(obj.tellg(), ios::beg);

    //obj1.close();
}


void updatecontent(fstream &obj)
{
    
    cout<<"File pointer at: "<< obj.tellp() << "\n\n";
    getchar();
    //Decrementing file pointer from the end of string to before "Prakash"
    obj.seekp(11, ios::beg);

    cout<<"File pointer at: "<< obj.tellp() << "\n\n";
    getchar();

    cout<< "File pointer at: "<< obj.tellp() << "\n\n";
    getchar();

    obj<<"Zaphkill!";
    cout<<"Updated File contents via random access";
}