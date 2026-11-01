/* Question 6: Use a const reference
Write printFullName(const std::string& name) to print a person's name without copying the string or modifying the original.
Call the function with a string variable.
A const reference avoids copying the string and prevents the function from modifying the original. Add a comment explaining why const std::string& is appropriate here.
*/

#include <string>
#include <iostream>

void printFullName(const std::string& name) {
    std::cout << "Your name is " << name << "\n";
}

int main() {
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    printFullName(name);

    return 0;
}
