#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(NULL));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "WELCOME TO GUESS THE NUMBER GAME!" << endl;
    cout << "TRY TO GUESS THE NUMBER BETWEEN 1 TO 100" << endl;

    do
    {
        cout << "ENTER YOUR GUESS: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "TOO LOW TRY AGAIN" << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "TOO HIGH TRY AGAIN" << endl;
        }
        else
        {
            cout << "CONGRATULATIONS!!!!!! " << endl
                 << "U GUESSED THE NUMBER IN" << "  " << attempts << " ATTEMPTS." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
