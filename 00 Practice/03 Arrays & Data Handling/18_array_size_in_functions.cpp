/* Question 18: Understand array decay in functions
Declare an array of five integers. Print sizeof(arr) in main(), then pass the array to a function that prints sizeof(arr) for its parameter.
Compare the results and explain why the function cannot determine the original array length from that parameter alone.
Pass the size separately and use it to print the elements safely.
When an array is passed to a function, a one-dimensional array parameter such as int arr[] is adjusted to a pointer to its first element. Therefore, sizeof(arr) returns the pointer's size rather than the original array's total size. The function cannot determine the original array's length from that pointer alone.
*/

#include <iostream>

void printArraySize(int arr[]) {
    std::cout << "Size inside function: " << sizeof(arr) << " bytes\n";
}

void printArray(int arr[], int size) {
    std::cout << "Elements: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);     // 5

    std::cout << "Array size from main: " << sizeof(arr) << " bytes\n";
    std::cout << "Size of one element: " << sizeof(arr[0]) << " bytes\n";
    std::cout << "No. of elements: " << size << "\n";
    printArraySize(arr);
    printArray(arr, size);

    return 0;
}
