/* Question 16: Explore array memory
Declare an array of five integers. Print the address of the array's first element and the address of each subsequent element.
Also print sizeof(array) and sizeof(array[0]), then calculate the number of elements using their ratio.
*/

#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Array: ";
    for (int x : arr) {
        std::cout << x << " ";
    }

    std::cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Address of arr[" << i << "]: " << &arr[i] << "\n";
    }

    std::cout << "\n";
    std::cout << "Size of array: " << sizeof(arr) << "\n";
    std::cout << "Size of one element: " << sizeof(arr[0]) << "\n";
    std::cout << "No. of elements in array: " << sizeof(arr) / sizeof(arr[0]) << "\n";

    return 0;
}
