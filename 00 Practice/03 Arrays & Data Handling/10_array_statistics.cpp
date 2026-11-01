/* Question 10: Calculate statistics using functions
Write separate functions to calculate the sum, maximum, and minimum of an integer array.
Pass the array and its size to each function. Test all three using the same array.
*/

#include <iostream>

int sumArray(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int maxArray(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minArray(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    std::cout << "Sum: " << sumArray(arr, size) << "\n";
    std::cout << "Max: " << maxArray(arr, size) << "\n";
    std::cout << "Min: " << minArray(arr, size) << "\n";

    return 0;
}
