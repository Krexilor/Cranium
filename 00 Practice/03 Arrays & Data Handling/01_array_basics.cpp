/* Question 1: Declare, initialize, and print an array
Declare an integer array containing five numbers. Print all elements in order using a for loop,
then print them using a range-based for loop.
*/

#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Traditional for loop: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << "\nRange-based for loop: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
