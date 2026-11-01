/* Question 5: Pointer vs Reference Demonstration
Create two integer variables.
- Create a pointer referencing the first variable.
- Create a reference to the first variable.
- Modify the first variable through both mechanisms.
- Reassign the pointer to the second variable.
- Assign the second variable to the reference.
Print the values and addresses at each stage.

Important: Observe whether assigning a new value to a reference changes what it refers to.
*/

#include <iostream>

int main() {
    int num1 = 100;
    int num2 = 97;

    int* ptr = &num1;  // Pointer points to num1
    int& ref = num1;   // Reference is bound to num1

    *ptr = 35;         // Changes num1 through the pointer
    ref = 99;          // Changes num1 through the reference

    std::cout << "After modifying num1:\n";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << "\n\n";

    ptr = &num2;       // Pointer now points to num2
    ref = num2;        // Copies num2's value into num1; ref still refers to num1

    std::cout << "After ptr = &num2 and ref = num2:\n";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << "\n";
    std::cout << "*ptr = " << *ptr << " (pointer's value)\n";
    std::cout << "ref = " << ref << " (reference's value)\n\n";

    std::cout << "Address of num1: " << &num1 << "\n";
    std::cout << "Address of num2: " << &num2 << "\n";
    std::cout << "Address held by ptr: " << ptr << "\n";
    std::cout << "Address of ref: " << &ref << "\n";

    return 0;
}
