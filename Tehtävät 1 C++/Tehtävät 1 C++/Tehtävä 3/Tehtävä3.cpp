#include <iostream>
#include <limits>
#include <climits> 

int main() {
    std::cout << "Let's play the Chinese nurmbers game!" << std::endl;

    while (true) {
        int num;
        std::cout << "Give a number. Number 0 ends the game: ";
        std::cin >> num;

       
        if (num == 0) {
            std::cout << "Game over, thanks for playing!" << std::endl;
            break;
        }

        
        if (num == INT_MAX) {
            std::cout << "It is a tie, you gave the biggest number" << std::endl;
            continue;  
        
        }
        else {
            std::cout << "I win, mine number is " << num + 1 << "!" << std::endl;
        }
    }

    return 0;
}