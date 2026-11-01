/* Question 3: Reference-Based Value Modification
Write a function that accepts an integer reference.
- Take an integer from the user.
- Pass it to the function.
- Modify its value by multiplying it by 5.
- Print the modified value in main().
Additionally, create a second function that accepts a const int& and prints the value without modifying it.
*/

#include <iostream>

void modifyValue(int& num) {
    num *= 5;
}

void printValue(const int& num) {
    std::cout << "Value through constant function: " << num << "\n";
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "You entered: " << num << "\n";
    
    modifyValue(num);
    std::cout << "Modified value: " << num << "\n";

    printValue(num);
    
    return 0;
}
