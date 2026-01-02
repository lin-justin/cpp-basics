#include "random.h"
#include <iostream>

bool playHiLo(int min, int max, int guesses) {
    std::cout << "let's play a game. i'm thinking of a number between "
              << min
              << " and "
              << max
              << ". you have "
              << guesses
              << " tries to guess what it is.\n";

    const int number{Random::get(min, max)};

    for(int count{1}; count <= guesses; ++count) {
        std::cout << "guess #" << count << ": ";

        int guess{};
        std::cin >> guess;

        if(guess > number) {
            std::cout << "your guess is too high\n";
        }
        else if(guess < number) {
            std::cout << "your guess is too low\n";
        }
        else {
            std::cout << "correct, you win\n";
            return true;
        }
    }

    std::cout << "you lose. the correct number was " << number << '\n';
    return false;
}

bool playAgain() {
    while(true) {
        std::cout << "play again (y/n)? ";
        char ch{};
        std::cin >> ch;

        switch(ch) {
            case 'y': return true;
            case 'n': return false;
        }
    }
}

int main() {
    constexpr int guesses{7};
    constexpr int min{1};
    constexpr int max{100};

    do {
        playHiLo(min, max, guesses);
    } while(playAgain());

    std::cout << "thanks for playing\n";

    return 0;
}

