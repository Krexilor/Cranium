/* Question 6: Rectangle Calculator
Ask the user for the length and width of a rectangle. Calculate and display its area and perimeter.
Area = length × width
Perimeter = 2 × (length + width)
*/

#include <iostream>

int main() {
    float area, perimeter, length = 0, width = 0;

    std::cout << "Enter length of rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    std::cout << "Area is " << area << "\nPerimeter is " << perimeter << std::endl;

    return 0;
}
