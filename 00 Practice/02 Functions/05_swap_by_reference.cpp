/* Question 5: Swap two variables using references
Write swapNumbers(int& a, int& b) to exchange two integers without returning a value.
Ask the user for two integers and print them before and after the function call.
The original variables must change.
*/

#include <iostream>

void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "===== Values Before Swap =====" << std::endl;
    std::cout << "First no.: " << a << "\n";
    std::cout << "Second no.: " << b << "\n\n";

    std::cout << "===== Values After Swap =====" << std::endl;
    swapNumbers(a, b);
    std::cout << "First no.: " << a << "\n";
    std::cout << "Second no.: " << b << "\n\n";

    return 0;
}
