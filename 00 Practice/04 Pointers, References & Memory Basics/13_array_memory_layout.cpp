/* Question 13: Array Memory Layout Investigation
Create an integer array containing 5 elements.

Display:
- The address of the array.
- The address of its first element.
- The address of every subsequent element.
- The difference between consecutive element addresses.
- The result of pointer subtraction between the first and last elements.
- The value of sizeof() applied to the array and a pointer to its first element.
Finally, explain your observations in comments.
*/

#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    std::cout << "Array: ";
    for (const int& x : arr) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    std::cout << "Address of array: " << &arr << "\n";
    std::cout << "Address of first element: " << &arr[0] << "\n";

    std::cout << "\nAddress of every subsequent element:-\n";
    for (int i = 1; i < 5; i++) {
        std::cout << "Address of element " << arr[i] << ": " << &arr[i] << "\n";
    }

    std::cout << "\nPointer subtraction between first and last element: " << ((ptr + 4) - ptr) << " (elements)\n";

    std::cout << "\nDifference between consecutive element addresses:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << &arr[i + 1] - &arr[i] << "\n";
    }

    std::cout << "\n";
    std::cout << "sizeof() on array: " << sizeof(arr) << "\n";
    std::cout << "sizeof() on pointer to its first element: " << sizeof(ptr) << "\n";

    // The address of the array and the address of its first element
    // have the same numerical address, but different pointer types.

    // Consecutive elements are stored next to each other in memory.

    // Subtracting two pointers within the same array gives the
    // number of elements between them, not the number of bytes.

    // sizeof(arr) gives the total size of the entire array in bytes.

    // sizeof(ptr) gives the size of the pointer itself, not the
    // size of the array it points to.

    return 0;
}
