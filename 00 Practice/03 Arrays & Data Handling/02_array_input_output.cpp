/* Question 2: Take input and display elements
Create an array that stores five integers entered by the user. Print the values in the same order they were entered.
*/

#include <iostream>

int main() {
    int arr[5] = {};

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter index " << "[" << i << "]" << ": ";
        std::cin >> arr[i];
    }

    std::cout << "\nArray: ";

    for (int n : arr) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
