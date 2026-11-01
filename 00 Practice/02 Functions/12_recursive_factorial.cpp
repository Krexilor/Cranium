/* Question 12: Calculate a factorial recursively
Write factorial(int n) using recursion to calculate n!.
For example, factorial(5) should return 120.
Include a base case and a recursive case. Decide how your function will handle negative inputs,
since factorial is not defined for negative integers.
*/

#include <iostream>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    if (n < 0) {
        return -1;
    }

    return n * factorial(n - 1);
}

int main() {
    int num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    std::cout << "\nFactorial of " << num << ": " << factorial(num) << "\n";

    return 0;
}
