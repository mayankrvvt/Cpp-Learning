#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {

    int secretNumber;
    int guess;
    int attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "\n===== NUMBER GUESSING GAME =====\n";
    cout << "I have selected a number between 1 and 100.\n";

    while (true) {

        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too high!";
        }
        else if (guess < secretNumber) {
            cout << "Too low!";
        }
        else {
            cout << "\n Correct!\n";
            cout << "You guessed it in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {

    char choice;

    do {

        playGame();

        cout << "\nPlay again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing!\n";

    return 0;
}