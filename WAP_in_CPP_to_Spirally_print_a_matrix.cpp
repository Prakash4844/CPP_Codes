#include<iostream>
//using namespace std;
using std::cout;
using std::cin;



int main()
{
    int rowStart=0, columnStart=0, rowEnd, columnEnd, i, j;
    
    
    // ={   {1,  2,  3}, 
    //      {7,  8,  9}, 
    //      {13, 14, 15} 
    //  }; 

//Getting The order of Matrix
    cout<<"Enter Matrix Order: ";
    cin>>rowEnd>>columnEnd;

    int givenMatrix[rowEnd][columnEnd];
    
//Taking Matrix Input from User.
    for(i=0;i<rowEnd;i++)
    { 
        for(j=0;j<columnEnd;j++)
        { 
            cout<<"Element["<<i<<"]["<<j<<"] : ";
            cin>>givenMatrix[i][j];
        }
    } 
  
//Printing Given Matrix
    cout<<"\nGiven "<<rowEnd<<"X"<<columnEnd<<" Matrix: ";

    for(i=0; i < rowEnd; i++)
    {
        cout<<'\n';

        for(j=0; j < columnEnd; j++ ) 
        {
            cout <<givenMatrix[i][j]<<" ";
        }
    }
//Spiral Print 

    cout<<"\n\nSpiral elements: ";

     while(rowStart<rowEnd && columnStart<columnEnd)
    {
        for(i=columnStart;i<columnEnd;i++)
        {
            cout<<givenMatrix[rowStart][i]<<" ";    
        }
        rowStart++;
        
        for(i=rowStart;i<rowEnd;i++)
        {
            cout<<givenMatrix[i][columnEnd-1]<<" "; 
        }
        columnEnd--;
        
        if(rowStart<rowEnd)
        { 
            for(i=columnEnd-1;i>=columnStart;i--)
            {
                cout<<givenMatrix[rowEnd-1][i]<<" "; 
            }
            rowEnd--;
        }
        
        if(columnStart<columnEnd)
        {
            for(i=rowEnd-1;i>=rowStart;i--)
            {
                cout<<givenMatrix[i][columnStart]<<" "; 
            } 
            columnStart++;
        }
    }
  return 0;  
}


