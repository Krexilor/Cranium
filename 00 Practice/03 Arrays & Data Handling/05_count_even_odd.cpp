/* Question 5: Count even and odd numbers
Read 10 integers into an array. Count how many are even and how many are odd.
Remember that zero is even.
*/

#include <iostream>

int main() {
    int arr[10] = {};
    int countEven = 0, countOdd = 0;

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter index [" << i << "]: ;
        std::cin >> arr[i];
    }

    std::cout << "\nArray: ";
    for (int n : arr) {
        std::cout << n << " ";

        if (n % 2 == 0) {
            countEven++;
        }
        else {
            countOdd++;
        }
    }

    std::cout << "\nEven numbers in array: " << countEven;
    std::cout << "\nOdd numbers in array: " << countOdd << "\n";

    return 0;
}
