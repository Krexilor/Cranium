/* Question 6: Pointer to Pointer
Create three levels of indirection:
- An integer variable.
- A pointer to that integer.
- A pointer to the previous pointer.
Print the integer value using all three access paths.

Then modify the original integer through the double pointer.
*/

#include <iostream>

int main() {
    int num = 100;
    int* ptr = &num;
    int** pptr = &ptr;

    std::cout << "Values from all indirections:-\n";
    std::cout << "num = " << num << "\n";
    std::cout << "*ptr = " << *ptr << "\n";
    std::cout << "**pptr = " << **pptr << "\n\n";

    **pptr = 9999;
    std::cout << "Values from all indirections after **pptr = 9999:-\n";
    std::cout << "num = " << num << "\n";
    std::cout << "*ptr = " << *ptr << "\n";
    std::cout << "**pptr = " << **pptr << "\n";

    return 0;
}
