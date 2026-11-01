/* Question 12: Sum of Numbers from 1 to N
Calculate 1 + 2 + 3 + ... + N using a loop.
*/

#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter the number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Enter a number greater than 0.\n";
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        std::cout << "Sum of numbers from 1 to " << n << " is " << sum << "\n";
    }

    return 0;
}
