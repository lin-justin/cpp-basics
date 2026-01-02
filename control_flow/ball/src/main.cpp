#include "constants.h"
#include <iostream>

double getTowerHeight() {
    std::cout << "enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;

    return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds) {
    const double fallDistance{Constants::gravity * (seconds * seconds) / 2.0};
    const double ballHeight{towerHeight - fallDistance};

    if(ballHeight < 0.0) {
        return 0.0;
    }

    return ballHeight;
}

void printBallHeight(double ballHeight, int seconds) {
    if(ballHeight > 0.0) {
        std::cout << "at " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    }
    else{
        std::cout << "at " << seconds << " seconds, the ball is on the ground\n";
    }
}

void calculateAndPrintBallHeight(double towerHeight, int seconds) {
    const double ballHeight{calculateBallHeight(towerHeight, seconds)};
    printBallHeight(ballHeight, seconds);
}

int main() {
    const double towerHeight{getTowerHeight()};

    int seconds{5};
    for(int second{0}; second <= seconds; ++second) {
        calculateAndPrintBallHeight(towerHeight, second);
    }

    return 0;
}