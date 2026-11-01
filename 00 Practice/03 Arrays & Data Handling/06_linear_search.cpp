/* Question 6: Linear search
Search an array for a number entered by the user. Print the index of its first occurrence, or -1 if it isn't present.
Stop searching once the first occurrence is found.
*/

#include <iostream>

int main() {
    int arr[5] = {25, 34, -9, 54, 0};
    int foundIndex = -1;
    int num;

    std::cout << "Array: ";
    for (int n : arr) {
        std::cout << n << " ";
    }

    std::cout << "\nEnter number to search: ";
    std::cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        std::cout << "\nFound at index " << foundIndex << "\n";
    }
    else {
        std::cout << "\nNot found." << "\n";
    }

    return 0;
}
