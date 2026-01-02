/*
Write the following program:
The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols:
+, -, *, or /.
The program computes the answer on the two numbers the user entered and prints
the result. If the user enters an invalid symbol, the program should print
nothing.
*/
#include <iostream>

double getValue() {
    std::cout << "enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char getOperator() {
    std::cout << "enter +, -, *, or /: ";
    char op{};
    std::cin >> op;

    return op;
}

void printAnswer(double x, char op, double y) {
    switch(op) {
        case '+':
            std::cout << x << " + " << y << " is " << x + y << '\n';
            break;
        case '-':
            std::cout << x << " - " << y << " is " << x - y << '\n';
            break;
        case '*':
            std::cout << x << " * " << y << " is " << x * y << '\n';
            break;
        case '/':
            std::cout << x << " / " << y << " is " << x / y << '\n';
            break;
        default:
            std::cout << "";
            break;
    }
}

int main() {
    double x{getValue()};
    double y{getValue()};

    char op{getOperator()};

    printAnswer(x, op, y);

    return 0;
}