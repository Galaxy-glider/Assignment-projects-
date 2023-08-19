#include <iostream>
using namespace std;

int main()
{
    int guess;

    while (true)
    {
        cout << "Guess a number between 0 - 31: ";
        cin >> guess;

        if (guess > 0 && guess < 15)
        {
            cout << "##FAILURE##" << endl;
        }

        else if (guess > 15 && guess < 31)
        {
            cout << "#####SUCCESS#####";
            break;
        }
    }
    return 0;
}