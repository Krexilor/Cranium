/* Question 4: Pointer Arithmetic on Arrays
Create an integer array containing 8 elements.
- Traverse the array using pointer arithmetic.
- Print all elements without using array indexing inside the traversal loop.
- Calculate the sum and average.
- Find the largest element.
Restriction: Use *(ptr + i) to access elements.
*/

#include <iostream>

void ptrArithmetic(int* ptr, int size) {
    int sum = 0;            // Stores sum of all elements
    int max_val = *ptr;     // Stores largest element

    // Traversing through array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        // Calculating sum by adding every element
        sum += *(ptr + i);

        // Finding largest element through comparison
        int current_val = *(ptr + i);
        
        if (current_val > max_val) {
            max_val = current_val;
        }
    }

    // Printing result
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << static_cast<double>(sum) / size << "\n";
    std::cout << "Largest: " << max_val << "\n";
}

int main() {
    int arr[8] = {10, 23, 34, 54, 34, 99, 26, 78};
    int* ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);     // Calculate size of array

    std::cout << "Array: ";
    for (int i = 0; i < 8; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << "\n\n";

    ptrArithmetic(ptr, size);

    return 0;
}
