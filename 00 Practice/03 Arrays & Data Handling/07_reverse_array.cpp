/* Question 7: Reverse an array in place
Reverse an array without creating a second array. Use two indices, one starting at
the beginning and one at the end, and swap their elements as they move toward the middle.
*/

#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int start = 0, end = 4, temp;

    std::cout << "Original Array: ";
    for (int n : arr) {
        std::cout << n << " ";
    }

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    std::cout << "\nReversed Array: ";
    for (int n : arr) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
