/* Question 2: Simple Calculator
Store two numbers in variables. Print their sum, difference, product, and quotient.
*/

#include <iostream>

int main() {
    float num1 = 5;         // Declaring and assigning first variable
    float num2 = 8;         // Declaring and assigning second variable

    std::cout << "\n===== Simple Calculator =====\n";
    std::cout << "First number: " << num1 << "\n";
    std::cout << "Second number: " << num2 << "\n";
    std::cout << "\n";
    std::cout << "Arithmetic operations:\n";
    std::cout << "Sum: " << num1 + num2 << "\n";
    std::cout << "Difference: " << num1 - num2 << "\n";
    std::cout << "Product: " << num1 * num2 << "\n";
    std::cout << "Quotient: " << num1 / num2 << "\n";

    return 0;
}
