/* Question 3: Build a calculator using functions
Create separate functions for addition, subtraction, multiplication, and division. Ask the user to choose an operation and enter two numbers.

Requirements:
- Call the appropriate function based on the choice.
- Return the result from each calculation function.
- Prevent division by zero.
- Display a message for an invalid operation.
*/

#include <iostream>

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

int main() {
    float a = 0, b = 0;
    float result;
    char choice;

    do {
        std::cout << "===== Simple Calculator =====\n\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n\n";
        std::cout << "0. To quit\n\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= '1' && choice <= '4') {
            std::cout << "\nEnter first number: ";
            std::cin >> a;

            std::cout << "Enter second number: ";
            std::cin >> b;
        }

        switch (choice) {
            case '1':
                result = addition(a, b);
                std::cout << "Addition of " << a << " & " << b << " is: " << result << "\n\n";
                break;
            case '2':
                result = subtraction(a, b);
                std::cout << "Subtraction of " << a << " & " << b << " is: " << result << "\n\n";
                break;
            case '3':
                result = multiplication(a, b);
                std::cout << "Multiplication of " << a << " & " << b << " is: " << result << "\n\n";
                break;
            case '4':
                if (b == 0) {
                    std::cout << "Error: Division by zero is not allowed.\n\n";
                }
                else {
                    result = division(a, b);
                    std::cout << "Division of " << a << " & " << b << " is: " << result << "\n\n";
                }

                break;
            case '0':
                std::cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a number from 1 to 4, or 0 to quit.\n\n";
                break;
        }
    } while (choice != '0');

    return 0;
}
