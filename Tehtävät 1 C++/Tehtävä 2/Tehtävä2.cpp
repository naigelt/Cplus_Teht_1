#include <iostream>
#include <limits>

int main() {
    std::cout << "Let's play the Chinese number game" << std::endl;

    while (true) {
        int luku;
        std::cout << "Give a number. 0 ends the game: ";
        std::cin >> luku;

        if (luku == 0) {
            std::cout << "Game over, thank you for playing" << std::endl;
            break;
        }
        else {
            std::cout << "I win, mine is " << luku + 1 << "!" << std::endl;
        }
    }

    return 0;
}