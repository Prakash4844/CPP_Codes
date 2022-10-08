#include<iostream>
#include<cstdlib>
#include<ctime>
//using namespace std;
using std::cout;
using std::cin;

int game(int Random);


int main()
{
    srand(time(0));
    
    int randomNo = (rand()%100)+1;
    cout<<"Random No. Generated between 1 to 100";

    game(randomNo);

    return 0;
}

int game(int Random)
{
    int attemptCount;

    int userGuess = 0;

    for(attemptCount = 1 ; userGuess != Random  ; attemptCount++) 
    {
        cout << "Enter You guess between 1 to 100: ";
        cin >> userGuess;

        if (userGuess>Random)
        {
            //attemptCount++;
            cout << "\n\nYour Guess is too Large, try a Smaller no.\n";

        }
        else if(userGuess<Random)
        {
            //attemptCount++;
            cout << "Your Guess is too Small, try a Larger no.\n";
        }
        else if(userGuess == Random)
        {
            //attemptCount++;
            break;
        }
    }
    cout<< "Congratulations, You have guessed the no. in "<< attemptCount <<" attempts.";


}