/* Question 1: Pointer Basics
- Declare an integer variable and initialize it with a value.
- Create a pointer that stores its address.
- Print the variable's value, its address, the pointer's stored address and the value accessed through dereferencing.
- Modify the original variable using the pointer.
- Print the updated value using both the original variable and pointer.
*/

#include <iostream>

int main() {
    int num = 10;
    int* ptr = &num;

    std::cout << "Original value: " << num << "\n";
    std::cout << "Address of the variable:" << &num << "\n\n";

    std::cout << "Pointer value: " << *ptr << "\n";
    std::cout << "Address stored in the pointer: " << ptr << "\n\n";

    *ptr = 23;
    std::cout << "Modified original value through pointer: " << *ptr << "\n\n";

    std::cout << "Update value: " << num << "\n";
    std::cout << "Value accessed through the pointer: " << *ptr << "\n";

    return 0;
}
