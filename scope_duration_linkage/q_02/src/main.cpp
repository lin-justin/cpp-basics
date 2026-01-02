/*
Write a file named constants.h that makes the following program run.
If your compiler is C++17 capable, use an inline constexpr variable.
Otherwise, use a normal constexpr variable.
maxClassSize should have a value of 35
*/
#include "constants.h"
#include <iostream>

int main() {
    std::cout << "how many students are in your class? ";
    int students{};
    std::cin >> students;

    if(students > Constants::maxClassSize) {
        std::cout << "there are too many students in this class\n";
    }
    else {
        std::cout << "this class isn't too large\n";
    }

    return 0;
}