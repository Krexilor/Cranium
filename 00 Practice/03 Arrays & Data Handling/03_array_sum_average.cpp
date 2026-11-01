/* Question 3: Sum and average
Take five numbers as input. Calculate their sum and average.
Make sure the average can contain a decimal value.
*/

#include <iostream>

int main() {
    int arr[5] = {};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter index [" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "\nArray: ";

    for (int n : arr) {
        std::cout << n << " ";
        sum += n;
    }

    std::cout << "\nSum of array: " << sum;
    std::cout << "\nAverage of array: " << (float)sum / 5.0f << "\n";

    return 0;
}
