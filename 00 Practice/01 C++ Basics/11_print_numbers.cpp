/* Question 11: Print Numbers from 1 to N
Ask the user for N and print every integer from 1 to N.
*/

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Enter a number greater than 0.\n";
    }
    else {
        for (int i = 1; i <= n; i++) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
