/* Question 14: Find the sum of digits recursively
Write sumDigits(int n) that returns the sum of the digits of a non-negative integer using recursion.
Examples: sumDigits(472) returns 13, and sumDigits(9) returns 9.
Hint: use % 10 to obtain the last digit and / 10 to remove it. Include a base case for when the remaining number reaches zero.
*/

#include <iostream>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Sum of " << num << ": " << sumDigits(num) << "\n";

    return 0;
}
