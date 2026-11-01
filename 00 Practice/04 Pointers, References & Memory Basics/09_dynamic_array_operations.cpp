/* Question 9: Dynamic Array Allocation
Create a program that:
- Asks the user for an array size.
- Dynamically allocates an integer array using new[].
- Accepts values from the user.
- Calculates the sum, average, minimum and maximum.
- Prints the array using pointer arithmetic.
- Releases the allocated memory correctly.

Requirements:
- Handle invalid array sizes.
- Use delete[], not delete.
- Set the pointer to nullptr after deletion.
*/

#include <iostream>

// Calculate and print sum and average
void SumAndAverage(int* ptr, int size) {
    int sum{};

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << static_cast<double>(sum) / size << "\n\n";
}

// Find maximum and minimum
void MaxAndMin(int* ptr, int size) {
    int max = *ptr;
    int min = *ptr;

    for (int i = 0; i < size; i++) {
        int current_val = *(ptr + i);

        if (current_val > max) {
            max = current_val;
        }

        if (current_val < min) {
            min = current_val;
        }
    }

    std::cout << "Maximum: " << max << "\n";
    std::cout << "Minimum: " << min << "\n\n";
}

int main() {
    int arrSize{};

    std::cout << "Enter array size: ";
    std::cin >> arrSize;

    if (!(std::cin >> arrSize) || arrSize <= 0) {
        std::cout << "Invalid array size.";
        return 1;
    }
    else {
        int* arr = new int[arrSize]{};

        for (int i = 0; i < arrSize; i++) {
            std::cout << "Enter arr[" << i << "]: ";
            std::cin >> arr[i];
        }

        std::cout << "\nArray: ";
        for (int i = 0; i < arrSize; i++) {
            std::cout << *(arr + i) << " ";
        }
        std::cout << "\n\n";

        SumAndAverage(arr, arrSize);
        MaxAndMin(arr, arrSize);

        // Free memory
        delete[] arr;
        arr = nullptr;
    }

    return 0;
}
