/*
Write a program that asks the user to enter a number, and then a second number.
The program should tell the user what the result of adding and subtracting
the two numbers is.

The output of the program should match the following:

Enter an integer: 6
Enter another integer: 4
6 + 4 is 10.
6 - 4 is 2.
*/

#include <iostream>

int main() {
    std::cout << "enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;
}