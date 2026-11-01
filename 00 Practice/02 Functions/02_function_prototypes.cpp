/* Question 2: Function declarations and definitions
Write a program that declares add(), subtract(), and multiply() before main(), but defines them after main().
Ask the user for two numbers, call each function, and display all three results. Use appropriate return types.
*/

#include <iostream>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

// Main function
int main() {
    int a, b, result;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    result = add(a, b);
    std::cout << "Addition of " << a << " & " << b << " is: " << result << "\n";

    result = subtract(a, b);
    std::cout << "Subtraction of " << a << " & " << b << " is: " << result << "\n";

    result = multiply(a, b);
    std::cout << "Multiplication of " << a << " & " << b << " is: " << result << "\n";

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}
