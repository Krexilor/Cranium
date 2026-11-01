/* Question 4: Find minimum and maximum
Given an array of integers, find its largest and smallest elements.
Initialize your tracking variables using an actual array element rather
than assuming the numbers are positive.
*/

#include <iostream>

int main() {
    int arr[5] = {-8, 12, 3, -20, 7};
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Minimum: " << min << "\n";
    std::cout << "Maximum: " << max << "\n";

    return 0;
}
