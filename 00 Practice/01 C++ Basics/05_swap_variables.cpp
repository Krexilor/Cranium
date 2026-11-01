/* Question 5: Swap Variables
Store two values, swap them, and print the values before and after swapping. Try solving it using a third variable first.
*/

#include <iostream>

int main() {
    int firstValue = 2;
    int secondValue = 3;
    int temp;

    std::cout << "Values before swapping\n";
    std::cout << "First value: " << val1 << "\nSecond value: " << val2 << "\n\n";

    temp = firstValue;      // Assign value 1 to temp variable
    firstValue = secondValue;         // Assign the second value to the first
    secondValue = temp;      // Assign the temporary value to the second

    std::cout << "Values after swapping\n";
    std::cout << "First value: " << val1 << "\nSecond value: " << val2 << "\n\n";

    return 0;
}
