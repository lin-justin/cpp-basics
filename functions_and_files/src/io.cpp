#include "io.h"
#include <iostream>

int getNumber() {
    std::cout << "enter an integer: ";
    int num{};
    std::cin >> num;

    return num;
}

void writeAnswer(int num) {
    std::cout << "the answer is: " << num << '\n';
}