/* Question 15: Compare iteration and recursion
Write two functions that calculate the sum of integers from 1 to N:
- sumIterative(int n) uses a loop.
- sumRecursive(int n) uses recursion.
Call both with the same input and display both results. Make sure they agree and handle the base case.
Iteration often uses less memory because it avoids repeated function calls. Recursion can make problems easier to express when they naturally break into smaller versions of the same problem.
and explain in a comment one advantage of iteration and one advantage of recursion.
*/

#include <iostream>

int sumIterative(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int sumRecursive(int n) {
    if (n <= 0) {
        return 0;
    }

    return n + sumRecursive(n - 1);
}

int main() {
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Iterative sum from 1 to " << num << ": " << sumIterative(num) << "\n";
    std::cout << "Recursive sum from 1 to " << num << ": " << sumRecursive(num) << "\n";
    return 0;
}
