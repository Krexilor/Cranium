/* Question 7: Modify a variable using a pointer parameter
Write increment(int* ptr) to increase the value pointed to by ptr.
Call it using the address of an integer variable, then display the updated value.
Also handle a nullptr safely by checking the pointer before dereferencing it.
*/

#include <iostream>

void increment(int* ptr) {
    if (ptr == nullptr) {
        std::cout << "Invalid pointer!\n";
        return;
    }

    *ptr += 1;
}

int main() {
    int value = 5;

    increment(&value);
    std::cout << "Updated value: " << value << "\n";

    increment(nullptr);     // Tests the safety check

    return 0;
}
