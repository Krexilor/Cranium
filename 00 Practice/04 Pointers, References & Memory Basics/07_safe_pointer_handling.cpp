/* Question 7: Safe Pointer Handling
Create a program that:
- Declares a pointer initialized to nullptr.
- Checks whether it is valid before dereferencing.
- Dynamically allocates an integer after receiving user input.
- Displays its value.
- Releases the allocated memory.
- Sets the pointer back to nullptr.
- Checks its state again.
Also demonstrate why an uninitialized pointer should never be dereferenced.
Explain the issue in comments rather than deliberately executing undefined behavior.
*/

#include <iostream>

int main() {
    // Declare and intialized to nullptr
    int* ptr = nullptr;
    
    // Check ptr for dereferencing use
    if (ptr != nullptr) {
        std::cout << "Valid pointer\n";
    }
    else {
        std::cout << "Invalid pointer\n";
    }

    // Take user input
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Dynamically allocates input to ptr
    ptr = new int(num);

    // Display result after pointer check
    std::cout << "You entered: " << *ptr << "\n";

    // Free memory and assign ptr to nullptr
    delete ptr;
    ptr = nullptr;

    // Check ptr for dereferencing use
    if (ptr != nullptr) {
        std::cout << "Valid pointer\n";
    }
    else {
        std::cout << "Invalid pointer\n";
    }

    // An uninitialized pointer has an indeterminate value. Dereferencing it
    // can cause undefined behavior, so initialize pointers before using them.

    return 0;
}
