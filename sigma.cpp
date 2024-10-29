#include <iostream>
#include <string>
#include <array>
#include <vector>
    
using namespace std;

int main() {
	int guesses = 0;
    int NumberToGuess = rand() % 1000;
    string guess;

    bool continueGame = true;
    while (continueGame) {
        cout << "Guess number between 1-1000:  " << endl;
        cin >> guess;
        int guessInt = stoi(guess);

        if (guessInt == NumberToGuess) {
            cout << "Congratulations! You guessed the correct number." << endl;
			cout << "It took you " << guesses << " guesses." << endl;
			cout << "Do you want to play again? (y/n)" << endl;
			string playAgain;
			cin  >> playAgain;
            if (playAgain == "y") {
                NumberToGuess = rand() % 1000;

           
			}
            else if (playAgain == "n") {
                cout << "Thank you for playing!" << endl;
                continueGame = false;
            }





        } else if (guessInt > NumberToGuess) {
            cout << "Too high, try again" << endl;
			guesses++;
        } else if (guessInt < NumberToGuess) {
            cout << "Too low, try again" << endl;
			guesses++;
        } else {
            cout << "Invalid input, try again" << endl;
        }
    }
}
