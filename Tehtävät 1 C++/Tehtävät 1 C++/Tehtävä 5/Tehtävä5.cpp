#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::cout << "Welcome to the Guessing Game!" << std::endl;

    int lowerBound, upperBound;

    std::cout << "Enter lower bound: ";
    std::cin >> lowerBound;
    std::cout << "Enter upper bound: ";
    std::cin >> upperBound;

    if (std::cin.fail() || lowerBound >= upperBound) {
        std::cout << "Invalid input. Try again." << std::endl;
        return 1;
    }

    srand(time(NULL));
    int randomNumber = lowerBound + rand() % (upperBound - lowerBound + 1);

    int guess;
    int guesses = 0;
    do {
        
        std::cout << "Guess a number between " << lowerBound << " and " << upperBound << ": ";
        std::cin >> guess;
        guesses++;

        if (guess < randomNumber) {
            std::cout << "The number is higher!" << std::endl;
        }
        else if (guess > randomNumber) {
            std::cout << "The number is lower!" << std::endl;
        }

    } while (guess != randomNumber);

    std::cout << "Congratulations! You guessed right!" << std::endl;
    std::cout << "You did it with " << guesses << std::endl;

    return 0;
}
