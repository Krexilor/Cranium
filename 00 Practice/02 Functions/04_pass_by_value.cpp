/* Question 4: Understand pass by value
Write a function increment(int n) that increases its parameter by 1.
In main(), create an integer, call the function, and print the variable both before and after the call.
The original variable remains unchanged because the function receives a copy.

Explain in a comment why the original variable does or does not change.
*/

#include <iostream>

int increment(int n) {
    return n + 1;
}

int main() {
    int num = 5;

    std::cout << "Before: " << num << "\n";
    std::cout << "Function result: " << increment(num) << "\n";
    std::cout << "After: " << num << "\n";

    return 0;
}
