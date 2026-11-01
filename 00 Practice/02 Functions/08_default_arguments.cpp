/* Question 8: Use default arguments
Write a function calculateInterest() that accepts a principal amount, an interest rate, and a duration in years.
Set default values for the interest rate and duration. Call the function with all three arguments, with two arguments, and with only the principal amount.
Use a consistent simple-interest calculation and return the result.
*/

#include <iostream>

float calculateInterest(float principal, float interest = 0.3, int years = 1) {
    return principal * (interest / 100) * years;
}

int main() {
    float result;

    result = calculateInterest(1000);
    std::cout << "One argument: " << result << "\n";

    result = calculateInterest(1000, 0.53);
    std::cout << "Two arguments: " << result << "\n";

    result = calculateInterest(1000, 0.34, 6);
    std::cout << "Three arguments: " << result << "\n";

    return 0;
}
