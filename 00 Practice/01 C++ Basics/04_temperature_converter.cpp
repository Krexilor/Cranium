/* Question 4: Temperature Converter
Convert a temperature from Celsius to Fahrenheit.
Formula: F = (9/5)C + 32
*/

#include <iostream>

int main() {
    float fahrenheit, celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = ((9.0f / 5.0f) * celsius) + 32;

    std::cout << "\n" << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit";

    return 0;
}
