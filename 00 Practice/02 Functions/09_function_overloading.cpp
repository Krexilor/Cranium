/* Question 9: Practice function overloading
Create three overloaded functions named area():
- One accepts the side of a square.
- One accepts the length and width of a rectangle.
- One accepts the radius of a circle.
Use parameter types or counts to distinguish the overloads correctly.
Return the calculated area and call each version from main().
*/

#include <iostream>

float area(int side) {
    return side * side;
}

float area(float length, float width) {
    return length * width;
}

float area(float radius) {
    return 3.14 * (radius * radius);
}

int main() {
    float result;

    result = area(5);
    std::cout << "Area of square: " << result << "\n";

    result = area(5.8f, 7);
    std::cout << "Area of rectangle: " << result << "\n";

    result = area(3.0f);
    std::cout << "Area of circle: " << result << "\n";

    return 0;
}
