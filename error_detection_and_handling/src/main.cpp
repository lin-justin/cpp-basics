#include "random.h"
#include <ios>
#include <limits>
#include <iostream>

int getGuess(int count, int min, int max) {
    while(true) {
        std::cout << "guess #" << count << ": ";

        int guess{};
        std::cin >> guess;

        bool success{std::cin};
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(!success || guess < min || guess > max) {
            continue;
        }

        return guess;
    }
}

bool playHiLo(int guesses, int min, int max) {
    std::cout << "let's play a game. i'm thinking of a number between "
              << min
              << " and "
              << max
              << ". you have "
              << guesses
              << " tries to guess what it is\n";

    int number{Random::get(min, max)};

    for(int count{1}; count <= guesses; ++count) {
        int guess{getGuess(count, min, max)};
        if(guess > number) {
            std::cout << "your guess is too high\n";
        }
        else if(guess < number) {
            std::cout << "your guess is too low\n";
        }
        else{
            std::cout << "correct. you win\n";
            return true;
        }
    }

    std::cout << "you lost. the correct number was " << number << '\n';
    return false;
}

bool playAgain() {
    while(true) {
        std::cout << "play again (y/n)? ";
        char ch{};
        std::cin >> ch;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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
        playHiLo(guesses, min, max);
    } while(playAgain());

    std::cout << "thanks for playing\n";
    return 0;
}