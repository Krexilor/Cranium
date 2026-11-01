/* Question 16: Print Odd Numbers
Print all odd numbers from 1 to N.
*/

#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Enter a number greater than 0.\n";
    }
    else {
        for (int i = 1; i <= num; i++) {
            if (i % 2 == 0) {
                continue;           // Ignore even numbers
            }
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
