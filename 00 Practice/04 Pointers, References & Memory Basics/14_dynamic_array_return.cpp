/* Question 14: Function Returning Dynamically Allocated Memory
Write a function: int* createArray(int size);

The function should:
- Dynamically allocate an integer array.
- Initialize its elements.
- Return the pointer to the calling function.
In main():
- Receive the returned pointer.
- Display the array.
- Calculate its sum.
- Release the allocated memory.
Also explain why returning a pointer to a locally declared normal array would be unsafe.
*/

#include <iostream>

int* createArray(int size) {
    int* arr = new int[size]{};

    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    return arr;
}

int main() {
    int size{};

    std::cout << "Enter the array size (1-10): ";

    if (!(std::cin >> size) || (size <= 0) || (size > 10)) {
        std::cout << "\nEnter a valid number from 1 to 10.\n";
    }
    else {
        int* arr = createArray(size);
        int sum{};

        std::cout << "\nInitialized array with elements multiple of 10.";
        std::cout << "\nArray: ";
        for (int i = 0; i < size; i++) {
            std::cout << *(arr + i) << " ";
            sum += *(arr + i);
        }

        std::cout << "\n\nSum of elements: " << sum << "\n";

        delete[] arr;
        arr = nullptr;
    }

    // The local array's lifetime ends when its function returns, so the pointer
    // would refer to an object that no longer exists (dangling pointer). Here, new[] allocates the
    // array dynamically, so it remains valid until the caller uses delete[].

    return 0;
}
