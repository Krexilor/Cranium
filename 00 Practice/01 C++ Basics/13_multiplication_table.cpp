/* Question 13: Multiplication Table
Ask for a number and print its multiplication table from 1 to 10.
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "The number must be positive.\n";
    }
    else {
        for (int i = 1; i <= 10; i++) {
            std::cout << num << " x " << i << " = " << i * num << "\n";
        }
        std::cout << "\n";
    }

    return 0;
}
