#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generateRandomNumber(int lowerBound, int upperBound) {
    return lowerBound + rand() % (upperBound - lowerBound + 1);
}

int getUserGuess(int lowerBound, int upperBound) {
    int guess;
    do {
        cout << "Guess a number between " << lowerBound << " and " << upperBound << ": ";
        cin >> guess;
    } while (guess < lowerBound || guess > upperBound);
    return guess;
}

bool respondToGuess(int guess, int randomNumber) {
    if (guess < randomNumber) {
        cout << "The number is higher!" << endl;
        return false;
    }
    else if (guess > randomNumber) {
        cout << "The number is lower!" << endl;
        return false;
    }
    else {
        cout << "Congratulations! You guessed right!" << endl;
        return true;
    }
}

int main() {
    cout << "Welcome to the Guessing Game!" << endl;

    int lowerBound, upperBound;
    cout << "Enter lower bound: ";
    cin >> lowerBound;
    cout << "Enter upper bound: ";
    cin >> upperBound;

    srand(time(NULL));
    int randomNumber = generateRandomNumber(lowerBound, upperBound);

    int guessCount = 0;
    bool hasGuessedCorrectly;
    do {
        guessCount++;
        int guess = getUserGuess(lowerBound, upperBound);
        hasGuessedCorrectly = respondToGuess(guess, randomNumber);
    } while (!hasGuessedCorrectly);

    cout << "You did it in " << guessCount << " tries! " << endl;
    return 0;
}