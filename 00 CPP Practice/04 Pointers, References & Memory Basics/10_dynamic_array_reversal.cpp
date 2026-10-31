/* Question 10: Dynamic Array reversal
Dynamically allocate an array based on the user's input.
- Populate it with user-provided values.
- Reverse the array in place.
- Do not create a second array.
- Print the original and reversed arrangements.
- Free the allocated memory.

Restriction: Use two pointers, one starting at the beginning and another at the end.
*/

#include <iostream>

void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter arr[" << i << "]: ";
        std::cin >> arr[i];
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
}

void reverseArray(int* arr, int size) {
    int* left = arr;
    int* right = (arr + size) - 1;

    while (left < right) {
        int temp = *left;

        *left = *right;
        *right = temp;

        ++left;
        --right;
    }
}

int main() {
    int arrSize{};

    std::cout << "Enter array size: ";
    std::cin >> arrSize;

    if (arrSize <= 0) {
        std::cout << "Invalid array size";
    }
    else {
        int* arr = new int[arrSize]{};

        inputArray(arr, arrSize);

        std::cout << "\nOriginal array: ";
        printArray(arr, arrSize);
        std::cout << "\n";

        std::cout << "\nReversed array: ";
        reverseArray(arr, arrSize);
        printArray(arr, arrSize);
        std::cout << "\n";

        delete[] arr;
        arr = nullptr;
    }

    return 0;
}
