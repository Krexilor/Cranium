/* Question 13: Fibonacci numbers recursively
Write fibonacci(int n) to return the n-th Fibonacci number, using F(0) = 0 and F(1) = 1.
Print the first 10 Fibonacci numbers using a loop that calls your function.
Ensure the base cases are correct. Pay attention to how the function calls itself with smaller inputs.
*/

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
