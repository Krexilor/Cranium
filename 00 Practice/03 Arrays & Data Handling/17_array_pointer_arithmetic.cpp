/* Question 17: Array indexing vs pointer arithmetic
Declare an array of five integers and a pointer to its first element.
Print every element twice: first using arr[i], then using *(ptr + i).
Verify that the results match. Also print *ptr and *(ptr + 1).
*/

#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    std::cout << "Array: ";
    for (int x : arr) {
        std::cout << x << " ";
    }

    std::cout << "\n\n";
    std::cout << "Elements printed using arr[i]:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index [" << i << "]: " << arr[i] << "\n";
    }

    std::cout << "\nElements printed using *(ptr + i):\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index [" << i << "]: " << *(ptr + i) << "\n";
    }

    std::cout << "\n*ptr: " << *ptr << "\n*(ptr + 1): " << *(ptr + 1) << "\n";

    return 0;
}
