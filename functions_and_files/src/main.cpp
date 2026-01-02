/*
Write a program that reads two separate integers from the user, adds them
together, and then outputs the answer.

In io.cpp:
- A function namned "readNumber" should be used to get (and return) a single
 integer from the user
- A function named "writeAnswer" should be used to output the answer. This
 function should take a single parameter and have no return value

In main.cpp:
- Call the functions from io.cpp
*/
#include "io.h"

int main() {
    int x{getNumber()};
    int y{getNumber()};

    writeAnswer(x + y);

    return 0;
}