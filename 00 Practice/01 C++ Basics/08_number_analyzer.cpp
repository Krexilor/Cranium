/* Question 8: Number Analyzer
Ask the user for an integer. Display whether it is positive, negative, or zero, and whether it is even or odd.
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number (int): ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "Zero is even.\n";
    }
    else {
        bool isEven = (num % 2 == 0);

        if (num > 0) {
            if (isEven) {
                std::cout << num << " is positive and even.\n";
            }
            else {
                std::cout << num << " is positive and odd.\n";
            }
        }
        else {
            if (isEven) {
                std::cout << num << " is negative and even.\n";
            }
            else {
                std::cout << num << " is negative and odd.\n";
            }
        }
    }

    return 0;
}
