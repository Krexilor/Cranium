/* Question 1: Create your first reusable functions
Write three functions:

- greet() — prints a greeting using void.
- square(int n) — returns the square of a number.
- isEven(int n) — returns whether a number is even.
Call all three from main() and display the results.
*/

#include <string>
#include <iostream>

// Greet function
void greet(std::string name) {
    std::cout << "Hello " << name << "!\n";
}

// Square function
int square(int n) {
    return n * n;
}

// Check whether a number is even
bool isEven(int n) {
    return n % 2 == 0;
}

// Main function
int main() {
    std::string name = "Aarav";
    int num = 5;

    greet(name);

    int sqResult = square(num);
    std::cout << "Square of " << num << ": " << sqResult << "\n";

    if (isEven(num)) {
        std::cout << num << " is Even\n";
    }
    else {
        std::cout << num << " is Odd\n";
    }

    return 0;
}
