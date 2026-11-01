/* Question 11: Create an inline function
Write an inline function cube(int n) that returns the cube of an integer.
Call it with several values and display the results.
The inline keyword allows the compiler to consider substituting the function body at a call site, but does not guarantee it. Modern compilers can make this optimization with or without the keyword. In a comment, explain what inline means
and why it does not guarantee that the compiler will replace every call with the function body.
*/

#include <iostream>

inline int cube(int n) {
    return n * n * n;
}

int main() {
    std::cout << "Cube of 2: " << cube(2) << "\n";
    std::cout << "Cube of 3: " << cube(3) << "\n";
    std::cout << "Cube of 4: " << cube(4) << "\n";
    return 0;
}
