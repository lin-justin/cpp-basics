/*
Complete the program:

getQuantityPhrase() should take a single int parameter representing the quantity
of something and return the following descriptor:

- <0 = "negative"
- 0 = "no"
- 1 = "a single"
- 2 = "a couple of"
- 3 = "a few"
- >3 = "many"

getApplesPluralized() should take a single int parameter representing the quantity
of apples and return the following:

- 1 = "apple"
- otherwise ="apples"

This function should use the conditional operator
*/
#include <iostream>
#include <string>

std::string getQuantityPhrase(int n) {
    if(n < 0) {
        return "negative";
    }
    else if(n == 0) {
        return "no";
    }
    else if(n == 1) {
        return "a single";
    }
    else if(n == 2) {
        return "a couple of";
    }
    else if(n == 3) {
        return "a few";
    }
    else {
        return "many";
    }
}

std::string getApplesPluralized(int n) {
    return (n == 1) ? "apple" : "apples";
}

int main() {
    constexpr int maryApples{3};
    std::cout << "mary has " << getQuantityPhrase(maryApples) << " " << getApplesPluralized(maryApples) << '\n';

    std::cout << "how many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "you have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << '\n';

    return 0;
}