/* Question 9: Pass an array to a function
Write a function printArray(int arr[], int size) that prints all elements. Call it from main() using an array of your choice.
The size is passed separately because an array parameter is adjusted to a pointer, so sizeof(arr) does not return the original array's size.
Explain in a comment why the size is passed separately.
*/

#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array: ";
    printArray(arr, size);
    std::cout << std::endl;

    return 0;
}
