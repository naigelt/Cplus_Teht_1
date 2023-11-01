#include <iostream>

int main() {
    std::cout << "Let's play the Chinese number game!" << std::endl;

    while (true) {
        int luku;
        std::cout << "Give a number: ";
        std::cin >> luku;
        std::cout << "I win, my number is " << luku + 1 << "!" << std::endl;
    }

    return 0;
}