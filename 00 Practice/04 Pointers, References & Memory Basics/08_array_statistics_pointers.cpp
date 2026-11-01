/* Question 8: Array Statistics Using Functions and Pointers
Create an array of 10 integers.

Implement separate functions:
- calculateSum()
- calculateAverage()
- findMinimum()
- findMaximum()
Each function should accept a pointer to the first element and the array size.

Restriction: Do not use array indexing. Access elements using pointer arithmetic.
*/

#include <iostream>

// Calculate sum
int calculateSum(int* ptr, int size) {
    int sum{};

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

// Calculate average
double calculateAverage(int* ptr, int size) {
    int sum{};

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    double average = static_cast<double>(sum) / size;

    return average;
}

// Find minimum
int findMinimum(int* ptr, int size) {
    int min = *ptr;

    for (int i = 0; i < size; i++) {
        int current_val = *(ptr + i);

        if (current_val < min) {
            min = current_val;
        }
    }

    return min;
}

// Find maximum
int findMaximum(int* ptr, int size) {
    int max = *ptr;

    for (int i = 0; i < size; i++) {
        int current_val = *(ptr + i);

        if (current_val > max) {
            max = current_val;
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << "\n\n";

    std::cout << "Sum: " << calculateSum(arr, size) << "\n";
    std::cout << "Average: " << calculateAverage(arr, size) << "\n";
    std::cout << "Minimum: " << findMinimum(arr, size) << "\n";
    std::cout << "Maximum: " << findMaximum(arr, size) << "\n";

    return 0;
}
